//169 Majority Element
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	int me = 0;
    	int count = 0;
        
        for( int i=0; i < nums.size(); i++ )
        {
        	if(count == 0)
        	{
        		me = nums[i];
        		count = 1;
        	}
        	else
        	{
        		if (me == nums[i])
        		{
        			count++;
        		}
        		else
        		{
        			count--;
        		}
        	}
        }
        return me;
    }
};

int main(int argc, char const *argv[])
{
	int a[] = {1,4,4,1,4,4,3,2,5,4,4};
	vector<int> nums(a,a+11);
	Solution s;
	int me = s.majorityElement(nums);
	cout << me <<endl;
	return 0;
}