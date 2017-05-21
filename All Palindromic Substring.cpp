#include<bits/stdc++.h>
using namespace std;

void expand(string s, int i,int j, set<string> &palindrome_set)
{
    int len=s.size();
    while(i>=0 && j<len && s[i]==s[j])
    {
        palindrome_set.insert(s.substr(i,j-i+1));
        i--, j++;
    }
    return;
}
void allPalindrome(string str)
{
    set<string> palindrome_set;
    set<string> ::iterator it;
    int len = str.size();
    for(int i=0; i<len; i++)
    {
        /// for odd length palindrome
        expand(str, i, i, palindrome_set);
        /// for even length palindrome
        expand(str, i, i+1, palindrome_set);
    }
    for(it=palindrome_set.begin(); it!=palindrome_set.end(); it++)
        cout << *it << endl;
    cout << "Size : " << palindrome_set.size() << endl;
}
int main()
{
    string s;
    cin >> s;
    allPalindrome(s);
}
