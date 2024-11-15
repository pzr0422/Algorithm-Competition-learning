// leetcode-198 打家劫舍(递归，递推，记忆化搜索)
// 1.递推 
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> dp = vector<int>(nums.size(), 0); // O(n)
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i++){
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[nums.size() - 1];
    }
};

// 2.记忆化搜索 
class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        vector<int> cache(size, -1); // 用于记忆化搜索
        function<int(int)> dp = [&] (int i) -> int {
            if(i < 0) return 0;
            if(cache[i] != -1) return cache[i]; // 如果已经计算过，则直接返回记忆
            cache[i] = max(dp(i - 1), dp(i - 2) + nums[i]);
            return cache[i];
        };
        return dp(size - 1);
    }
}; 

// 3.递推优化内存 
class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        vector<int> dp(3);
        dp[0] = 0;
        dp[1] = 0;
        for(int i = 0; i < size; i++){
            dp[2] = max(dp[1], dp[0] + nums[i]);
            dp[0] = dp[1];
            dp[1] = dp[2];
        }
        return dp[2];
    }
};

