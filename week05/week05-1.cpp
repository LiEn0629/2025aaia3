// week05-1.cpp
// LeetCode 學習計畫 Built-in Function 第1題 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        // ss >> word;
        // cout << "讀到了" << word << "\n";
        // ss >> word;
        // cout << "讀到了" << word << "\n";
        while( ss >> word ){

        }
        return word.length();
    }
};
