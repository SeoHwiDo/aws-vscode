package stack;

import java.util.Scanner;

class Paren {
    public static boolean check(String exp) {
        Stack s = new Stack();
        for (int i = 0; i < exp.length(); i++) {
            char c = exp.charAt(i);
            if (c == '(' || c == '{' || c == '[')
                s.push(c);
            else if (c == ')') {
                char left = (char) s.pop();
                if (left != '(')
                    return false;
            } else if (c == '}') {
                char left = (char) s.pop();
                if (left != '{')
                    return false;
            } else if (c == ']') {
                char left = (char) s.pop();
                if (left != '[')
                    return false;
            }
        }
        if (s.top != null)
            return false;
        else
            return true;
    }
}

public class ParenTest {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        String exp = input.nextLine();
        System.out.println(Paren.check(exp));
    }

}