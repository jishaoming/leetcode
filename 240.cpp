//240 Search a 2D Matrix II
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target){
        if (matrix.size() == 0 || matrix[0].size() == 0) {
            return false;
        }
        
        int i = 0, j = matrix[0].size() - 1;
        
        while (i < matrix.size() && j >= 0) {
            int x = matrix[i][j];
            
            if (target == x) {
                return true;
            }
            else if (target < x)
                --j;
            else
                ++i;
        }
        
        return false;
    }
};

int main(int argc, char const *argv[])
{
    int a1[] = {1,   4,  7, 11, 15};
    int a2[] = {2,   5,  8, 12, 19};
    int a3[] = {3,   6,  9, 16, 22};
    int a4[] = {10, 13, 14, 17, 24};
    int a5[] = {18, 21, 23, 26, 30};
    
    vector<int> v1(a1,a1+5);
    vector<int> v2(a2,a2+5);
    vector<int> v3(a3,a3+5);
    vector<int> v4(a4,a4+5);
    vector<int> v5(a5,a5+5);
    
    vector<vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);
    
    Solution s;
    
    bool r = s.searchMatrix(v, 31);
    
    cout << r << endl;
    
    return 0;
}