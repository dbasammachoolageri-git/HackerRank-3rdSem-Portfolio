#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequency;

    for (string str : stringList) {
        frequency[str]++;
    }

    vector<int> result;

    for (string query : queries) {
        result.push_back(frequency[query]);
    }

    return result;
}
