#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long a,s=0,s1=0;
    int b,n=0,n1=0,k=0;
    int d[10],nl[10];
    int c=0;
    int i=0,j=0;
    for (i=0; i<10; i++)
    {
        d[i]=0;
        nl[i]=0;
    }
    cout<<"Write a number: "<<endl;
    cin>>a;
    i=0;
    while(a!=0) {
        b=a%10;
        a=a/10;
        if(b%2!=0) {
            d[i]=b;
            i++;
        }
        else {
            nl[k]=b;
            k++;
        }
    }
    n=i;
    n1=k;
    cout<<n1<<" even numbers "<<n<<" odd numbers "<<endl;
    cout<<" Odd numbers not ranged array"<<endl;
    for(i=0; i<n; i++)
        cout<<d[i]<<" ";
    cout<<endl;
    cout<<" Even numbers not ranged array"<<endl;
    for(i=0; i<n1; i++)
        cout<<nl[i]<<" ";
    cout<<endl;
    c=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(d[i]>d[j])
            {
                c=d[i];
                d[i]=d[j];
                d[j]=c;
            }
        }
    }
    cout<<" Odd numbers ranged array"<<endl;
    for(i=0; i<n; i++)
        cout<<d[i]<<" ";
    cout<<endl;
    cout<<"Min odd number "<<d[n-1]<<endl;
    c=0;
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n1; j++)
        {
            if(nl[i]<nl[j])
            {
                c=nl[i];
                nl[i]=nl[j];
                nl[j]=c;
            }
        }
    }
    cout<<" Even numbers ranged array"<<endl;
    for(i=0; i<n1; i++)
        cout<<nl[i]<<" ";
    cout<<endl;
    cout<<"Max even number "<<nl[k-1]<<endl;
    for(i=0; i<n; i++)
    {
        s=s*10+d[i];
    }
    for(i=0; i<n1; i++)
        s1=s1*10+nl[i];
    cout<<"Max odd digits' number "<<s<<endl;
    cout<<"Min odd digits' number "<<s1<<endl;
    return 0;
}
