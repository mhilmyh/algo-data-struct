#include <iostream>
#include <vector>
#include <climits>
int main()
{
    int t, n, a, max_so_far, max_end_here;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        max_so_far = INT_MIN;
        max_end_here = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> a;
            max_end_here += a;
            if (max_so_far < max_end_here)
                max_so_far = max_end_here;
            if (max_end_here < 0)
                max_end_here = 0;
        }

        std::cout << max_so_far << std::endl;
    }
    return 0;
}