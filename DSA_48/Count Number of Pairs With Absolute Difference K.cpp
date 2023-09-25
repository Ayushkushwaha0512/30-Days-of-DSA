class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;++i){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            int x1=x.first+k;
            int x2=x.first-k;
            if(mp.find(x1)!=mp.end()){
                cnt+=x.second*mp[x1];
            }
            if(mp.find(x2)!=mp.end()){
                cnt+=x.second*mp[x2];
            }
            mp.erase(x.first);
        }
        return cnt;
    }
};
