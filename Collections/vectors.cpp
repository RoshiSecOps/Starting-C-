#include <iostream>
using std::cout;
using std::cin;

#include <vector>
using std::vector;

int main()
{
    vector<int> nums;
    nums.push_back(3);
    for (auto item:nums)
    {
        cout << item <<" ";
    }
    nums[0] = 7;
}