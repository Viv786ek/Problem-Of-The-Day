//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
        // Your Code
        arr[rear++]=x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code 
        if(front==rear)return -1;
        return arr[front++];
}
