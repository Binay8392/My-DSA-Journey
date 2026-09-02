class Solution {
public:

    char lower(char ch)
    {
        if (ch >= 'a' && ch <= 'z')
            return ch;

        if (ch >= 'A' && ch <= 'Z')
            return ch - 'A' + 'a';

        return ch;
    }

    bool right(char c)
    {
        if ((c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9'))
        {
            return true;
        }

        return false;
    }

    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.size() - 1;

        while (i <= j)
        {
            if (!right(s[i]))
            {
                i++;
            }
            else if (!right(s[j]))
            {
                j--;
            }
            else
            {
                if (lower(s[i]) != lower(s[j]))
                    return false;

                i++;
                j--;
            }
        }

        return true;
    }
};