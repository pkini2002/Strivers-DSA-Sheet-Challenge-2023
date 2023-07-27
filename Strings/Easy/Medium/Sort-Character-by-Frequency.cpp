class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mpp;

        // Storing ele based on their frequency count
        for (int i = 0; i < s.length(); i++) {
            mpp[s[i]]++;
        }

        // Sort the map by values in descending order.
        // Inserting it into pair becoz we can't sort the map in desc order
        vector<pair<char, int>> pairs;
        for (auto it : mpp) {
            pairs.push_back(it);
        }
        sort(pairs.begin(), pairs.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        string res = "";
        for (auto pair : pairs) {
            while (pair.second != 0) {
                res += pair.first;
                pair.second--;
            }
        }
        return res;
    }
};
