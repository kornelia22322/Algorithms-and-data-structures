import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {


    public static void main(String[] args) {
        MyQueue<Integer> queue = new MyQueue<Integer>();

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        for (int i = 0; i < n; i++) {
            int operation = scan.nextInt();
            if (operation == 1) { // enqueue
              queue.enqueue(scan.nextInt());
            } else if (operation == 2) { // dequeue
              queue.dequeue();
            } else if (operation == 3) { // print/peek
              System.out.println(queue.peek());
            }
        }
        scan.close();
    }
}

class MyQueue<T> {
    private Stack<T> first = new Stack<T>();
    private Stack<T> second = new Stack<T>();

    public void enqueue(T number) {
        first.push(number);
    }

    public void dequeue() {
       if(second.empty()) {
           while(!first.empty()) {
                T element = first.pop();
                second.push(element);
           }
       }
       second.pop();
    }

    public T peek() {
       if(second.empty()) {
           while(!first.empty()) {
                T element = first.pop();
                second.push(element);
           }
       }
       T elementtoRet = second.peek();
       return elementtoRet;
    }

}
