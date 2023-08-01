#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(int32_t argc, char const *argv[])
{

    int n;
    cin>>n;

    int maxNow = 0;
    int x = 0;
    int ans =0;
    while(n--){
        cin>>x;
        if(x<maxNow)ans += maxNow- x;
        maxNow  = max(maxNow, x);
    }
    cout<<ans<<endl;
    return 0;

}
