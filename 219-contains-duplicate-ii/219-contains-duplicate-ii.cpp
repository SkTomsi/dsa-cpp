class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if ( k==0) {
            return false;
        }else{
            vector < pair< int, int>> duplicatePair;
            for (int i = 0 ; i < nums.size(); i++){
                duplicatePair.push_back( make_pair( nums[i], i ));
            }
            
            sort( duplicatePair.begin(), duplicatePair.end());
            
            for (int i=1; i < duplicatePair.size(); i++){
                if(( duplicatePair[i-1].first == duplicatePair[i].first) && (abs(duplicatePair[i-1].second - duplicatePair[i].second) <=k))
                    return true;
            }
            return false;
        }
    }
};