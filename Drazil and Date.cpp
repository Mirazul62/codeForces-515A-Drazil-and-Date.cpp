#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s,rest=0,sum=0;
    cin>>a>>b>>s;
    sum=abs(a-0)+abs(b-0);
    if(sum==s)
        cout<<"Yes";
    else if(sum<s)
    {
        rest=s-sum;
        if(rest%2==0)
            cout<<"Yes";
        else
            cout<<"No";
    }
    else
        cout<<"No";


}
