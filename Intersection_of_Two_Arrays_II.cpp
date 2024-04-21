#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums1, nums2;
    nums1 = {2, 2, 2, 3, 4, 6, 2,2,2,2,2,2,2,2,2,2,2, };
    nums2 = {2, 2, 3,2,2,2,2,2,2,2};
     vector<int> ans;
    unordered_map<int, int> count;

    for (const int num : nums1)
      ++count[num];

   for (const int num : nums2){
   const auto it = count.find(num);
   if ( it != count.cend() && it->second-- > 0)
        ans.push_back(num);
   }
   for ( auto v : ans ) {
    cout << v << " ";
   }
}