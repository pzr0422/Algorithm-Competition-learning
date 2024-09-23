// leetcode-946-��֤ջ����
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
		stack<int> s;
		int x = 0;
		int n = pushed.size();
		for(int i = 0; i < n; i++){
			//���ݳ�ջ���е�Ԫ�ز�ͣ�ؽ�ջ 
			if(s.empty() || s.top() != popped[i]){
				while(x < pushed.size() && pushed[x] != popped[i]){
					s.push(pushed[x++]);
				}
				//ѹ��������Ԫ����Ȼû���ҵ�popped[i]--ֱ���жϷǷ� 
				if(x == pushed.size()) return false;
				//��ʱpush[x]ǡ��=popped[i] 
				s.push(pushed[x++]);
			}
			s.pop();
		}
		return true;
    }
}; 
