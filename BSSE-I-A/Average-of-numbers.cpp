#include <iostream>
using namespace std;
int main(){
	float num1, num2, num3, num4, num5, num6, num7;
	float sum;
	float avg;
	cout << "Enter Course Marks: \n";
	
	cout << "Enter marks of course 1: ";
	cin >> num1;
	
	cout << "Enter Marks of course 2: ";
	cin >> num2;
	
	cout << "Enter Marks of course 3: ";
	cin >> num3;
	
	cout << "Enter marks of course 4: ";
	cin >> num4;
	
	cout << "Enter Marks of course 5: ";
	cin >> num5;
	
	cout << "Enter Marks of course 6: ";
	cin >> num6;
	
	cout << "Enter Marks of course 7: ";
	cin >> num7;
	
	sum = num1+num2+num3+num4+num5+num6+num7;
//	avg = sum / 7;   -> to calculate the AVERAGE of the courses
	
	cout << "The sum of the Courses are: " << sum << endl;
//	cout << "The average of the Couuses are: " << avg << endl;
	return 0;
}