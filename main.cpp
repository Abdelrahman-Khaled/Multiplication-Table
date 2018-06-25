#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,x,ans=0;
    cin>>n>>x;
    if(1<=x&&x<=n){ans++;}
    for(int i=2;i<=n&&i<=x;i++){
        if(x%i==0&&x/i<=n){ ans++;}

    }
    cout<<ans<<endl;
    return 0;
}
