#include <iostream>
using namespace std;
#define repeat(n) for (int i = 0; i < n; i++)
void print_star(int num);


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    print_star(num);
}

void print_star(int num) {
    if (num < 1 || num > 6) {
        cout << "Enter a number between 1 and 6: ";
        cin >> num;
        print_star(num);
    } else {
        repeat(num) {
            cout << "*";
        }
        cout << endl;
    }
}