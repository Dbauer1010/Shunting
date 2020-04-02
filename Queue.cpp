#include Queue.hpp;

void Enqueue(int val)
{
  if(front == -1) 
  {   
      front = 0;
      rear++;
      myqueue[rear] = value;
      cout << value << " ";
   }
   else
   {
      
   }
  void Dequeue(int val)
  {
       if(isEmpty())
       {
          cout << "Queue is empty!!" << endl; return(-1); 
       } 
       else 
       { 
          value = myqueue[front];
       }
       if(front >= rear)
       {      
          front = -1;
          rear = -1;
       } 
       else 
       {
          front++;
       }
  }
}
