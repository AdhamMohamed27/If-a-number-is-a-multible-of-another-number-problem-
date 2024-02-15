#include <iostream>
using namespace std;

void swap(int &, int &);
void readint(int&,int&);
bool multiple(int&,int&);

int main()
{
   int num1,num2;
   readint(num1,num2);
   if (multiple(num1,num2))
   cout<<"The second Number is a multiple of the first Number"<<endl;
   else 
   cout<<"The second Number is not a multiple of the first Number"<<endl;
   
    return 0;
}

void swap(int&num1, int &num2)
{
    int temp=num2;
    num2=num1;
    num1=temp;
    cout<<"The swaped values are: "<<num1<<','<<num2<<endl;
}

void readint(int &num1,int &num2)
{
    cout<<"Pleas ente the two number and they should be greater than 0: "<<endl;
    cin>>num1>>num2;
    if(num1>num2)
    swap(num1,num2);

}

bool multiple(int& num1,int& num2)
{
    if (num2%num1==0)
    return 1;
    else
    return 0;
}
