#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

    bool valid(char ch){
        if((ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9')){
            return true;
        }
        return false;
    }

    char toLowerCase(char ch){
        if(ch >= 'a' && ch <= 'z')
            return ch;
        else
            return ch - 'A' + 'a';
    }

    bool checkPalindrome(string a){
        int s = 0;
        int e = a.length() - 1;

        while(s <= e){
            if(a[s] != a[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {

        // remove non-alphanumeric characters
        string temp = "";

        for(int j = 0; j < s.length(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }

        // convert to lowercase
        for(int j = 0; j < temp.length(); j++){
            temp[j] = toLowerCase(temp[j]);
        }

        // check palindrome
        return checkPalindrome(temp);
    }
};