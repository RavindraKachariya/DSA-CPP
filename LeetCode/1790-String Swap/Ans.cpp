class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        int diff1 = -1, diff2 = -1;

        for (int i = 0; i < s1.size(); ++i)
        {
            if (s1[i] != s2[i])
            {
                if (diff1 == -1)
                    diff1 = i; // First difference
                else if (diff2 == -1)
                    diff2 = i; // Second difference
                else
                    return false; // More than 2 differences → return false
            }
        }

        // No differences → already equal
        if (diff1 == -1)
            return true;

        // Exactly two differences, check if swapping them makes strings equal
        return (diff2 != -1 && s1[diff1] == s2[diff2] && s1[diff2] == s2[diff1]);
    }
};
