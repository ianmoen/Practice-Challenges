//
//  Check_Permutation.cpp
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
    
    vector<int> word1(input1.length()), word2(input2.length());
    
    for(int i = 0; i < input1.length(); i++)
    {
        word1[i] = input1[i];
        word2[i] = input2[i];
    }
    
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());
    
    if(word1 == word2) return true;
    else return false;
    
}

int main()
{
    string input1, input2;
    
    cin>>input1>>input2;
    
    cout<<chkPermutation(input1, input2)<<endl;
    
    return 0;
}
