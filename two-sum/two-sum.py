class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
                
        enum_nums = list(enumerate(nums))

        for i, val_i in enum_nums:
            
            for j, val_j in reversed(enum_nums):
                if j == i:
                    break
                if (val_i + val_j == target):
                    return {i, j}
            
                