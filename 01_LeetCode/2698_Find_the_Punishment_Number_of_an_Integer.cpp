class Solution
{
public:
    bool canPartition(string stringNum, int target)
    {
        if (stringNum == "" && target == 0)
            return true;

        if (target < 0)
            return false;

        for (int i = 0; i < stringNum.size(); i++)
        {
            string left = stringNum.substr(0, i + 1);
            string right = stringNum.substr(i + 1);
            int leftNum = stoi(left);

            if (canPartition(right, target - leftNum))
                return true;
        }
        return false;
    }
    int punishmentNumber(int n)
    {
        int punishmentNum = 0;
        for (int i = 1; i <= n; i++)
        {
            int squareNum = i * i;
            if (canPartition(to_string(squareNum), i))
            {
                punishmentNum += squareNum;
            }
        }
        return punishmentNum;
    }
};