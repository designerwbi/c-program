#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,4,4,5,5,6};
	int len= sizeof(arr)/sizeof(arr[0]);
	int j=0;
	for(int i=0;i<len;i++)
	{
		if(arr[i]!=arr[i+1])
			arr[j++]=arr[i];
	}
	for(int i=0;i<len;i++)
	cout<<arr[i];
}
