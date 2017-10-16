//
//  Check_Permutation_v2.cpp
//
//
//  Created by Ian Moen on 10/15/17.
//
//  This program checks if one string is a permutation of another string

#include <string>
#include <functional>
#include <vector>
#include <iostream>

using namespace std;

bool chkPermutation(string input1, string input2)
{
    if(input1.length() != input2.length()) return false;
    
    vector<int> word(128);
    
    for(int i = 0; i < input1.length(); i++)
    {
        int letter = input1[i];
        word[letter]++;
    }
    
    for(int i = 0; i < input2.length(); i++)
    {
        int letter = input2[i];
        word[letter]--;
        
        if(word[letter] < 0) return false;
    }
    
    return true;
    
}

int main()
{
    string input1, input2;
    
    cin>>input1>>input2;
    
    cout<<chkPermutation(input1, input2)<<endl;
    
    return 0;
}
