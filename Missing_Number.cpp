#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(int32_t argc, char const *argv[])
{

    int n;
    cin>>n;

    int i=n-1;
    int sum =0;
    int x;
    while(i--){
        cin>>x;
        sum+= x;
    }


    cout<<((n*(n+1))/2)-sum<<endl;
    return 0;

}