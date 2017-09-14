#include <stack>
#include <iostream>
using namespace std;

int main(){
    unsigned n, m, tmp;
    cin >> n;
    stack<unsigned> scores;
    
    for (unsigned i = 0; i < n; ++i)
    {
        cin >> tmp;
        if (scores.empty() || scores.top() != tmp)
            scores.push(tmp);
    }
    
    cin >> m;
    
    for (unsigned i = 0; i < m; ++i)
    {
        cin >> tmp;
        
        while (!scores.empty() && tmp >= scores.top()) scores.pop();
            cout << scores.size() + 1 << endl;
    }
    
    return 0;
}
