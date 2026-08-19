#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;

    unordered_map<char, int> a, b;

    for (char c : s) a[c]++;
    for (char c : t) b[c]++;

    return a == b;
}