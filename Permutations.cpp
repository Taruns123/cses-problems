#include<bits/stdc++.h>
using namespace std;
#define nline "\n"
#define yes "YES"
#define no "NO SOLUTION"
#define int long long 



/*****************************************************************************************************/

void run_case(){ 

    int n;
    cin>>n;
    if(n== 1){
        cout<<1<<endl;
        return;
    }
    if(n<4){
        cout<<no<<nline;
        return ;
    }
    if(n==4){
        cout<<"3 1 4 2";
        return;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if(i%2){
            cout<<i<<" ";
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(!(i%2)){
            cout<<i<<" ";
        }
    }

    


}

/****************************************************************************************************/



int32_t main(int32_t argc, char const *argv[])
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    

    run_case();

    return 0;

}