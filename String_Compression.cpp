//
//  String_Compression.cpp
//  
//
//  Created by Ian Moen on 10/16/17.
//
//
//  This program compresses repeated characters into numbers

#include <iostream>
#include <string>

using namespace std;

string compressor(string input)
{
    string newString = "";
    int charCount = 1;
    char lastChar = '\0';
    
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == lastChar)
        {
            charCount++;
        }
        else
        {
            if(charCount != 1) newString += to_string(charCount);
            charCount = 1;
            lastChar = input[i];
            newString += input[i];
        }
    }
    
    if(charCount != 1) newString += to_string(charCount);

    return newString;
}

int main()
{
    string input;
    
    cin>>input;
    
    cout<<compressor(input)<<endl;
    
    return 0;
}
