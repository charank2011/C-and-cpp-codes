#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0,q=0,i;
        string a,b;
        cin>>n>>a>>b;
        for(i=0;i<n;i++)
        {
            if(a[i]=='1'&&b[i]=='1')
            p++;
            else if(a[i]=='0'&&b[i]=='0')
            q++;
        }
        if(p%2==0&&n-p-q==0)
        cout<<"No\n";
        else 
        cout<<"Yes\n";
    }
    

}