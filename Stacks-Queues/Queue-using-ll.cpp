//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *temp=new QueueNode(x);
        // If there are no nodes
        if(front==NULL){
            rear=temp;
            front=temp;
        }
        else{
            // Inserting at rear end
            rear->next=temp;
            rear=temp;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code    
        if(front==NULL){
            return -1;
        }
        else{
            int x=front->data;
            front=front->next;
            return x;
        }
}
