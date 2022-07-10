#include<iostream>
using namespace std;
int main()
{
	int arr[20];
	cout<<"Enter the value of an array\n";
	for(int i=0;i<=10;i++)
	{
		cin>>arr[i];
	}
	for(int i=10;i>=0;i--)
	{
		cout<<arr[i];
	}
}

