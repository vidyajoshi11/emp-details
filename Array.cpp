#include<iostream>
using namespace std;
class employee
{
char name[30];
int age, salary;
public:
void getdata(void);
void putdata(void);
};
void  employee:: getdata(void)
{
  cout<<"enter name:";
  cin>>name;
  cout<<"enter age:";
  cin>>age;
  cout<<"enter salary:";
  cin>>salary;
}
void employee:: putdata(void)
{
  cout<<"name:"<<name;
  cout<<"age:"<<age;
  cout<<"salary:"<<salary;
}
const int size=5;
int main()
{
  employee manager[size];
for(int i=0; i<size; i++)
{
cout<<"Details of manager="<<i+1<<"\n";
manager[i].getdata();
}
cout<<"\n";
for(int i=0; i<size; i++)
{
cout<<"\n manager="<<i+1<<"\n";
manager[i].putdata();
}
return 0;
}
