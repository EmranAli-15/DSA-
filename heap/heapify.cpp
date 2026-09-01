#include<bits/stdc++.h>
using namespace std;


int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return 2*i + 1;
}

int parent(int i)
{
    return i/2;
}

void max_heapify(int heap[], int heap_size, int i)
{
    int l, r, largest, t;

    l = left(i);
    r = right(i);

    if(l <= heap_size && heap[l] > heap[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }

    if(r <= heap_size && heap[r] > heap[largest])
    {
        largest = r;
    }

    if(largest != i)
    {
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;
        max_heapify(heap, heap_size, largest);
    }

}


void print_heap(int heap[], int heap_size)
{
    for(int i=1; i<= heap_size; i++)
    {
        cout << heap[i] << " ";
    }
    cout << "\n\n";
}

void build_max_heap(int heap[], int heap_size)
{
    for(int i=heap_size/2; i>=1; i--)
    {
        max_heapify(heap, heap_size, i);
    }
}

int main()
{
    int heap_size = 9;
    //int heap[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 2};
    int heap[] = {0, 1, 2, 3, 7, 5, 10, 12, 17, 19};

    print_heap(heap, heap_size);
    max_heapify(heap, heap_size, 2);
    //build_max_heap(heap, heap_size);
    print_heap(heap, heap_size);

    return 0;
}

