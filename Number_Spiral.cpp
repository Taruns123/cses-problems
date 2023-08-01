#include<bits/stdc++.h>
using namespace std;
#define int long long 



/*****************************************************************************************************/

void run_case(){ 

    int n,m;
    cin>>n>>m;
    int ans;
    int i = max(n,m);
    
    if((i-1)%2){
        if(m>n){
            ans = (i-1)*(i-1) + n;
        }
        else{
            ans = i*i - m +1;
        }
    }
    else{
        if(m>n){
            ans = i*i - n +1;
        }
        else{
            ans =(i-1)*(i-1) + m;
        }
    }
    cout<<ans<<endl;


}

/*****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t; cin>>t;
    while(t--){

        run_case();

    }
    return 0;

}