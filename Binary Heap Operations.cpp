int MinHeap::extractMin() 
{
    // Your code here
     if(heap_size==0) return -1;
  if(heap_size==1) {heap_size--; return harr[0];}
  swap(harr[0],harr[heap_size-1]);
  heap_size--;
  MinHeapify(0);
  return harr[heap_size];
}

//Function to delete a key at ith index.
void MinHeap::deleteKey(int i)
{
    // Your code here
     if(heap_size<=0 || heap_size<=i) return;
   decreaseKey(i,INT_MIN);
   extractMin();
}

//Function to insert a value in Heap.
void MinHeap::insertKey(int k) 
{
    // Your code here
    if(heap_size>=capacity)return;
   heap_size++;
   decreaseKey(heap_size-1,k);
}
