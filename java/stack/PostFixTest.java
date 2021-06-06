package stack;

import java.util.Scanner;

class PostFix {
    public static int evalPostFix(String exp) {
        Scanner sc = new Scanner(exp);
        Stack s = new Stack();
        while (sc.hasNext()) {
            String token = sc.next();
            // System.out.println(token);
            // char c=token.charAt(i);
            if (token.equals("+")) {
                //System.out.println("meet +");
                int num1 = (int) s.pop(), num2 = (int) s.pop();
                s.push(num2 + num1);
            } else if (token.equals("-")) {
               //System.out.println("meet -");
                int num1 = (int) s.pop(), num2 = (int) s.pop();
                s.push(num2 - num1);
            } else if (token.equals("*")) {
                //System.out.println("meet *");
                int num1 = (int) s.pop(), num2 = (int) s.pop();
                s.push(num2 * num1);
            } else if (token.equals("/")) {
                //System.out.println("meet /");
                int num1 = (int) s.pop(), num2 = (int) s.pop();
                s.push(num2 / num1);
            } else {
                //System.out.println("meet num");
                int c = Integer.parseInt(token);
                s.push(c);
            }
        }
        return (int) s.pop();
    }
}

public class PostFixTest {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        String exp = input.nextLine();
        System.out.println(PostFix.evalPostFix(exp));
    }
}
