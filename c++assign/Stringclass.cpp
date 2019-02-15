#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class strin {
	int len;
	char* str;
public:
	strin()
	{
		len = 0;
		str = NULL;
	}
	strin(const char* s){
		cout << "parameteriezed";
		len = strlen(s);
		str = new char[len];
		strcpy(str, s);
	}
	~strin() 
	{
		cout << "destructor called";

	}
	char operator [](int i) {
		if (i >= len) { cout << "array out of bounds"; }
		return str[i];
	}


};
int main() {
	const char * s = "sahithi";
	
	strin s1(s);
	strin s2(s1);
	cout<<s1[0]<<s2[1];
	getchar();
}