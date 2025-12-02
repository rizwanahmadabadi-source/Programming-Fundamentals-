#include<iostream>
using namespace std;
int main()
{
   int age;
   cout<< " Enter Your age: ";
   cin>>age;
   
   string Age=(age<13)?"Chlid":(age>=13&&age<=19)?"Teenager":"Adult";
   cout<<" Age Falls Under Catagory: "<<Age<<endl;
   return 0;

}
