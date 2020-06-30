#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    k %= n; // Remove the number of full array rotations from k
    for(int i = 0; i < q; i++) {
        int b;
        cin>>b;
        cout<<a[(n-k+b)%n]<<"\n"; // Calculate the new index for b
    }
    return 0;
}
