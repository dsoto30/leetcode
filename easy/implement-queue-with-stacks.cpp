class MyQueue {
public:
    MyQueue() 
    {
    }
    
    void push(int x) {
        queue.push(x);
    }
    
    int pop() {
        while (!queue.empty())
        {
            holder.push(queue.top());
            queue.pop();
        }
        
        int result = holder.top();
        holder.pop();
        while (!holder.empty())
        {
            queue.push(holder.top());
            holder.pop();
        }
        
        return result;
        
    }
    
    int peek() {
        
        while (!queue.empty())
        {
            holder.push(queue.top());
            queue.pop();
        }
        
        int result = holder.top();
        while (!holder.empty())
        {
            queue.push(holder.top());
            holder.pop();
        }
        
        return result;
        
    }
    
    bool empty() {
        return queue.empty();
    }
    
private:
    std::stack<int> queue;
    std::stack<int> holder;
};
