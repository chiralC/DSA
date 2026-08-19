#include<iostream>
#include<string>

using namespace std;


int maxDepth(string s) {
    int maxDepth = 0;
    int depth = 0;

    for(char x : s) {
        if(x == '(')
            depth++;
        else if(x == ')')
            depth--;

        if(depth > maxDepth)
            maxDepth = depth;
    }

    return maxDepth;
}