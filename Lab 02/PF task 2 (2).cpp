#include<iostream>
#include<string>

using namespace std;
int main()
{
	
	string name,rollno,dep,grade;
  int number,eng_marks,phy_marks,math_marks,total_marks=300,obt_marks;
  float percentage;
  
  cout<<"enter Student Name: ";
  getline(cin,name);
  cout<<"Enter Roll no: "<<endl;
  cin>>rollno;
  cout<<"Enter departament name: "<<endl;
  cin.ignore();
  getline(cin,dep);
  cout<<"Enter marks in English:  "<<endl;
  cin>>eng_marks;
  cout<<"Enter marks in Physics: "<<endl;
  cin>>phy_marks;
  cout<<"Enter marks In Math: "<<endl;
  cin>>math_marks;
  
  obt_marks=eng_marks+math_marks+phy_marks;
  percentage = obt_marks/(float)total_marks*100;
  
  if(percentage>=80)
  grade="A+";
  else if(percentage>=70)
  grade="A";
  else if(percentage>=60)
  grade="B";
  else if(percentage>=50)
  grade="C";
  else if(percentage>=40)
  grade="D";
  else 
  grade="fail";
  
	cout<<"========================="<<endl;
	cout<<"   student reault card   "<<endl;
	cout<<"========================="<<endl;
	cout<<"Name               "<<name<<endl;
	cout<<"Roll No            "<<rollno<<endl;
	cout<<"Department         "<<dep<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Subject            MArks"<<endl;
	cout<<"English            "<<eng_marks<<endl;
	cout<<"Math               "<<math_marks<<endl;
	cout<<"Pysics             "<<phy_marks<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Total marks        "<<obt_marks<<endl;
	cout<<"Percentage         "<<percentage<<"%"<<endl;
	cout<<"Grade              "<<grade<<endl;
	cout<<"========================="<<endl;
}


  
