#include<iostream>
using namespace std;
int main()
{
	int arr[]={4,3,5,6,7,8};
	int len=sizeof(arr)/sizeof(arr[0]);
	int key;
	int j=0;
	for(int i=0;i<len;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	for(int i=0;i<len;i++)
	cout<<arr[i];
	
}
