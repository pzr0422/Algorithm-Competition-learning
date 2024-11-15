// leetcode-1 ����֮��
// ʹ�ù�ϣ����(ʹ��STL unordered_map)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mm;
        for(int i = 0; i < nums.size(); i++){
        	int find = target - nums[i];
        	if(mm.count(find) != 0) {
        		vector<int> v{i, mm[find]};
        		return v;
			}
        	mm[nums[i]] = i; 
		}
		return vector<int>();
    }
};
