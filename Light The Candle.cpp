#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,l;

    cin>>t;
    int sum=0;

    for(int i=0; i<t; i++)
    {
        cin>>n;

        for(int j=0; j<n; j++)
        {
            cin>>l;
            sum+=l;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
