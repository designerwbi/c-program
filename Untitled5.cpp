#include<iostream>
using namespace std;
int main()
{
	int arr[]={6,2,3,4,1,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	int temp;
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=arr[j];
			
			}
		}
	}
	for(int i=0;i<len-1;i++)
	{
		cout<<arr[i];
	}
}
