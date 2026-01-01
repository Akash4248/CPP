
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct item {
    int value;
    int priority;
};
item pr[100000];
int s = -1;
void enqueue(int value, int priority) {
    s++;
    pr[s].value = value;
    pr[s].priority = priority;
}
int peek() {
    int highestPriority = INT_MIN;
    int ind = -1;
    for (int i = 0; i <= s; i++) {
        if (highestPriority == pr[i].priority && ind > -1 && pr[ind].value < pr[i].value) {
            highestPriority = pr[i].priority;
            ind = i;
        } else if (highestPriority < pr[i].priority) {
            highestPriority = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}
void dequeue() {
    int ind = peek();
    for (int i = ind; i < s; i++) {
        pr[i] = pr[i + 1];
    }
    s--;
}
int main() {
    enqueue(60, 2);
    enqueue(40, 4);
    enqueue(69, 4);
    enqueue(23, 3);
    int ind = peek();
    cout << pr[ind].value << endl;
    dequeue();
    ind = peek();
    cout << pr[ind].value << endl;
    dequeue();
    ind = peek();
    cout << pr[ind].value << endl;
    return 0;
}