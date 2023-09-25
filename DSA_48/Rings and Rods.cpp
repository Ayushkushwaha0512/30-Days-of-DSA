class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        map<int,set<char>> mp;
        for(int i=0;i<n;i+=2){
            char clr=rings[i];
            int cnt=rings[i+1];
            if(mp[cnt].find(clr)==mp[cnt].end()){
                mp[cnt].insert(clr);
            }
        }
        int cnt=0;
        for(auto x:mp){
            if(x.second.size()==3){
                cnt++;
            }
        }
        return cnt;
    }
};
