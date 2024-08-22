#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int Size = nums.size();
    int Low = 0;
    int High = Size - 1;
    int Mid = 0;

    while (Low <= High)
    {
        Mid = ((High - Low) / 2 + Low);

        if (nums[Mid] == target)
        {
            return Mid;
        }
        if (nums[Mid] < target)
        {
            Low = Mid + 1;
            continue;
        }
        if (nums[Mid] > target)
        {
            High = Mid - 1;
        }
    }

    if (nums[Mid] < target)
    {
        return Mid + 1;
    }
    if (nums[Mid] > target)
    {
        if (Mid == 0)
            return 0;
        return Mid - 1;
    }

    return 0;
}

int main()
{
    
    
    return 0;
}