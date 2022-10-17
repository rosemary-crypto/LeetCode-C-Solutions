class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        auto itr1=nums1.begin(), itr2=nums2.begin();
        while(itr1<nums1.end()&&itr2<nums2.end()){
            if(*itr2<*itr1){
                merged.push_back(*itr2);
                itr2++;
            }
            else{
                merged.push_back(*itr1);
                itr1++;
            }
        }
        while(itr1<nums1.end()){
            merged.push_back(*itr1);
            itr1++;
        }
        while(itr2<nums2.end()){
            merged.push_back(*itr2);
            itr2++;
        }
        int length = merged.size();
        double median;
        if(length%2==0){
            median = (merged.at(length/2-1) + merged.at(length/2))/2.0;
        }
        else{
            median = merged.at(length/2);
        }
        return median;
    }
};