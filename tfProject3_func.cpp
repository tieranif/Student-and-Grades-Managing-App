#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include ”tfProject3_header.h”
#include “tfProject3_main.cpp”
#include “tfProject3_func.cpp”
using namespace std;


//adds student to the file
void add_student()
{
    fin.ignore();
    string name;
    int studentID, NUMBER_OF_TESTS;
    int* tests[NUMBER_OF_TESTS]; //declare dynamic array
    ifstream fin;
    ofstream fout;
    fin.open("student.dat");
    if(fin.fail())
    {
        cout<<”Student does not exist.”<< endl;
        exit(1);
    }
    fin.open("student.dat");
    cout<< "Enter first and last name of the student: "<<endl;
    getline(fin, name, “, “);
    cout<< " Enter student ID: " <<endl;
    fin>> studentID >> “, “;
    cout << "How many tests did this student take?" <<endl;
    fin>> NUMBER_OF_TESTS>> “, “;
    for (int i=0; i<NUMBER_OF_TESTS; ++i)
    {
        cin .ignore();
        Cout << “Enter score #” << i+1 << “:” << endl;
        fin >> tests[i];
    }
    std[i].tests=new int[NUMBER_OF_TESTS]; //edit std allocate
    fout << name << ", "<< studentID << ", "<< NUMBER_OF_TESTS << ", "<<tests;
    fin.close();
    delete [] tests; //delete array
}
//removes student from the file
void remove_student(int& studentID)
{
    getNumber();  //call function getNumber to get the current number of students in the data file.
    int removeID;
    Student* std;
    ifstream fin;
    fin.open("student.dat");
    if(fin.fail())
    {
        cout<<”fail”<<endl;
        exit(1);
    }
    std=new int[num_students];
//In a  loop, read one line of the file at a  time and store appropriate data in the dynamic array.
    for(int i=0; i<num_students; i++) //number of students needs to be replaced
    {
        if(!removeID==studentID)
        {
            cout<< "Student does not exist."<<endl;
            return main;
        }
        else
        {
            removeID=true;
            removeID=studentID; //store input into size
        }

fin.close();

// If you have found a match while reading:
    fin.open("student.dat");
    if(!fin.eof())
        {
           fin>>std.removeID  //Copy the entire file to your dynamic array
        else
        {
                continue;
                removeID.clear();
        }

        fin.close();
        }
delete [] std;
}
    // Display Function.

void display()
{
    cout<<"\n\nStudent Details\n"<<endl;
        // Print the name with size 30 , id with size 15 and scores with size 5.
        for(int i=0;i<count;i++)
        {
            // name
            cout<<left<<setw(30)<<students[i]name"<<" ";
            // Id
            cout<<left<<setw(15)<<students[i].id<<" ";
            // Scores
            for(int j=0;j<students[i].size;j++)
            {
                cout<<left<<setw(5)<<students[i].scores[j]<<" ";
            }
            cout<<endl;
        }
}
//Search Function.
void search(int studentID)
    {
        int count;
        bool *studentID==studentID;
        if(studentID==false)
        {
            cout<<"No match was found. Try again."<<endl;
            cin>>studentID;
        }
        for (int i = 0; i < count; i++)
        {
            cout << right << setw(30) << st[i].fName << " " << st[i].lName << setw(15) << right << st[i].id;
            for (int j = 0; j < 5; j++)
            {
                cout << setw(5) << st[i].score[j];
            }
            cout << endl;
        }
    }

//exportResults Function.
void exportResults()
{
   int studentID = getline();
   studentID--;
   struct student students[studentID];
   ofstream of;
   of.open("average.dat");

   ifstream fin;
   fin.open("student.dat");
   string line;
   int i=0;
   bool flag=false;
   vector<string> result;
   while(!fin.eof())
   {
   	getline(fin,line);
   	if ( line.size() == 0 )
   		break;
   	result.clear();
		stringstream s_stream(line); //create string stream from the string
		while(s_stream.good())
   	{
   	string substr;
   	getline(s_stream, substr, ','); //get string delimited by comma
   	result.push_back(substr);
		}
   	studentID[i] = result.at(2);
   	stringstream g(result.at(3));
   	g>>students[i].NUMBER_OF_TESTS;
   	studentID[i].scores = new int(NUMBER_OF_TESTS);
   	for(int j = 4,k=0; j<result.size()-1; j++,k++)
   	{
   		stringstream g(result.at(j));
   		g>>students[i].scores[k];
   	}
   	i++;
   }
   for(int i=0;i<studentID;i++)
   {
   		float total = 0;
   		for(int j=0;j<students[i].NUMBER_OF_TESTS;j++)
   		{
   			total = total + students[i].scores[j];
   		}
   		float min = findMinimum(students[i].scores,students[i].NUMBER_OF_TESTS);	   
   		cout<<endl<<total<<" "<<min<<" "<<students[i].NUMBER_OF_TESTS<<endl;   
   		float avg = (total-min)/students[i].NUMBER_OF_TESTS;
   		of<<students[i].studentID<<","<<std::fixed<<setprecision(1)<<avg;
   		of<<"\n";
   }
    
//computes the minimum out of the test scores and returns the score.
void findminimum(int arr, int NUMBER_OF_TESTS)  //( int size, int minimum)
    {
        int i;
        if(arr[i]<5)
        {
            NUMBER_OF_TESTS=0; //minimum
        }
        else if(arr[i] < NUMBER_OF_TESTS) //minimum
        {
            NUMBER_OF_TESTS = arr[i]; //minimum
        }
        return exportResults;
    }
    
//getNumber function
int getNumber()
{
    ifstream fin;
    fin.open("student.dat");
    if (fin.fail())
    {
        cout<<"File error."<<endl;
        exit(1);
    }
int count=0;
string line;
    while(!fin.eof())
    {
        getline(fin, line);
        ++count;
    }
fin.close();
return(count);
}

