/*addNumber.cpp
Mar 1, 2017
Jayson Mallari
*/
#include <iostream>
using namespace std;
void addFiveValue(int a, int b){

	cout<<"Entering addFive function \"ADD BY VALUE\""<<endl<<endl;
	cout<<"A and B before adding 5: a = "<<a<<" : b = "<<b<<endl;
	a+=5;
	b+=5;
	cout<<"A and B after adding 5: a = "<<a<<" : b = "<<b<<endl<<endl;
	cout<<"Leaving addFive function \"ADD BY VALUE\""<<endl;
}

void addFiveReference(int& a, int& b){

	cout<<"Entering addFive function \"ADD BY VALUE\""<<endl<<endl;
	cout<<"A and B before adding 5: a = "<<a<<" : b = "<<b<<endl;
	a+=5;
	b+=5;
	cout<<"A and B after adding 5: a = "<<a<<" : b = "<<b<<endl<<endl;
	cout<<"Leaving addFive function \"ADD BY VALUE\""<<endl;
}

int main()
{
	int a=10 , b=20;
	cout<<"A and B BEFORE calling the addFive function : a = "<<a<<" : b = "<<b<<endl;
	addFiveValue(a,b);
	cout<<"A and B AFTER calling the addFive function : a = "<<a<<" : b = "<<b<< ",After using \"CALL BY VALUE\""<<endl;

	addFiveReference(a,b);
	cout<<"A and B AFTER calling the addFive function : a = "<<a<<" : b = "<<b<< ",After using \"CALL BY REFERENCE\""<<endl;
return 0;
}
