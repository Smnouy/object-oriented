
#include <iostream>
#include<stdlib.h>
#include "circle_area.h"

using namespace std;
int main(int argc, char** argv) 
{
	double r,area;
	Circle_area ca;
	cin >> r;
	area = ca.get_area(r);
	cout << "S=" << area << endl; 
	return 0;
}
