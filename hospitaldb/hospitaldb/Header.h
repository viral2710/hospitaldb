#pragma once
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<string>
#define datafile "dafile1.txt"
#define indexfile "infile1.txt"
#define sindexfile "sinfile1.txt"
using namespace std;
fstream stdfile, indfile, sindfile, lfile;
int i, indsize, sindsize, lsize;
char buffer[100], skey[20];

void opener(fstream& file, string fn, int mode)
{
	file.open(fn, mode);
	if (!file)
	{
		printf("file doesn't exist\n");
	}
}

class patient
{
	char PID[10], CONTACT[15], ADDRESS[15], SEX[8], PNAME[20], DCT[15];
public:
	string pid, contact, add, s, pname, dct,error;
	string disp[1000];
	int ds=0;
	int eflag = 0;
	  void read();
	  void pack();
	  friend int search(char*);
	  void remove();
	  void datadisp();
	  void indexdisplay(int);
	  void unpack();
	  void modify();

}m;

class index
{
public:char mid[10], addr[5];
	  void initial();
	  void write();
}id[50], in;

class sindex
{
public:char sPNAME[20], smid[10];
	  void sinitial();
	  void swrite();
}sid[50];

void index::initial()
{
	indfile.open(indexfile, ios::in);
	if (!indfile)
	{
		indsize = 0;
		return;
	}
	for (indsize = 0;; indsize++)
	{
		indfile.getline(id[indsize].mid, 10, '|');
		indfile.getline(id[indsize].addr, 5, '\n');
		if (indfile.eof())
			break;
	}
	indfile.close();
}

void sindex::sinitial()
{
	sindfile.open(sindexfile, ios::in);
	if (!sindfile)
	{
		sindsize = 0;
		return;
	}
	for (sindsize = 0;; sindsize++)
	{
		sindfile.getline(sid[sindsize].sPNAME, 20, '|');
		sindfile.getline(sid[sindsize].smid, 10, '\n');
		if (sindfile.eof())
			break;
	}
	sindfile.close();
}


void index::write()
{
	opener(indfile, indexfile, ios::out);
	for (i = 0; i < indsize; i++)
		indfile << id[i].mid << '|' << id[i].addr << "\n";
	indfile.close();

}

void sindex::swrite()
{
	opener(sindfile, sindexfile, ios::out);
	for (i = 0; i < sindsize; i++)
		sindfile << sid[i].sPNAME << '|' << sid[i].smid << "\n";
	sindfile.close();
}
int search(char* fid)
{
	int low = 0, high = indsize - 1;
	int middle;
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (strcmp(fid, id[middle].mid) == 0)
			return  middle;
		else if (strcmp(fid, id[middle].mid) > 0)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}
void patient::read()
{
	error = "";
	eflag = 0;
	int k;
	cout << "\n\n" << "\t\t.....Enter patient records...\n";

	cout << "\t\t" << "enter patient id\t:";
	strcpy_s(PID, pid.c_str());
	if (search(PID) >= 0)
	{
		error="PATIENT ID IS ALREADY PRESENT!!!!";
		eflag = 1;
		return;
	}
	for (i = indsize; i > 0; i--)
	{
		if (strcmp(PID, id[i - 1].mid) < 0)
			id[i] = id[i - 1];
		else
			break;
	}
	opener(stdfile, datafile, ios::app);
	cout << "\n" << "\t\t" << "enter PNAME\t:";
	strcpy_s(PNAME, pname.c_str());
	cout << "\n" << "\t\t" << "enter ADDRESS\t:";
	strcpy_s(ADDRESS, add.c_str());
	cout << "\n" << "\t\t" << "enter SEX\t:";
	strcpy_s(SEX, s.c_str());
	cout << "\n" << "\t\t" << "enter CONTACT NO\t:";
	strcpy_s(CONTACT, contact.c_str());
	cout << "\n" << "\t\t" << "enter the CON_DCT\t:";
	strcpy_s(DCT, dct.c_str());

	pack();

	stdfile.seekg(0, ios::end);
	k = stdfile.tellg();
	stdfile << buffer << endl;
	strcpy_s(id[i].mid, PID);
	_itoa_s(k, id[i].addr, 10);

	indsize++;
	for (i = sindsize; i > 0; i--)
	{
		if (strcmp(PNAME, sid[i - 1].sPNAME) < 0)
			sid[i] = sid[i - 1];
		else if ((strcmp(PNAME, sid[i - 1].sPNAME) == 0) && (strcmp(PID, sid[i - 1].smid) < 0))
			sid[i] = sid[i - 1];
		else
			break;
	}
	strcpy_s(sid[i].sPNAME, PNAME);
	strcpy_s(sid[i].smid, PID);
	sindsize++;
	stdfile.close();
}

void patient::pack()
{
	strcpy_s(buffer, PID); strcat_s(buffer, "|");
	strcat_s(buffer, PNAME); strcat_s(buffer, "|");
	strcat_s(buffer, ADDRESS); strcat_s(buffer, "|");
	strcat_s(buffer, SEX); strcat_s(buffer, "|");
	strcat_s(buffer, CONTACT); strcat_s(buffer, "|");
	strcat_s(buffer, DCT); strcat_s(buffer, "|");
}



int sec_search()
{
	int pos, j, flag = -1, count = 0;
	cout << "\n\t\tENTER THE PNAME ....... :\t";
	strcpy_s(skey, m.pname.c_str());
	cout << skey;
	m.ds = 0;
	for (int i = 0; i < 1000; i++) {
		m.disp[i] = "";
	}
	cout << setiosflags(ios::left);
	m.disp[m.ds++]="\t\tTHE SEARCHED RECORD DETAILS ARE...:";
	m.disp[m.ds++]="\t\t SL NO.\t\tPATIENT ID\t\tNAME\t\t";
	opener(stdfile, datafile, ios::in | ios::out);
	for (j = 0; j < sindsize; j++)
		if (strcmp(skey, sid[j].sPNAME) == 0)
		{
			count = count + 1;
			string s1(sid[j].smid);
			string s2(sid[j].sPNAME);
			char c = (char)(count + '0');
			string s(&c);
			cout << s << "\t\t" << s1 << "\t\t" << s2 << endl;
			m.disp[m.ds++] = "\t\t" + s + "\t\t" + s1 + "\t\t" + s2 + "\t\t";
			flag = j;
		}
	m.disp[m.ds++] = "for delete enter the id in text box next to the update button";
	stdfile.close(); 
	return flag;

}

void patient::remove()
{
	char rmid[10];
	int pos, spos;
	cout << "\nENTER THE PATIENT ID LISTED ABOVE TO DELETE..:\t";
	strcpy_s(rmid,pid.c_str());
	for (i = 0; i < sindsize; i++)
	{
		if (strcmp(sid[i].smid, rmid) == 0)
		{
			spos = i;
			break;
		}
	}
	if (strcmp(sid[spos].sPNAME, skey) == 0)
	{
		pos = search(rmid);
		stdfile.seekp(atoi(id[pos].addr), ios::beg);
		stdfile.put('$');
		for (i = pos; i < indsize; i++)
			id[i] = id[i + 1];
		indsize--;
		for (i = spos; i < sindsize; i++)
			sid[i] = sid[i + 1];
		sindsize--;
		cout << "\n\n\n" << "RECORD DELETED SUCCESSFULLY\n";
	}
	else
		cout << "\nPATIENT ID AND NAME DOES NOT MATCH\n";
}
void patient::datadisp()
{
	opener(stdfile, datafile, ios::in);
	stdfile.seekg(0, ios::beg);
	ds = 0;
	for (int i = 0; i < 1000; i++) {
		disp[i] = "";
	}
	disp[ds++]="PATIENT ID \tPNAME\t\tADDRESS\tSEX\tCONTACT\tCON_DCT\t";
	while (1)
	{
		unpack();
		if (stdfile.eof())
			break;
		if (PID[0] != '$') {
			cout << setw(10) << PID << setw(15) << PNAME << setw(15) << ADDRESS << setw(8) << SEX << setw(13) << CONTACT << setw(13) << DCT << endl;
			string s(PID);
			cout << s<<endl;
			
			string s1(PNAME);
			cout << s1<<endl;
			string s2(ADDRESS);
			cout << s2 << endl;
			disp[ds] = s2 + "\t\t";
			string s3(SEX);
			cout << s3 << endl;
			disp[ds] = s3 + "\t\t";
			string s4(CONTACT);
			cout << s4 << endl;
			disp[ds] = s4 + "\t\t";
			string s5(DCT);
			cout << s5 << endl;
			disp[ds++] = s+ "\t\t" + s1+"\t\t"+ s2 + "\t\t"+s3 + "\t" + s4 + "\t"  + s5 + "\t\t";
		}

	}
	stdfile.close();
}
void patient::indexdisplay(int pos)
{
	m.ds = 0;
	for (int i = 0; i < 1000; i++) {
		disp[i] = "";
	}
	opener(stdfile, datafile, ios::in);
	stdfile.seekg(atoi(id[pos].addr), ios::beg);
	cout << endl << endl << endl;
	disp[ds++]="DISPLAYING RECORDS\n\n\n" ;

	for (int i = 0; i < 80; i++)   cout << '*';   cout << endl << endl << endl;
	unpack();
	string s(PID);
	disp[ds++]=" PATIENT ID  :  " +s ;
	string s1(PNAME);
	disp[ds++]=" PNAME  :  " + s1 ;
	string s2(ADDRESS);
	disp[ds++]=" ADDRESS      :  "+ s2;
	string s3(SEX);
	disp[ds++]=" SEX      :  " + s3;
	string s4(CONTACT);
	disp[ds++]=" CONTACT    :  " + s4;
	string s5(DCT);
	disp[ds++] = " CONTACT    :  " + s5;
	stdfile.clear();
	stdfile.close();
	
}
int secondary()
{
	m.ds = 0;
	for (int i = 0; i < 1000; i++) {
		m.disp[i] = "";
	}
	int j, flag = -1;
	cout << "\n\n" << "\t\tENTER THE PNAME TO SEARCH :----->";
	strcpy_s(skey,m.pname.c_str());
	string s(skey);
	m.disp[m.ds++] = "the pname for inverted list:"+s;
	opener(sindfile, sindexfile, ios::in);
	for (j = 0; j < sindsize; j++)
		if (strcmp(skey, sid[j].sPNAME) == 0)
		{
			string s2(sid[j].smid);
			m.disp[m.ds++] =s2 + ":";
			flag = j;


		}
	sindfile.close();
	return flag;

}

void patient::modify()
{
	int spos, i, flag=0;
	char key[15];
	cout << "\nENTER THE PRIMARY KEY..:\t";
	strcpy_s(key,pid.c_str());
	flag = search(key);
	eflag = 0;
	error="";
	if (flag == -1) {
		error = "NO RECORD FOUND..!!!";
		eflag = 1;
		return;
	}
	else
	{
		opener(stdfile, datafile, ios::in | ios::out);
		stdfile.seekp(atoi(id[flag].addr), ios::beg);
		stdfile.put('$');
		for (i = flag; i < indsize; i++)
			id[i] = id[i + 1];
		indsize--;
		for (i = 0; i < sindsize; i++)
			if (strcmp(key, sid[i].smid) == 0)
			{
				spos = i;
				break;
			}



		for (i = spos; i < sindsize; i++)
			sid[i] = sid[i + 1];
		sindsize--;

		stdfile.close();

	}

}

void patient::unpack()
{
	char dummy[75];
	stdfile.getline(PID, 10, '|');
	stdfile.getline(PNAME, 15, '|');
	stdfile.getline(ADDRESS, 15, '|');
	stdfile.getline(SEX, 8, '|');
	stdfile.getline(CONTACT, 15, '|');
	stdfile.getline(DCT, 15, '|');
	stdfile.getline(dummy, 75, '\n');

}


/*Double box design*/





