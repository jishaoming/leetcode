//26 Remove Duplicates from Sorted Array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
      	int n = nums.size();

      	if (n == 0) 
      		return 0;

      	int index = 0;

      	for (int i = 1; i < n; i++) 
      	{
      		if (nums[index] != nums[i])
      			nums[++index] = nums[i];
      	}
      	return index + 1;
      }
};

int main(int argc, char const *argv[])
{
	Solution s;
	int A[] = {1 , 1 , 2};
	vector<int> v(A,A+3);
	cout << s.removeDuplicates(v);
	return 0;
}