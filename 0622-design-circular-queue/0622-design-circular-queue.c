typedef struct {

    int *data;
    
    int size;
    
    int head;
    
    int tail;
    
    bool empty;

} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {

    MyCircularQueue* q = (MyCircularQueue*)calloc(1, sizeof(MyCircularQueue));

    q->data = (int*)malloc(k * sizeof(int));
    
    q->size = k;
    
    q->empty = 1;

    return q;

}

bool myCircularQueueIsFull(MyCircularQueue* obj);

bool myCircularQueueIsEmpty(MyCircularQueue* obj);

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {

    if(myCircularQueueIsFull(obj)){

        return false;
    
    }
    else{

        obj->empty = 0;
        
        obj->data[obj->head] = value;

        if(obj->head == obj->size - 1){

            obj->head = 0;

        }
        
        else{
            obj->head++;
        }
        
        return true;

    }

}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {

    if(myCircularQueueIsEmpty(obj)){

        return false;
    
    }
    else{

        obj->data[obj->tail] = 0;

        if(obj->tail == obj->size - 1){

            obj->tail = 0;
        
        }
        else{
            
            obj->tail++;

        }

        if(obj->head == obj->tail){

            obj->empty = 1;
        
        }

        return true;
    
    }

}

int myCircularQueueFront(MyCircularQueue* obj) {

    if(!myCircularQueueIsEmpty(obj)){

        return obj->data[obj->tail];

    }
    else{

        return -1;

    }

}

int myCircularQueueRear(MyCircularQueue* obj) {

    if(!myCircularQueueIsEmpty(obj)){

        if(obj->head == 0){

            return obj->data[obj->size - 1];
        
        }
        else{
    
            return obj->data[obj->head - 1];

        }

    }
    else{

        return -1;

    }

}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {

    return obj->empty;

}

bool myCircularQueueIsFull(MyCircularQueue* obj) {

    return (obj->head == obj->tail && !obj->empty);

}

void myCircularQueueFree(MyCircularQueue* obj) {

    free(obj->data);

    free(obj);
    
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/