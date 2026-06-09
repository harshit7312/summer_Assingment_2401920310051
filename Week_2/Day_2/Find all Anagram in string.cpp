#include <bits/stdc++.h>
using namespace std;





class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> cnt1(26, 0), cnt2(26, 0);

        for (char c : p)
            cnt1[c - 'a']++;

        int k = p.size();

        for (int i = 0; i < s.size(); i++) {
            cnt2[s[i] - 'a']++;

            if (i >= k)
                cnt2[s[i - k] - 'a']--;

            if (cnt1 == cnt2)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};