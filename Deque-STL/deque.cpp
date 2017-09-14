#include <iostream>
#include <deque>
#include <algorithm>
#include <cstdio>

using namespace std;

void printKMax(int arr[], int n, int k)
{
    deque<int> d(k);
    
    for(int i = 0;i < k; ++i)
    {
        while(!d.empty() && arr[i] >= arr[d.back()])
            d.pop_back();
        
        d.push_back(i);
    }
    
    for(int j = k; j <= n; j++)
    {
        printf("%i ", arr[d.front()]);
        
        while(d.front() <= j - k && !d.empty())
            d.pop_front();
        
        while(!d.empty() && arr[j] >= arr[d.back()])
            d.pop_back();
            
        d.push_back(j);
    }
    
    printf("\n");
}

int main()
{
    int t;
    scanf("%i", &t);
    
    while(t>0)
    {
        int n,k;
        
        scanf("%i", &n);
        scanf("%i", &k);
        
        int i;
        int arr[n];
        
        for(i = 0; i < n; i++)
            scanf("%i", &arr[i]);
        
        printKMax(arr, n, k);
        t--;
    }
    
    return 0;
}
