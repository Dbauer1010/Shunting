#include Queue.cpp;
#include <iostream>

using namespace std;

class Queue
{
    public:
      void Enqueue(int val);
      void Dequeue(int val);
      int front = -1;
      int rear = -1;
  
    private:
      int queue[MAX_SIZE], front, rear;
}
