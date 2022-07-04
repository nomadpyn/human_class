#include "human.h"
#include<iostream>

using namespace std;
// метод вывода данных о человеке в консоль
void Human::print() const
{
	cout << "ID " << this->id << " | ";
	cout << "Fname " << this->fname << " | ";
	cout << "Name " << this->name << " | ";
	cout << "Sname " << this->sname << " | ";
	cout << "Data " << this->day << "." << this->month << "." << this->year << endl;
}
// сеттер для ID человека
void Human::setId(int idP) {
	this->id = idP;
}
// сеттер для фамилии человека
void Human::setFname(const char* fnameP) {
	delete[] this->fname;
	int length = strlen(fnameP)+1;
	this->fname = new char[length];
	for (int i = 0; i < length; i++)
		this->fname[i] = fnameP[i];
}
// сеттер для имени человека
void Human::setName(const char* nameP) {
	delete[]this->name;
	int length = strlen(nameP)+1;
	this->name = new char[length];
	for (int i = 0; i < length; i++)
		this->name[i] = nameP[i];
}
// сеттер для отчества человека
void Human::setSname(const char* snameP) {
	delete[]this->sname;
	int length = strlen(snameP)+1;
	this->sname = new char[length];
	for (int i = 0; i < length; i++)
		this->sname[i] = snameP[i];
}
// сеттер для даты рождения человека
void Human::setData(int dayP, int monthP, int yearP) {
	this->day = dayP;
	this->month = monthP;
	this->year = yearP;
}
// метод счета созданных объектов (статический метод)
void Human::countHuman() {
	count++;
	cout << "Human in stack " << count << endl;
}
// объявление статической переменной
int Human::count{ 0 };
