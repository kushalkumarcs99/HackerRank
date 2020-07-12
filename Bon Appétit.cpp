#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b;
    cin>>b;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==k)
        continue;
        else
        sum+=a[i];
    }
    int hal = sum/2;
    int diff=abs(hal-b);
    if(diff==0)
    cout<<"Bon Appetit"<<endl;
    else
    cout<<diff<<endl;
    return 0;
}
