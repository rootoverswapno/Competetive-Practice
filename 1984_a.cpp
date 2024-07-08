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
        vector<int>v(n);
        for(auto &i:v)
        {
            cin>>i;
        }
        string s;
        if(v[0]==v[n-1])
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            string s(n,'R');
            s[1]='B';
            cout<<s<<endl;

        }
    }



    return 0;
}