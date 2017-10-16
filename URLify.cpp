//
//  URLify.cpp
//  
//
//  Created by Ian Moen on 10/15/17.
//
//  This program replaces spaces in a string with '%20'

#include <iostream>
#include <string>

using namespace std;

string spaceReplace(string url)
{
    string newString = "";

    for(int i = 0; i < url.length(); i++)
    {
        if(url[i] == ' ') newString += "%20";
        else newString += url[i];
    }
    
    return newString;
}

int main()
{
    string url;
    
    getline(cin,url);
    
    cout<<spaceReplace(url)<<endl;
    
    return 0;
}
