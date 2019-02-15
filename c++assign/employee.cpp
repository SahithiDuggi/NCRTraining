#include<iostream>
#include<string>
using namespace std;
class employee 
{
	int empno;
	string name;
	int salary;
public:
	employee()
	{
		empno = 0;
		name = '\0';
		salary = 0;
	}
	friend int total_salary(employee e[], int n);

	friend istream &operator >>(istream &cin, employee &e);
	friend ostream &operator <<(ostream &cout, employee e);

};
int total_salary(employee e[], int n)
{
	int totalSal = 0;
	for (int i = 0; i < n; i++) {
		totalSal = totalSal + e[i].salary;
	}
	return totalSal;
}
ostream & operator <<(ostream &cout, employee e) 
{
	std::cout << "employee number" << e.empno << endl<<"name" << e.name<< endl <<"salary"<<e.salary<<endl;
	return(cout);
}
istream & operator >>(istream &cin, employee &e)
{
	cout << "give input"<<endl;
	std::cin >> e.empno >> e.name >> e.salary;
	cout << "input taken" << endl;;
	return(cin);
}
int main()
{
	employee  e[2];
	for (int i = 0; i < 2; i++)
	{
		cin >> e[i];
		cout << e[i];
	}
	cout << total_salary(e, 2);
	getchar();
	getchar();
	return 1;
}