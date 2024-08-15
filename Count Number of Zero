#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10], T, n, i, zero, flag, pos;
    // Test Case
    cout << "Enter No of Test Cases: ";
    cin >> T;
    while (T--)
    {
        flag = 0;
        zero = 0;
        pos  = 0;
        // Array Size
        cout << "Enter Size:";
        cin >> n;
        // Read Array Element
        cout << "Enter " << n << " Element: ";
        i = 0;
        while (i < n)
        {
            cin >> a[i];
            i++;
        }
        // Store Position From Where 0 storing is started
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                pos = i;
                break;
            }
        }
        // Check 1 is present after 0
        i = pos + 1;
        while (i < n && a[pos] == 0)
        {
            if (a[i] == 1)
            {
                cout << "Invalid String...\n";
                flag = 1;
                break;
            }
            i++;
        }
        // If String Is Valid -> Count Zero
        if (flag == 0)
        {
            zero = n - pos;
            cout << "Count Of Zero: " << zero << endl;
        }
    }
    return 0;
}
