#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <stack>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <utility>

using namespace std;
/* 
题目：451. 根据字符出现频率排序
链接：https://leetcode.cn/problems/sort-characters-by-frequency/
*/

class Solution {
public:
    string frequencySort(string s) {
        string result;
        map<char, int> freqMap;
        for (size_t i = 0; i < s.length(); i++) {
            freqMap[s[i]]++;
        }
        auto iter = freqMap.begin();
        for (; iter != freqMap.end(); iter++) {
            for (int i = 0; i < iter->second; i++) {
                result += iter->first;
            }
        }
        cout << result << endl;
        reverse(result.begin(), result.end());
        cout << result << endl;
        return result;
    }
};
int main()
{
    Solution so;
    so.frequencySort("tree");

    system("pause");
    return 0;
}
