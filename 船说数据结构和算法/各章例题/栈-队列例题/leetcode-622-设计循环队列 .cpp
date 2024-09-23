// leetcode-622-设计循环队列 
struct Node{
	int data;
	Node* next;
};

class MyCircularQueue {
public:
	int count;
	int size;
	Node *head;
	Node *tail;
    MyCircularQueue(int k) {
		head = new Node();
		tail = head;
		for(int i = 1; i < k; i++){
			tail->next = new Node();
			tail = tail->next;
		}
		count = 0;
		size = k;
		tail->next = head;
    }
    
    bool enQueue(int value) {
		if(isFull()) return false;
		tail = tail->next;
		tail->data = value;
		count++;
		return true;
    }
    
    bool deQueue() {
		if(isEmpty()) return false;
		head = head->next;
		count--;
		return true;
    }
    
    int Front() {
		if(isEmpty()) return -1;
		return head->data;
    }
    
    int Rear() {
		if(isEmpty()) return -1;
		return tail->data;
    }
    
    bool isEmpty() {
		return count == 0;
    }
    
    bool isFull() {
		return count == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
