//
//  Is_Unique.cpp
//  
//
//  Created by Ian Moen on 10/14/17.
//
//  This program checks if every character in a string is unique

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isUnique(string input)
{
    if(input.length() > 128) return false;
    
    vector<bool> unique(128);
    
    
    for(int i = 0; i < input.length(); i++)
    {
        int letter = input[i];

        if(unique[letter] == true) return false;
        else unique[letter] = true;
    }
    
    return true;
}

int main()
{
    string input;
    
    cin>>input;

    cout<<isUnique(input)<<endl;
    
    return 0;
}
