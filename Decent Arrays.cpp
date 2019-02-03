#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>v;


    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    std::sort(v.begin(),v.end());
    int count=0;

    for(int i=0; i<n; i++)
    {
        if(v[i]==a[i])
        {
            count++;
        }
    }
 if(count==n)
 {
     cout<<"Yes"<<endl;
 }
 else
 {
    cout<<"No"<<endl;
 }

    return 0;

}
