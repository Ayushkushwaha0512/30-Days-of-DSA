class Solution {
public:
    string decodeMessage(string key, string message) {
        char ch='a';
        unordered_map<char,char> mp;
        for(int i=0;i<key.size();++i){
            if(key[i]==' ') continue;
            if(mp.find(key[i])==mp.end()){
                mp[key[i]]=ch;
                ch++;
            }
        }
        string s="";
        for(int i=0;i<message.size();++i){
            if(message[i]==' '){
                s+=' ';
            }
            else
                s+=mp[message[i]];
        }
        return s;
    }
};
