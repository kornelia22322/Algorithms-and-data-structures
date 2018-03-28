#include <iostream>
#include <string>

using namespace std;

/* FR_05_16 - Stos i arytmetyka */

struct node{
  node* next;
  int val;
};

node* create_empty_stack() {
  node* stack = new node();
  stack->next=NULL;
  stack->val=0;
  return stack;
}

bool is_empty(node* stack){
  if(stack->next == NULL){
    return true;
  }
  return false;
}

void add(node*& stack, int value){
  node* tmp = new node();
  tmp->val=value;
  tmp->next=stack;
  stack = tmp;
}

int pop(node*& stack){
  node *tmp = stack;
  stack = tmp->next;
  tmp->next=NULL;
  return tmp->val;
}

int main(){
  int x;
  cin>>x;
  node* stack = create_empty_stack();
  int output;
  for(int i=0;i<x;i++){
    string a;
    string b;
    cin>>a>>b;
    if(a == "1"){
      add(stack, stoi(b));
    } else {
      int first = pop(stack);
      int second = pop(stack);
      if(b == "+"){
        output = second + first;
      } else if(b == "-"){
        output = second - first;
      } else if(b == "*"){
        output = second * first;
      } else if(b == "/"){
        output = second / first;
      }
      add(stack, output);
    }
  }
  cout<<output<<endl<<"ONP"<<endl;
}
