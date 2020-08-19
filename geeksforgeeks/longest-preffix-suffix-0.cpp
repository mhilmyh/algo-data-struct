#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string str;
        std::cin >> str;

        std::vector<int> lps(str.length());
        lps[0] = 0;

        for (int i = 1, j = 0; i < str.length(); i++)
        {
            if (str[i] == str[j])
                lps[i] = ++j;
            else if (j == 0)
                lps[i] = 0;
            else
            {
                j = lps[j - 1];
                i--;
            }
        }

        std::cout << lps[str.length() - 1] << "\n";
    }
    return 0;
}