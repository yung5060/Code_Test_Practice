import java.util.Stack;

public class Lc20 {
    public boolean isValid(String s) {
        String closedBrackets = "}])";
        Stack<Character> stk = new Stack<>();
        for (char c : s.toCharArray()) {
            if (stk.isEmpty()) {
                if (closedBrackets.indexOf(c) != -1) {
                    return false;
                }
            } else {
                if (c == ')') {
                    if (stk.peek() == '(') {
                        stk.pop();
                    } else {
                        stk.push(c);
                    }
                }
                if (c == '}') {
                    if (stk.peek() == '{') {
                        stk.pop();
                    } else {
                        stk.push(c);
                    }
                }
                if (c == ']') {
                    if (stk.peek() == '[') {
                        stk.pop();
                    } else {
                        stk.push(c);
                    }
                }
            }
            if (closedBrackets.indexOf(c) == -1) {
                stk.push(c);
            }
        }
        return stk.isEmpty();
    }

    public static void main(String[] args) {
        Lc20 tmp = new Lc20();
        System.out.println(tmp.isValid("()"));
        System.out.println(tmp.isValid("()[]{}"));
        System.out.println(tmp.isValid("(]"));
    }
}
