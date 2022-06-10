#include "human.h"
#include<iostream>

using namespace std;



void Human::print()
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
	int length = strlen(fnameP);
	for (int i = 0; i < length; i++)
		this->fname[i] = fnameP[i];
	this->fname[length] = '\0';
}
void Human::setName(const char* nameP) {
	int length = strlen(nameP);
	for (int i = 0; i < length; i++)
		this->name[i] = nameP[i];
	this->name[length] = '\0';
}
void Human::setSname(const char* snameP) {
	int length = strlen(snameP);
	for (int i = 0; i < length; i++)
		this->sname[i] = snameP[i];
	this->sname[length] = '\0';
}
void Human::setData(int dayP, int monthP, int yearP) {
	this->day = dayP;
	this->month = monthP;
	this->year = yearP;
}
void Human::countHuman() {
	count++;
	cout << "Plus one human to your army!" << endl;
	cout << "Human in stack " << count << endl;
}
int Human::count{ 0 };
