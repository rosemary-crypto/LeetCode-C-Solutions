class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int smallest = 0;
        std::map<int,bool> mapping;
        for(auto i:nums){
            if(i>0){
                mapping[i] = true;
            }
        }
        int j=1;
        while(j){
            if(mapping.find(j)==mapping.end()){
                smallest = j;
                break;
            }
            j++;
        }
        return smallest;
    }
};