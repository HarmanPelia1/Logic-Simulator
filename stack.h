#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

// Use inheritance from std::vector (choose public/private) as appropriate
template <typename T>
class Stack : private std::vector<T>
{
public:
    Stack();
    ~Stack();
    bool empty() const;
    size_t size() const;
    void push(const T& item);
    void pop();  // throws std::underflow_error if empty
    const T& top() const; // throws std::underflow_error if empty
    // Add other members only if necessary

    private:
        std::vector<T> stack_;
};

template <typename T>
Stack<T>::Stack(){

}

template <typename T>
Stack<T>::~Stack(){

}

template <typename T>

bool Stack<T>::empty() const{
    if(stack_.size() == 0){
        return true;
    }
    else{
        return false;
    }
} 

template <typename T>
size_t Stack<T>::size() const{
    return stack_.size();
}

template <typename T>
void Stack<T>::push(const T& item){
    stack_.push_back(item);
}

template <typename T>
void Stack<T>::pop(){
    if(empty()){
        throw std::underflow_error("Empty Stack.");
    }
    else{
        stack_.pop_back();
    }
}

template <typename T>
T const& Stack<T>::top() const{
    if(empty()){
        throw std::underflow_error("Empty Stack.");
    }
    else{
        return stack_.back();
    }
}



#endif