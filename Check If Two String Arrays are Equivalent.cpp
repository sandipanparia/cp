class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        for(auto it:word1){
            for(auto j:it)s1+=j;
        }
        string s2="";
        for(auto it:word2){
            for(auto j:it)s2+=j;
        }
        return s1==s2;
    }
};
