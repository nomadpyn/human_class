#pragma once
#include<cstring>
// Класс Человек
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
// конструктор с параметрами
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
// конструктор по умолчанию
	Human(): Human(0,"No","No","No",1,1,1900) {}
// конструктор копирования
	Human(const Human& other) : id{ other.id }, day{ other.day }, month{ other.month }, year{ other.year }{
		int length1 = strlen(other.fname) + 1;
		this->fname = new char[length1];
		int i = 0;
		for (i = 0; i < length1; ++i)
			this->fname[i] = other.fname[i];
		int length2 = strlen(other.name) + 1;
		this->name = new char[length2];
		for (i = 0; i < length2; i++)
			this->name[i] = other.name[i];
		int length3 = strlen(other.sname) + 1;
		this->sname = new char[length3];
		for (i = 0; i < length3; i++)
			this->sname[i] = other.sname[i];
		countHuman();
	}
// деструктор (очистка динамической памяти)
	~Human() {
		delete[] this->fname;
		delete[] this->name;
		delete[] this->sname;
	}
// объявление методов в заголовочном файле
	void countHuman();
	void print() const;
	void setId(int idP);
	void setFname(const char* fnameP);
	void setName(const char* nameP);
	void setSname(const char* snameP);
	void setData(int dayP, int monthP, int yearP);
};


