#include <iostream>
#include<vector>
#include<sstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string str1)
{
    string str2 = str1;
    reverse(str2.begin(),str2.end());
    if(str2 == str1)
    {
        return 1;
    }
    return 0;
}




int main()
{
    string str = "aaaa bbbb cccc dddd malayalam eeeeeeeeeee";
    int n=str.length();
    int maxLen = 0;
    istringstream iss(str);
    string word,longPali;


    while(getline(iss,word,' '))
    {
        if(isPalindrome(word) && word.length()>maxLen )
        {
            maxLen = word.length();
            longPali = word;
        }
    }
    cout<< longPali ;
}

