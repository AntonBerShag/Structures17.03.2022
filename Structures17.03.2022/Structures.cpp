#include <iostream>
#include <string>
using namespace std;

struct coordinates {
	int X;
	int Y;
};

void showCoordinates(coordinates &C) {
	C.X = 0;
	C.Y = 0;
	//cout << &C << endl;
	//cout << "X = " << C.X << endl;
	//cout << "Y = " << C.Y << endl;
}

coordinates inputObj() {
	coordinates newObj;
	cout << "¬ведите X: ";
	cin >> newObj.X;
	cout << "¬ведите Y: ";
	cin >> newObj.Y;
	return newObj;
}

void fillObj(coordinates &C) {
	cout << "¬ведите X: ";
	cin >> C.X;
	cout << "¬ведите Y: ";
	cin >> C.Y;
}

int main() {
	setlocale(LC_ALL, "Russian");
	//int n = 10;
	// int &refn = n;

	coordinates pointA = { 5, 5 };
	coordinates pointB = { 9, 0 };
	coordinates pointC = { 3, 10 };
	coordinates pointE;
	fillObj(pointE);
	cout << "E.X = " << pointE.X << endl;
	cout << "E.Y = " << pointE.Y << endl;
	
	
	/*coordinates pointD = inputObj();
	cout << pointD.X << " " << pointD.Y << endl;

	pointA = inputObj();
	cout << pointA.X << " " << pointA.Y << endl;

	cout << inputObj().X << endl;*/
	
	/*cout << "Point A:\n";
	showCoordinates(pointA);

	cout << "Point B:\n";
	showCoordinates(pointB);

	cout << "Point C:\n";
	showCoordinates(pointC);*/

	//cout << &pointA << endl;
	//showCoordinates(pointA);
	
	//cout << pointA.X << " " << pointA.Y << endl;


	/*struct date {
		int day;
		int month;
		int year;
		string note;
	};

	struct person {
		string name;
		date birthday;
	}Tom;
	Tom.name = "Tom Smith";
	Tom.birthday = { 1, 2, 1998 };
	Tom.birthday.day = 20;
	cout << Tom.name << endl << Tom.birthday.day << "." << Tom.birthday.month << "." << Tom.birthday.year << endl;

	person Bob = { "Bob", {15, 6, 1980} };

	cout << Bob.name << endl << Bob.birthday.day << "." << Bob.birthday.month << "." << Bob.birthday.year << endl;

	person* pB = &Bob;
	cout << pB->name << endl;// выводим им€ через указатель
	pB->name = "Bob Thomson";// мен€ем им€ через указатель
	cout << Bob.name << endl;

	pB = &Tom; // перенаправл€ем указатель на другой объект

	cout << pB->name << endl;*/

	/*struct date {
		int day = 15;//значени€ по умолчанию
		int month = 5;
		int year = 2100;
		string note = "Sola!";
	} birthday = { 1, 1, 1, "" }, date1;

	birthday.day = 10;
	birthday.month = 5;
	birthday.year = 1970;
	birthday.note = "Ivan's birthday!";
	date1 = { 18, 3, 2022, "Homeworks" };
	cout << birthday.day << "." << birthday.month << "." << birthday.year << " - " << birthday.note << endl;
	
	date1.day += 10;
	date1.month = 7;
	cin >> date1.year;
	date1.note += "!";

	cout << date1.day << "." << date1.month << "." << date1.year << " - " << date1.note << endl;

	date date2 = { 2, 3, 2000, "My first trip :O"}; //”даленно

	cout << date2.day << "." << date2.month << "." << date2.year << " - " << date2.note << endl;*/


	return 0;
}