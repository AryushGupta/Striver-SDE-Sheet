class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (nums[j] > nums[j + 1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                    i--;
                    j--;
                }
            }
        }
    }
};
