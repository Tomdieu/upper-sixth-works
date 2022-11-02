#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<ctime>
#include<string>
#include<cmath>
#include<conio.h>
#include<time.h>
#include<windows.h>
using namespace std;
int a[100],n,i,j,k,l,tem,m,data;
string res;

void swap()
{
	tem=a[l];
	a[l]=a[l+1];
	a[l+1]=tem;
}
int main()
{
cout<<"enter your name "<<"\n";
cin>>res;
cout<<"please enter a number"<<"\n";
cin>>n;
cout<<"\n you will enter "<<n<<"numbers"<<"\n";
for(i=0;i<n;i++)
{ system("cls");
	cout<<i+1<<"/"<<n<<"\n";
	cin>>a[i];
}
for(j=0;j<n;j++)
{
	for(l=0;l<n-j-1;l++)
	{
		if(a[l]>a[l+1])
		{
			swap();
		}
	}
}
cout<<"the sorted list in increasing order is "<<endl;
for(m=0;m<n;m++)
{
	cout<<a[m]<<"\n";
}
cout<<"enter a number to remove"<<endl;
cin>>data;
for(m=0;m<n;m++)
{
	if(data==a[m])
	{
		a[m]=a[m+1];
	}
	else
	{
		cout<<a[m]<<"\n";
	}
}
cout<<"enter a number to search"<<"\n";
cin>>data;
for(m=0;m<n;m++)
{
	if(a[m]==data)
	{
	j=1;
		break;
	}
 }
 if(j==1)
 {
 		cout<<data<<"found at position "<<m+1<<"\n";
 }
 if(j!=1)
 {
 	cout<<data <<"not found in the memory"<<endl;
}
cout<<"Welcome to the power full calculator "<<"\n";
{
	for(i=1;i<=12;i++)
	{
		for(j=1;j<=12;j++)
		{
			 
			printf(" %5d",i*j);
		}
		cout<<"\n";
	}
  }
  cout<<"enter a number to convert to octal hexadecimal"<<"\n";
  cin>>n;
  cout<<uppercase
       <<"octal\t\thexadecimal\n"
	   <<oct<<n<<"\t"
	   <<hex<<n<<endl;
	    
}

