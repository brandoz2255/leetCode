


class Solution:
    def twoSum(self,nums,target)
        num_to_index = {}

        for i, num in enumerate(nums):
            complement = target - num

            if complement in num_to_index:
                return [num_to_index[complement], i]  # Found a matching pair

            num_to_index[num] = i  # Store the current number and its index

        return []  # No solution found
    


if __name__ == "__main__":
    sol = Solution 
    
    if not sums:
        print("Nothing here!")
    else:
        target = 0
        result = sol.twoSum(nums, target)
        if result:
            print(f"First index-> {result[0]}, Second index-> {result[1]}")
        else:
            print("No solution found.")


