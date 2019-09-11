#include <iostream>

using namespace std;

int count=1; //this is just to count the rotation

void print(int a[], int n){

    cout<<"After "<<count<<" Rotation"<<"\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
    count++;
}

void rotate_left(int a[],int n,int d){

    int temp=a[0],i;
    for(i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[i]=temp;

    print(a,n);
}

int main()
{
    int a[100],i,n,d;

    cout<<"Number of Elements in Array:"<<"\n";
    cin>>n;

    cout<<"Enter the elements:"<<"\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"How many times want to Rotate:";
    cin>>d;

    for(i=0;i<d;i++){
        rotate_left(a,n,d);
    }

    return 0;
}
