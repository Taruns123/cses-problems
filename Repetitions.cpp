#include<bits/stdc++.h>
using namespace std;
#define int long long int



int32_t main(int32_t argc, char const *argv[])
{

    string s;
    cin>>s;
    int ans =1;
    int currAns =1;
    if(s=="") {cout<<0<<endl; return 0;}
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[i+1]){
            currAns++;
        }
        else{
            ans = max(ans,currAns);
            currAns =1;
        }
    }
    ans = max(ans,currAns);
    cout<<ans<<endl;
    
    return 0;

}
