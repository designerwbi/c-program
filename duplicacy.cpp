#include<iostream>
using namespace std;
void duplicate(int arr[],int len)
{
	int temp;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
	for(int i=0;i<len;i++)
	cout<<arr[i];
	
	for(int i=0;i<len;i++)
	{
	int count=1;
		for(int j=i+1;j<len;j++)
		{
			if(arr[i]==arr[j])
		count++;
			else
			break;
		}
		if(count>1)
		{
		cout<<"Occurence of "<<arr[i]<<"is"<<count<<endl;
		i+=(count-1);
	}
	}
}

int main()
{
	int arr[]={2,3,4,4,5,5,3,2,5,6,7,8,9,3,2,3};
	
	int len= sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,len);
}
