#pragma once
#include<cstring>

class Human
{
private:
	unsigned int id;
	char* fname;
	char* name;
	char* sname;
	int day;
	int month;
	int year;
	static int count;
public:
	Human(int idP, const char* fnameP, const char* nameP, const char* snameP, int dayP, int monthP, int yearP) 
		: day{ dayP }, month{ monthP }, year{ yearP } {
		this->id = idP;
		int length1 = strlen(fnameP)+1;
		this->fname = new char[length1];
		int i = 0;
		for (i = 0; i < length1; ++i)
			this->fname[i] = fnameP[i];
		int length2 = strlen(nameP)+1;
		this->name = new char[length2];
		for (i = 0; i < length2; i++)
			this->name[i] = nameP[i];
		int length3 = strlen(snameP)+1;
		this->sname = new char[length3];
		for (i = 0; i < length3; i++)
			this->sname[i] = snameP[i];
		countHuman();
		}
	Human(): Human(0,"No","No","No",1,1,1900) {}
	~Human() {
		delete[] this->fname;
		delete[] this->name;
		delete[] this->sname;
	}
	void countHuman();
	void print();
	void setId(int idP);
	void setFname(const char* fnameP);
	void setName(const char* nameP);
	void setSname(const char* snameP);
	void setData(int dayP, int monthP, int yearP);
};


