#include <iostream>
using namespace std;

// Tower of Hanoi Problem using recursion
// In this we are required to move all the discs from one tower(A) to another tower(C) via a tower(B) in the same order

void tower_of_hanoi(int n, char A, char B, char C)
{
    if (n > 0)
    {
        tower_of_hanoi(n - 1, A, C, B);
        cout << "Move topmost dic from " << A << " to " << C << endl;
        tower_of_hanoi(n - 1, B, A, C);
    }
}

int main()
{
    int n;
    cout << "Enter number of Discs: ";
    cin >> n;

    tower_of_hanoi(n, 'A', 'B', 'C');

    return 0;
}
