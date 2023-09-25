class Solution {
public:
    bool checkIfPangram(string sentence) {
        char ch='a';
        unordered_map<char,int> mp;
        for(int i=0;i<26;++i){
            mp[ch]=0;
            ch++;
        }
        for(int i=0;i<sentence.size();++i){
            mp[sentence[i]]++;
        }
        for(auto x:mp){
            if(x.second==0){
                return false;
            }
        }
        return true;
    }
};
