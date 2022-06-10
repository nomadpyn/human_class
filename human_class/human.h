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
	Human(int idP, const char* fnameP, const char* nameP, const char* snameP, int dayP, int monthP, int yearP) : day{ dayP }, month{ monthP }, year{ yearP } {
		this->id = idP;
		int length = strlen(fnameP);
		this->fname = new char[length];
		int i = 0;
		for (i = 0; i < length; i++)
			this->fname[i] = fnameP[i];
		this->fname[length] = '\0';
		length = strlen(nameP);
		this->name = new char[length];
		for (i = 0; i < length; i++)
			this->name[i] = nameP[i];
		this->name[length] = '\0';
		length = strlen(snameP);
		this->sname = new char[length];
		for (i = 0; i < length; i++)
			this->sname[i] = snameP[i];
		this->sname[length] = '\0';
		countHuman();
		}
	Human(): Human(0,"No","No","No",1,1,1900) {}
	~Human() {}
	void countHuman();
	void print();
	void setId(int idP);
	void setFname(const char* fnameP);
	void setName(const char* nameP);
	void setSname(const char* snameP);
	void setData(int dayP, int monthP, int yearP);
};


