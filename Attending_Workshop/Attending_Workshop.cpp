#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

struct Workshop
{
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops
{
    int n;
    vector <Workshop>* w = new vector <Workshop>;
};

Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    Available_Workshops *aw = new Available_Workshops;
    aw->n = n;
    
    for (int i = 0; i < n; i++)
    {
        Workshop ws;
        
        ws.start_time = start_time[i];
        ws.duration = duration[i];
        ws.end_time = (start_time[i] + duration[i]);
        
        aw->w->push_back(ws);
    }
    
    sort(aw->w->begin(), aw->w->end(), [](Workshop& ws1, Workshop& ws2){return ws1.end_time < ws2.end_time;});
    
    return aw;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    int max = 0;
    int earliest = 0;
    
    
    for(int i = 0; i < ptr->n; i++)
    {
        if((*ptr->w)[i].start_time >= earliest)
        {
            max++;
            earliest = (*ptr->w)[i].end_time;
        }
    }
    
    return max;
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];
    
    for(int i = 0; i < n; i++){
        cin >> start_time[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }
    
    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    
    return 0;
}

