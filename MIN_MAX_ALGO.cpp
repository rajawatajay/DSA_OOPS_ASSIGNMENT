#include<iostream>
using namespace std;
main()
{
    int i,size,max=0,min=0;
    cout<<"Enter size to find largest and smallest of given numbers"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter numbers in array";
    cout<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
          max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"The largest number is :"<<max<<endl;
    cout<<"The smallest number is :"<<min<<endl;
}