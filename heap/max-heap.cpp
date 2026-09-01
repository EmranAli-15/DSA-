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

int is_max_heap(int H[], int heap_size)
{
    int i, p;

    for(i = heap_size; i>1; i--)
    {
        p = parent(i);

        if(H[p] < H[i])
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    //                 19

    //         7               17

    //      3     5         12     10

    //   1     2

    int heap[10];

    heap[1] = 19;
    heap[2] = 7;
    heap[3] = 17;

    heap[2*2] = 3;
    heap[2*2 + 1] = 5;
    heap[3*2] = 12;
    heap[3*2 + 1] = 10;

    heap[4*2] = 1;
    heap[4*2 +1] = 2;


    int heap_size = 9;
    int H[] = {0, 19, 7, 17, 3, 5, 12, 10, 1, 4};
    cout << is_max_heap(H, heap_size);


    return 0;
}
