class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<pair<int, int>> index;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    index.push_back(make_pair(i, j));
                }
            }
        }

        for (int i = 0; i < index.size(); i++)
        {
            int row = index[i].first;
            int column = index[i].second;

            for (auto &e : matrix[row])
            {
                e = 0;
            }
            for (int j = 0; j < matrix.size(); j++)
            {
                matrix[j][column] = 0;
            }
        }
    }
};