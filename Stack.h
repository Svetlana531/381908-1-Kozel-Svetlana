#pragma once
const int size = 1000;

template<typename T>
class stack
{
private:
    T arr[size];
    int Top;
public:
    stack() :Top(-1) { }
    T top() const {
        return arr[Top];
    }
    bool empty() const {
        return Top == -1;
    }
    bool full() const {
        return Top == size - 1;
    }
    void pop() {
        if (Top >= 0)
            Top--;
    }
    void push(T val) {
        if (Top < size - 1)
            arr[++Top] = val;
    }
};