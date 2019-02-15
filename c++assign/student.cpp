#include<iostream>
#include<string.h>
using namespace std;
class student 
{
	char name;
	char grade;
	int m1,m2,m3;
public:
	student()
	{
		name = '\0';
		grade = '\0';
		m1 = 0; m2 = 0; m3 = 0;

	}
	friend class collegeCourse;
};
class collegeCourse 
{
public:

	void setData(student& std, char nam,int m, int n, int o)
	{
		//int len = strlen(s);
		//std.name = (char *)malloc(sizeof(char)*(len + 1));
		std.name = nam;
		std.m1 = m;
		std.m2 = n;
		std.m3 = o;
	}
	int Average(student std) 
	{
		return(int)(((std.m1)+(std.m2)+(std.m3))/3);
	}
	void  CalcGrade(student &s)
	{
		int s1 = Average(s);
		if (s1 > 60) { s.grade='a'; }
		else if ((s1 <= 60) && (s1 > 50)) { s.grade= 'b'; }
		else if ((s1 <= 50) && (s1 > 40)) { s.grade='c'; }
		else { s.grade='f'; }
	}
		void display(student s) {
			cout << s.name<<endl<< s.m1 << endl << s.m2 << endl << s.m3 << endl <<Average(s) << endl <<s.grade;
		}
	
};
int main()
{
	student one;
	collegeCourse one1;
	one1.setData(one,'s', 50, 50, 50);
	one1.Average(one);
	one1.CalcGrade(one);
	one1.display(one);
	getchar();
	return 1;
}