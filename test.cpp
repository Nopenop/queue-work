#include "queue.h"
#include "queue.cpp"
#include <iostream>
int main() {
    Queue<int> q1(10);
    for(int i = 0; i<5; i++){
        q1.enqueue(i);
    }
    q1.print();
    Queue<int> q2(q1);
    q1.clear();
    q1.print();
    q2.print();
    q1 = q2;
    q1.print();
    return 0;
}