import java.util.*;

public class Main {

    public static void main(String[ ] args) {
        String[] arr = {"{}[]()", "{[}]}"};
        String[] output = braces(arr);

        for(int i = 0; i< output.length; i++){
            System.out.println(output[i]);
        }

    }

    static String[] braces(String[] values) {
        String[] output = new String[values.length];
        for(int i = 0; i < values.length; i++) {
            Stack<Character> stack = new Stack<>();
            boolean isBalanced = true;
            for(int j = 0; j < values[i].length(); j++) {
                char bracket = values[i].charAt(j);
                if (bracket == '{' || bracket == '[' || bracket == '(') {
                    stack.push(bracket);
                } else {
                    if (bracket == '}') {
                        bracket = '{';
                    } else if (bracket == ')') {
                        bracket = '(';
                    } else if (bracket == ']') {
                        bracket = '[';
                    }

                    if (stack.empty()) {
                        isBalanced = false;
                        break;
                    }

                    if (bracket == stack.peek()) {
                        stack.pop();
                    } else {
                        isBalanced = false;
                        break;
                    }
                }
            }
            if(isBalanced) output[i] = "YES";
            else output[i] = "NO";
        }

        return output;
    }

}
