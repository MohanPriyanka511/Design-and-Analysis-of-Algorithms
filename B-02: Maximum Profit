#include <iostream>
using namespace std;

// Function to find the maximum profit
int mProfit(int* prices, int n) {
    int profit = 0, currDay = n - 1;

    // Start from the last day
    while (currDay > 0) {
        int day = currDay - 1;

        // Traverse and keep adding the profit until a day with
        // price of stock higher than currentDay is obtained
        while (day >= 0 && (prices[currDay] > prices[day])) {
            profit += (prices[currDay] - prices[day]);
            day--;
        }

        // Set this day as currentDay with maximum cost of stock currently
        currDay = day;
    }

    // Return the profit
    return profit;
}

int main() {
    int N;

    // Taking the number of days as input
    cout << "Enter the number of days: ";
    cin >> N;

    // Dynamically allocating memory for the prices array
    int* prices = new int[N];

    // Taking the prices as input
    cout << "Enter the prices: ";
    for (int i = 0; i < N; i++) {
        cin >> prices[i];
    }

    // Function Call
    cout << "Maximum Profit: " << mProfit(prices, N) << endl;

    // Free dynamically allocated memory
    delete[] prices;

    return 0;
}
