#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{char name[100];

ofstream file("ollywood.txt");
if(file.fail())
{cout<<"error";
}cout<<"enter movie list name";
cin>>name;
for(int i=0;i<1;i++)
{
cout<<name;
}
}
