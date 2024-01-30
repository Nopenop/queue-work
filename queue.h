#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
    public:
    Queue(unsigned capacity=10);
    Queue(const Queue<T> & other);
    ~Queue();
    Queue<T>& operator=(const Queue<T> & other);
    unsigned size() const;
    bool empty() const;

    void enqueue(const T& val);
    void dequeue();
    void print() const;
    bool full() const;
    void clear();
    const T& front() const;
    private:
    T* data;
    unsigned queueSize;
    unsigned capacity;
    int frnt; // the index of hte first element in the queue
    int bck;

};

#endif