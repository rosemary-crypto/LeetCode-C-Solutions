class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool pan = false;
        if(sentence.size()<26){
            return pan;
        }
        std::map<char,int> mapping;
        for(auto i:sentence){
            mapping.insert({i,1});
            if(mapping.size()==26){
                pan = true;
                break;
            }
        }
        return pan;
    }
};