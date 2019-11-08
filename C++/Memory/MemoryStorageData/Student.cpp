#include "Student.h"

Student::Student()
{
	cout << "Con" << endl;
}

Student::Student(int age)
{
	Setage(age);
	cout << "Parameter: Student(int age)" << endl;
}

Student::Student(string name, string desc)
{
	m_Name = name;
	m_desc = desc;
	cout << "Parameter: Student(string name, String desc" << endl;
}


Student::~Student()
{

}
