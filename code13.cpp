/*There are N people standing in a circle numbered from 1 to N. Also, given an integer K. First count the
K-th number starting from the first one and delete it. Then K numbers are counted from the next one and the K-th
one is removed again, and so on. The process stops when one number remains. The task is to find the last number.*/

#include <iostream>
using namespace std;
int find(int N, int K) {
    if (N == 1) {
        return 1;
    }

    return (find(N-1,K)+K-1)%N+1;
}

int main() {
    int N, K;
    cout << "Enter the number of people: ";
    cin >> N;
    cout << "Enter the count for elimination: ";
    cin >> K;
    int lastPerson = find(N, K);
    cout<< "The last person standing is at position: " << lastPerson << endl;
    return 0;
}
