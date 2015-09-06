//26 Remove Duplicates from Sorted Array
#include <iostream>
using namespace std;

class Solution {
public:
      int removeDuplicates(int A[], int n) {
          if (n == 0) return 0;
          int index = 0;
          for (int i = 1; i < n; i++) {
              if (A[index] != A[i])
                  A[++index] = A[i];
          }
          return index + 1;
      }
};

int main(int argc, char const *argv[])
{
	Solution s;
	int A[] = {1 , 1 , 2};
	int n = 3;
	cout << s.removeDuplicates(A,n);
	return 0;
}