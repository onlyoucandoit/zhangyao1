#include <iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;


  /*struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };*/

 /* struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };*/

int main()
{


    cout << "Hello world!" << endl;
    return 0;
}
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i=0,j=0;
    while (j<nums.size())
    {
        if(i=0||nums[i-1]!=nums[j])//我们需要这个元素
        nums[i++]=nums[j++];
        else  j++;

    }
    return i;
    }
};
