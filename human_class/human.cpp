#include "human.h"
#include<iostream>

using namespace std;



void Human::print() const
{
	cout << "ID " << this->id << " | ";
	cout << "Fname " << this->fname << " | ";
	cout << "Name " << this->name << " | ";
	cout << "Sname " << this->sname << " | ";
	cout << "Data " << this->day << "." << this->month << "." << this->year << endl;
}
void Human::setId(int idP) {
	this->id = idP;
}
void Human::setFname(const char* fnameP) {
	delete[] this->fname;
	int length = strlen(fnameP)+1;
	this->fname = new char[length];
	for (int i = 0; i < length; i++)
		this->fname[i] = fnameP[i];
}
void Human::setName(const char* nameP) {
	delete[]this->name;
	int length = strlen(nameP)+1;
	this->name = new char[length];
	for (int i = 0; i < length; i++)
		this->name[i] = nameP[i];
}
void Human::setSname(const char* snameP) {
	delete[]this->sname;
	int length = strlen(snameP)+1;
	this->sname = new char[length];
	for (int i = 0; i < length; i++)
		this->sname[i] = snameP[i];
}
void Human::setData(int dayP, int monthP, int yearP) {
	this->day = dayP;
	this->month = monthP;
	this->year = yearP;
}
void Human::countHuman() {
	count++;
	cout << "Human in stack " << count << endl;
}
int Human::count{ 0 };
