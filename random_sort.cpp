#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

int main() {
    int n;
    cout << "Enter number of random numbers: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number.\n";
        return 1;
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);

    vector<int> numbers(n);
    cout << "Random numbers: ";
    for (int &x : numbers) {
        x = dist(gen);
        cout << x << " ";
    }

    sort(numbers.begin(), numbers.end());

    cout << "\nSorted numbers: ";
    for (int x : numbers) {
        cout << x << " ";
    }
    cout << '\n';
    return 0;
}
