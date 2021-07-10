#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int x=-1,y=-1;
    char nxt='b';
    char last=s.length()+96;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            x=i;
            y=i;
            break;
        }
    }
    if(x==-1)
    {
        cout<<"NO\n";
            return;
    }
    while(x<s.length() && y<s.length() && x>=0 && y>=0)
    {
        if(s[x]==last || s[y]==last)
        break;
        else if(s[y-1]==nxt)
            y=y-1;
        else if(s[x+1]==nxt)
            x=x+1;
        else
        {
            cout<<"NO\n";
            return;
        }
        nxt=(int)nxt+1;
    }
    cout<<"YES\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
