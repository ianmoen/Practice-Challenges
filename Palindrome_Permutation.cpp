//
//  Palindrome_Permutation.cpp
//  
//
//  Created by Ian Moen on 10/15/17.
//
//
//  This program checks if a string is a permutation of a palindrome

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool chkPermutation(string input)
{
    vector<int> word(25);
    
    for(int i = 0; i < input.length(); i++)
    {
        int letter = tolower(input[i]);
        word[letter - 97]++;
    }
    
    int letterCount = 0;
    for(int i = 0; i < word.size(); i++)
    {
        if(word[i] % 2 == 1) letterCount++;
        if(letterCount > 1) return false;
    }
    
    return true;
}

int main()
{
    string input;
    
    cin>>input;
    
    cout<<chkPermutation(input)<<endl;
    
    return 0;
}
