//74 Search a 2D Matrix
//binary search
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target){
        if (matrix.empty()) {
            return false;
        }
        
        const size_t m = matrix.size();
        const size_t n = matrix.front().size();
        
        int first = 0;
        int last = m * n;
        
        while (first < last) {
            int mid = first + ( last - first ) / 2;
            int value = matrix[mid/n][mid%n];
            
            if (value == target) {
                return  true;
            }else if (value < target){
                first = mid + 1;
            }else
                last = mid;
        }
        
        return false;
    }
};

int main(int argc, char const *argv[])
{
    int a1[] = {1,3,5,7};
    int a2[] = {10,11,16,20};
    int a3[] = {23,30,34,50};
    
    vector<int> v1(a1,a1+4);
    vector<int> v2(a2,a2+4);
    vector<int> v3(a3,a3+4);
    
    vector<vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    
    Solution s;
    
    bool r = s.searchMatrix(v, 111);
    
    cout << r << endl;
    
    return 0;
}