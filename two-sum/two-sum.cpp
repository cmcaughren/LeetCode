class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //create a map, each number paired with its index.
        //use multi map to accomodate multiple keys of same number
        multimap<int, int> numsmap;
                
        //use auto to iterate through nums, but create another counter to keep
        //track of the 'index' for inserting in map
        int index = 0;
        for (auto num : nums){
            numsmap.insert({num, index});
            index++;
        }
        for (auto i = numsmap.begin(); i != numsmap.end(); i++) {
            
            int diff = target - i->first;
            
            for (auto j = numsmap.rbegin(); j != numsmap.rend(); j++){
                
                if (j->first == diff) {
                    
                    if (j->second == i->second){
                        continue;
                    }
                    
                    vector<int>* answer = new vector<int>;
                    answer->push_back(i->second);
                    answer->push_back(j->second);
                    return *answer;
                }
                else if (j->first < diff){
                    break;
                }
                
            }       
        
        }

    //should not reach this 
    vector<int>* answer = new vector<int>;
    answer->push_back(-1);
    answer->push_back(-1);
    return *answer;
    }
};