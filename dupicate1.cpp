#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int> nums) {
		map<int, int> count;
		int n = nums.size();
		if (n == 0 || n == 1)
			return false;

		for (int i = 0; i < n; i++)
		{
			count[nums[i]]++;

			if (count[nums[i]] > 1)
			{
				cout << "True";
				return true;
			}

		}
		cout << "Flase";
		return false;
	}
};

int main()
{
	Solution s;
	s.containsDuplicate({ 1,2,3,4,5,1 });
	system("pause");
}
