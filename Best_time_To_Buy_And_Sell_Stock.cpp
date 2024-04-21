#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int sellOne = 0;
    int holdOne = INT_MIN;

    for (const int price : prices) {
      sellOne = max(sellOne, holdOne + price);
      holdOne = max(holdOne, -price);
      cout << "sellOne: "  << sellOne << endl;
      cout << "HoldOne: "  << holdOne << endl;
    }

    cout << sellOne << endl;
}