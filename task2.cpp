#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

int main()
{
    int num,index,i,t;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter an index: ";
    cin>>index;
    
    for(t=6;t>index;t--)
    arr[t]=arr[t-1];
	arr[index]=num;
	for(i=0;i<=6;i++)
	cout<<arr[i]<<endl;
}
