#include <bits/stdc++.h>
using namespace std;

int main() {
    string haystack = "sadbutsad", needle = "sad";
    if(haystack.find("p")  == string::npos ){
        return -1;
    }  else {
        return haystack.find(needle);
    }
    return 0;
}