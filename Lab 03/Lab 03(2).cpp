#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"Enter an Integer: ";
	cin>>num1;
	string Num1=(num1%2==0)?"Even":"Odd";
	cout<<"The Number 1"<<num1 <<" is: "<<Num1<<endl;
	return 0;
	

}
