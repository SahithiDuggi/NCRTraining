#include<cmath>
#include<iostream>
using namespace std;
class point {
	double x;
	double y;
public:
	point() {
		x = 0;
		y = 0;
	}
	point(double a, double b) {
		x = a;
		y = b;
	}
	friend void dist(point p1,point p2);
};
void dist(point p1, point p2) {
	double distance;
	p2.x = pow((p2.x - p1.x),2);
	p2.y = pow((p2.y - p1.y),2);
	distance = sqrt(p2.x+p2.y);
	cout << distance;
}
int main()
{
	point p1(6, 7);
	point p2(9, 11);
	dist(p1, p2);
	getchar();

	
}
