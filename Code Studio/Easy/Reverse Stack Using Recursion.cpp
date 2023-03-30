void insertAtBottom(stack<int> &s,int ele) {
    if(s.empty()){
        s.push(ele);
        return;
    }

    int temp=s.top();
    s.pop();

    insertAtBottom(s,ele);

    s.push(temp);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
      return;
    }

    int temp = stack.top();
    stack.pop();

    reverseStack(stack);

    insertAtBottom(stack,temp);
}