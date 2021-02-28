#include<iostream>
using namespace std;
int main()
{
int ar1[10];
int count;
int odd=0,even=0;
for(count=0;count<10;count++)
{
	cin>>ar1[count];
	
}
for(count=0;count<10;count++)
{
	if(ar1[count]%2==0)
	{
		even=even+1;
	}
	else
	{
		odd=odd+1;
	}
}
cout<<"even: "<<even;
cout<<"odd: "<<odd;
}
