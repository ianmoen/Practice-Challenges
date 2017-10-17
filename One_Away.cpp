//
//  One_Away.cpp
//  
//
//  Created by Ian Moen on 10/16/17.
//
//
//  This program compares two string to see if they are 1 or less characters different

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isOneAway(string input1, string input2)
{
    int n1 = input1.length(), n2 = input2.length();
    int difCount = 0;
    
    if(abs(n1 - n2) > 1) return false;
    else if(abs(n1 - n2) == 1) difCount = 1;
    
    for(int i = 0; i < min(input1,input2).length(); i++)
    {
        if(input1[i] != input2[i]) difCount++;
        if(difCount > 1) return false;
    }
    
    return true;
}

int main()
{
    string input1, input2;
    
    cin>>input1>>input2;
    
    cout<<isOneAway(input1, input2)<<endl;
    
    return 0;
}
