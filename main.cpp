#include <iostream>



class Queue {
    static const int SIZE=100;
    int *queue;
    int frnt, rear;
public :
    Queue () ;
    void push ( int num ) ;
    void out();
    int size();
    void pop();
    int front();
    int back();
} ;
//Конструктор
Queue::Queue() {
    queue = new int[SIZE];
    frnt = rear = 0 ;
}
//Вывод элементов очереди
void Queue::out() {
    for(int i=frnt+1;i<rear+1;i++)
        std::cout<<" "<<queue[i];
}
//Помещение элемента в очередь
void Queue::push ( int num ) {
    if ( rear+1 == frnt || ( rear + 1 ==SIZE && !frnt )) {
        std::cout << "Queue is full" <<std::endl ;
        return ;
    }
    rear++;
    if ( rear==SIZE ) rear = 0 ;
    queue [ rear ] = num;
}
// Извлечение элемента из очереди
void Queue::pop() {
    if ( frnt == rear ) {
        std::cout << "Queue is empty" <<std::endl ;
        return;
    }
    frnt++;
    if ( frnt==SIZE ) frnt = 0 ;}
//Определение размера очереди
int Queue::size() {
    int s=0;
    for(int i=frnt; i<rear; i++)
        s++;
    return s;
}
// Последний элемент очереди
int Queue::back() {
    return queue[rear]; }
// Первый элемент очереди
int Queue::front() {
    return queue[frnt+1]; }


int main() {
    Queue queue1;
    int i;

    for (i= 1 ; i <= 5 ; i++ )
        queue1.push ( i ) ;
    std::cout<<"Starting queue ";
    queue1.out();
    std::cout<<std::endl;
    std::cout<<"Enter one more element: ";
    std::cin>>i;
    queue1.push(i);
    std::cout<<"Now queue is: "<<std::endl;
    queue1.out();
    std::cout<<std::endl<<"Size of queue:"<<std::endl;
    std::cout<<queue1.size();
    std::cout<<std::endl <<"Last element:"<< std::endl;
    std::cout<<queue1.back();
    std::cout<<std::endl<<"First element: "<<std::endl;
    std::cout<<queue1.front();
    std::cout<<std::endl <<"Deleting first element: ";
    queue1.pop();
    std::cout<<std::endl <<"Current data: ";
    queue1.out();
    std::cout<<std::endl <<"Another addition of an element: ";
    queue1.push(i + 1);
    queue1.out();
    std::cout<<std::endl;
    std::cin.get();
    return 0;
}