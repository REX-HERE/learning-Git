#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    mt19937 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());
    auto start=chrono::high_resolution_clock::now();

    int a=3,b=6;
    cout<<a+b<<"\n";


    auto stop=chrono::high_resolution_clock::now();
    auto duration=chrono::duration_cast<chrono::microseconds>(stop-start);
    cerr<<duration.count()/1000.0<<" ms\n";
    return 0;
}