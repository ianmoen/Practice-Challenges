#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    int m;
    cin>>m;
    
    for(int i=0;i<m;i++)
    {
        int t;
        cin>>t;
        
        vector<int>::iterator l;
        l = lower_bound(v.begin(), v.end(), t);
        
        if(t == v [l - v.begin()])
            cout<<"Yes"<<" "<<l - v.begin() + 1<<endl;
        else
            cout<<"No"<<" "<<l - v.begin() + 1<<endl;
        
    }
    
    return 0;
}

