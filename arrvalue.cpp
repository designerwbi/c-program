#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,2,3,3,4,2,1,2,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i];
			}
		}
	}
}
