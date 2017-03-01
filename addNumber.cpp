/*addNumber.cpp
Mar 1, 2017
Jayson Mallari
*/
#include <iostream>
using namespace std;
void addFive(int a, int b){

	cout<<"Entering addFive function "<<endl;
	cout<<"A and B before adding 5: a = "<<a<<" : b = "<<b<<endl;
	a+=5;
	b+=5;
	cout<<"A and B after adding 5: a = "<<a<<" : b = "<<b<<endl;
	cout<<"Leaving addFive function "<<endl;
}

int main()
{
	int a=10 , b=20;
	cout<<"A and B BEFORE calling the addFive function : a = "<<a<<" : b = "<<b<<endl;
	addFive(a,b);
	cout<<"A and B AFTER calling the addFive function : a = "<<a<<" : b = "<<b<<endl;
return 0;
}
