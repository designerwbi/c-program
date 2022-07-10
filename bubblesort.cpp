#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,4,3,2,1};
	   int len = sizeof(arr)/sizeof(arr[0]);
	   int swap;
	   int k=3;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=swap;
		}
		}
	}
	cout<<arr[k-1];
}
