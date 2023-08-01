#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(int32_t argc, char const *argv[])
{

    int n;
    cin>>n;

    while(n!=1){
        cout<<n<<" ";
        if(n%2){
            n = n*3 +1;
        }
        else{
            n/=2;
        }
    }
    cout<<n<<endl;
    return 0;

}
