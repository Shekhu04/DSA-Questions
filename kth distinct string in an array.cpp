
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> s;
        int n= arr.size();
        map<string,int>mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        for(auto i : arr)
            if(mp[i]==1)  s.push_back(i);
           
        if(k>s.size()) return "";
        return s[k-1];

    }
};
