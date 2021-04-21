#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"
#include "fatal.h"


#define MinQueueSize ( 5 )

struct QueueRecord{
    int Capacity;
    int Front;
    int Rear;
    ElementType *Array;
};

//Quantos elementos tem a fila
int size( Queue Q ){
    //(N-ini+fim) mod (%) N
    return ((Q->Capacity-Q->Front+Q->Rear) % Q->Capacity);
}

int successor( int i, Queue Q ){
    if(i == Q->Capacity-1){
        return 0;
    } else {
        return i+1;
    }

    return (i+1) % Q->Capacity;
}


Queue CreateQueue( int MaxElements ){
    Queue Q;

    if( MaxElements < MinQueueSize )
        Error( "Queue size is too small" );

    Q = malloc( sizeof( struct QueueRecord ) );
    if( Q == NULL )
        FatalError( "Out of space!!!" );

    Q->Array = malloc( sizeof( ElementType ) * MaxElements );
    if( Q->Array == NULL )
        FatalError( "Out of space!!!" );

    Q->Capacity = MaxElements;
    MakeEmptyQueue( Q );

    return Q;
}


void DisposeQueue( Queue Q ){
    if( Q != NULL ){
        free( Q->Array );
        free( Q );
    }
}


bool IsEmptyQueue( Queue Q ){

    return Q->Front == Q->Rear;
}


bool IsFullQueue( Queue Q ){

    return size(Q) == Q->Capacity - 1;
}



void MakeEmptyQueue( Queue Q ){
}


void Enqueue( ElementType X, Queue Q ){

    if(IsFullQueue(Q)){
        printf("Queue is already full.");
        return;
    }

    Q->Array[Q->Rear] = X;
    printf("%d\n",Q->Array[Q->Rear]);
    Q->Array[Q->Rear+=1];
}


ElementType Front( Queue Q ){
    return Q->Array[Q->Front];
}


ElementType Dequeue( Queue Q ){
    if(IsEmptyQueue(Q)){
        printf("Queue is empty\n");
    } else {
        int x = Q->Array[Q->Front];
        int suc = successor(Q->Array[Q->Front],Q);

        printf("Dequeued number = %d\n",x);

        return x;
    }
}