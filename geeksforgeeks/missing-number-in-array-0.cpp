#include <iostream>
#include <vector>
int main()
{
    int t, n, b;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n;
        std::vector<bool> a(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            std::cin >> b;
            a[b] = true;
        }

        for (int i = 1; i <= n; i++)
        {
            if (!a[i])
                std::cout << i << "\n";
        }
    }
    return 0;
}