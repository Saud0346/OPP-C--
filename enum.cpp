#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int twoSum(int nums[], int target) 
    {
        int sum=0,counter=0;
        while (sum < target)
        {
            sum += nums[counter];
            counter++;
        }

        cout << sum << endl;
        
        for(int i =0;i<counter;i++)
            cout << i << " ";
    }
};

int main()
{
    Solution my;
    int arr[6] = {1,2,3,4,5,6};
    int target = 12;
    my.twoSum(arr,target);
}