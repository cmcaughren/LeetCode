class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //assuming these nums vectors are both sorted lowest->highest
        int m = nums1.size();
        int n = nums2.size();
        
        vector<int> combined_nums;
        
        //iterators for the vectors
        int m_i = 0;
        int n_i = 0;
        
        //iterate through each vector until the end of one or both vector is reached
        while ( (m_i <= (m - 1)) || (n_i <= (n - 1)) ){             
                         
            //base case: reached end of nums1 before nums2
            if ( (m_i >= m) && (n_i <= (n - 1)) ){
                while (n_i <= (n - 1)){
                    combined_nums.push_back(nums2.at(n_i));
                    n_i++;
                }
            }
            //base case: reached end of nums2 before nums1
            else if ( (m_i <= (m - 1) )  && (n_i >= n)){
                while (m_i <= (m - 1) ){
                    combined_nums.push_back(nums1.at(m_i));
                    m_i++;
                }
                
            }
            //which ever is smaller, place into combined_nums first and increment that iterator
            else if ( nums1.at(m_i) >= nums2.at(n_i) ){
                combined_nums.push_back(nums2.at(n_i));
                n_i++;
            }
            else //(n_i >= m_i) 
            {
                combined_nums.push_back(nums1.at(m_i));
                m_i++;
            }          
                              
        }
        
        //find center/median of combined_nums and return it                    
        int combined_size = combined_nums.size();
        double answer = 0.0;
        
        if ( (combined_size % 2) == 0) {
            answer = ((combined_nums.at(combined_size/2) +
                      combined_nums.at((combined_size/2) - 1)));
            answer = answer/2;
        }
        else {
            answer = (combined_nums.at((combined_size/2)));
        }
        return answer;
    }
};