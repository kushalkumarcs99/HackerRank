#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        if(n==0)
        cout<<"1"<<endl;
        else
        {
            for(int i=0;i<=n;i++)
            {
                if(i%2==0)
                count++;
                else
                count=count*2;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
