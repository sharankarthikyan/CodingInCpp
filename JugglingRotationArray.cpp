#include <iostream>

using namespace std;

int gcd(int n,int d)
{

    if(d==0)
    {
        return n;
    }
    else
    {
        return gcd(d,n%d);
    }

}

void rotate_left(int a[],int n, int d)
{

    int g_c_d = gcd(n,d);
    int i,k;
    for(i=0;i<g_c_d;i++)
    {
        int temp=a[0];
        int j=i;
        while(1)
        {
            k=j+d;
            if(k>=n)
            {
                k=k-n;
            }
            if(k==i)
            {
                break;
            }
            a[j]=a[k];
            j=k;
        }
        a[j]=temp;
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}

int main()
{
    int a[100],n,d,i;

    cout<<"Enter number of elements in an Array"<<"\n";
    cin>>n;

    cout<<"Enter the elements in an Array:"<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter number of times to rotate:"<<"\n";
    cin>>d;

    rotate_left(a,n,d);
    print(a,n);


    return 0;
}
