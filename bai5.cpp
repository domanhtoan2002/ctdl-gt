#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int numbers[5];
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    
    sort(numbers, numbers+5);
    double sum = numbers[0] + numbers[4];
    cout << "the sum of the greatest and the smallest is " << sum << endl;
    return 0;
}
