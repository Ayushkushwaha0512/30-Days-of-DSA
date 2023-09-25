class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size(),cnt=0;
        map<string,int> mp;
        for(int i=0;i<n;++i){
            mp[words[i]]++;
        }
        string w="",s="";
        for(auto &x:mp){
            s=x.first;
            w=s;
            reverse(w.begin(),w.end());
            if(s!=w && mp.find(w)!=mp.end()){
                cnt++;
                mp.erase(w);
            }
        }
        return cnt;
    }
};
