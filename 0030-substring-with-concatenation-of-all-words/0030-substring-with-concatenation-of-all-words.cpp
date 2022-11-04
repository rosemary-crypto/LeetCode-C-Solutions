class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> output;
        int wordSize = words.at(0).size();
        int windowSize = words.size()*wordSize;
        map<string,int>m;
        for(auto i:words){
            m[i] += 1;
        }
        for(int i=0; i<s.size(); i++){
            if(windowSize>s.size()-i){
                return output;
            }
            map<string,int>new_m;
            for(int j=i; j<i+windowSize && j<s.size(); j+=wordSize){
                new_m[s.substr(j,wordSize)]+=1; 
            }
            int found = -1;
            for(auto itr:m){
                if(m[itr.first]!=new_m[itr.first]){
                    found = 0;
                    break;
                }
            }
            if(found==-1){
                output.push_back(i);
            }
        }
        return output;
    }
};