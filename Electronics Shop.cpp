#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    int ar[n+1],br[m+1];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<m;i++)
    cin>>br[i];
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(ar[i]+br[j]<=b && max<(ar[i]+br[j]))
            max=ar[i]+br[j];
        }
    }
    if(max<=0)
    cout<<"-1"<<endl;
    else
    cout<<max<<endl;
    return 0;
}
