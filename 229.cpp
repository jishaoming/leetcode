//229 Majority Element II
//moore voting
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    	int a, b;
    	int cnt1 = 0, cnt2 = 0;
        
        //fisrt traverse
        for (int n: nums)
        {
            if (cnt1 ==0 || n == a)
            {
                cnt1++;
                a = n;
            }
            else if (cnt2 == 0 || n == b)
            {
                cnt2++;
                b = n;
            }
            else
            {
                cnt1--;
                cnt2--;

            }
        }
        cnt1 = cnt2 = 0;

        //second traverse
        for (int n: nums)
        {
            if ( n == a )
            {
                cnt1++;
            }
            else if ( n == b)
            {
                cnt2++;
            }
        }

        //get the result
        vector<int> result;
        if ( cnt1 > nums.size() / 3 )
            result.push_back(a);
        if ( cnt2 > nums.size() / 3 )
            result.push_back(b);

        return result;
    }
};

int main(int argc, char const *argv[])
{
	int a[] = {1,4,4,1,4,4,3,2,5,4,4,1,1,1,1,1,4,4,4,4,1,1,1};
	vector<int> nums(a,a+23);
	Solution s;
	vector<int> r = s.majorityElement(nums);
    for (int rr: r)
    {
        cout << rr << endl;
    }
	return 0;
}