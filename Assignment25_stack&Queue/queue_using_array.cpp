#include <iostream>
using namespace std;
 
class Queue{
	int A[100000];
	int start;
	int end;
 
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
        start =0;
        end = 0;
		cout<<"constructor is Called\n";
	}
 
	//push the value at the back
	void push(int val){
        A[end] = val;
        end++;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}
 
	int front(){
		cout<<"returning the value at front\n";
    //    cout<<A[start];
        if(start<end)
		return A[start];
    return 0;
	}
 
	void pop(){
        if (start!=end)
            start++;
		cout<<"removing the first element\n";
     //   cout<<A[start];
	}
 
	int size(){
		cout<<"return the size of the queue\n";
        int c = end - start;
		return c;
	}
 
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
        if (start == end){
		return true;
        }
        return false;
	}
};
 
int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}
