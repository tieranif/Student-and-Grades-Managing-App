#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include ”tfProject3_header.h”
#Include “tfProject3_main.cpp”
#Include “tfProject3_func.cpp”
using namespace std;

int main()
{
	struct std[NUMBER_OF_TESTS];
	Student* std;
	int how_many;

	cout<<"1.Add  2.Remove  3.Display  4.Search  5.Results  6.Quit";
	cout<<"Enter choice";

	add_Student();
	switch(c)
	{
	case 'a': //add student
	cout<<"Enter last name of the student: ";
	cout<<"Enter first name of student: ";
	cout<<"Enter student ID: ";
	cout<<"How many tests did this student take? ";
	break;

	remove_Student(int& studentID);
	case 'r': //remove student
	cout"Enter ID of student to remove: ";
	cout<<"Student does not exist";
	break;

	display();
	case 'd': //display student's records
	cout<<"\nDisplaying Information:"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Student ID:"<<studentID<<endl;
	break;

	Search(int studentID);
	case 's': //search student
	cout<<"Enter ID of student to search:";
	break;

	exportResults();
	case 'R': //export the results to a disk file
	cout<<"Enter the file name:";
	fin.open("student.dat");
	cout<<"Enter "<<NUMBER_OF_TESTS<<" tests:";
	for(int i=0; i<NUMBER_OF_TESTS; ++i)
	{
		cin>>std.tests[i];
	}
	for(int i=0; i<NUMBER_OF_TESTS; ++i)
	{
		double sum=0;
		for(int j=0; j<NUMBER_OF_TESTS; ++j)
		{
			sum+std.tests[i].tests[j];
		}
		std.average=sum/NUMBER_OF_TESTS;
	}
	cout<<"Enter data for student#"<<i+1<<endl;
	cout<<"Enter name:";
	getline(cin, std[i].name);
	for (int j=0;i<NUMBER_OF_TESTS;++i)
	{
		cout<<std.tests[j]<<"\t";
	}
	cout<<endl;
	cout<<"Average:"<<std.average<<endl;
	cout<<"Results exported to file."
	break;

	case 'q': //closing the program
	cout<<"Bye!!!"
	break;


	if(choice != 'a' && choice != 'r' && choice != 'd' && choice != 's' && choice != 'R' && choice != 'q')
	{
		cout<<"Incorrect choice. Please enter again.";
	}
	else
	{
		break;
	}
	cout<<endl;

