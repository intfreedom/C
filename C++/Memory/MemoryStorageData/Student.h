#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
	public:
		Student();
		Student(int);
		Student(string name, string desc);
		~Student();

		void ShowInfo();
		
		string GetName(){return m_Name;}
		void SetName(string val){ m_Name = val; }
		string Getdesc(){return m_desc;}
		void Setdesc(string val){ m_desc = val; }
		int Getage(){ return m_age; }
		void Setage(int val){ 
			if(val<0){
				m_age = 18;
			}else{
				m_age = val;
			}
		}

	protected:

	private:
		string m_Name;
		string m_desc;
		int m_age;
};

#endif // STUDENT_H
