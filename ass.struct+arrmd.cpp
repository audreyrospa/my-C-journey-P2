#include <iostream>
#include <string>
using namespace std;

struct achievement{
	string ach_name;
	int year;
	string subs;
};

struct student{
	string name;
	int studnum;
	string faculty;
	int bdate;
	int achi;
	achievement ach[100];
}; student student[100];

void head(){
	cout << "************************************" << endl;
	cout << "     STUDENT ACHIEVEMENT RECORD     " << endl;
	cout << "************************************" << endl;
};

int main()
{
	head();
	int a;
	cout << "number of students:"; cin >> a;
	for (int i=0; i < a; i++){
		cout << "Student Number :"; cin >> student[i].studnum; cin.ignore();
		cout << "Student Name   :"; getline (cin,student[i].name); 
		cout << "Birth Date     :"; cin >> student[i].bdate;
		cout << "\n" << endl;
		cout << "number of achievment :"; cin >> (cin,student[i].achi);
		for (int j=0; j < student[i].achi; j++){
			cout << "No-" << j+1 << endl;
			cout << "Year Achieved   :"; cin >> student[i].ach[j].year; cin.ignore();
			cout << "Achievment Name :"; getline (cin,student[i].ach[j].ach_name);
			cout << "Substantiantion :"; getline (cin,student[i].ach[j].subs);
		}
		cout << endl;
	}	
	for (int i=0; i < a; i++){
    	cout << "\n" << endl;
        cout << "Student Name   : " << student[i].name << endl;
		cout << "Student Number : " << student[i].studnum << endl;
		cout << "Birth Date     : " << student[i].bdate << endl;
        cout << "\n" << endl;
        for (int j=0; j < student[i].achi; j++){
        cout << "No-" << j+1 << endl;
        cout << "Achievment Name : " << student[i].ach[j].ach_name << endl;
		cout << "Year            : " << student[i].ach[j].year << endl;
		cout << "Substantiantion : " << student[i].ach[j].subs << endl;
		}
	cout << endl;
	}
	return 0;
}
