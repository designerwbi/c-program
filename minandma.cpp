#include<iostream>
using namespace std;
void findMinandMax(int arr[])
{
	int len = sizeof(arr)/sizeof(arr[0]);
	int min = arr[0];
	int max = arr[0];
	for(int i=1;i<len;i++)
	{
	if(arr[i]<min)
	min=arr[i];
	if(arr[i]>max)
	max=arr[i];
}
cout<<"Max"<<max;
cout<<"Min"<<min;
}

int main()
{
	int arr[]={6,2,3,4,1,9};
	findMinandMax(arr);
}

