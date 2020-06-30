#include<bits/stdc++.h>
using namespace std;

int max_fun(int a[],int n)
{
    int max1=0;
    for(int i=0;i<n;i++)
    {
        if(max1<a[i])
        max1=a[i];
    }
    return max1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int max=max_fun(a,n);
    if(max<k)
    cout<<"0"<<endl;
    else
    {
        int c=abs(k-max);
        cout<<c<<endl;
    }
    return 0;
}
