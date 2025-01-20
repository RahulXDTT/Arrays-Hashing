class Solution {
public:
    int cnt = 0; // To track the number of rotations

    void rotate(vector<int>& nums) {
        int temp = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            nums[i - 1] = nums[i];
        }
        nums[nums.size() - 1] = temp; // Assign the first element to the last position
    }

    bool check(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            // If the current element is smaller than the previous one, rotate
            if (nums[i] < nums[i - 1]) {
                rotate(nums);
                cnt++;
                // If all possible rotations are tried, return false
                if (cnt == nums.size()) return false;
                return check(nums); // Recur for the rotated array
            }
        }
        return true; // If no violations are found, return true
    }
};

