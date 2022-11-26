import java.util.Stack;

class Solution {
    public int[] solution(int[][] v) {
        int[] answer = new int[2];
        Stack<Integer> xStack = new Stack<>();
        Stack<Integer> yStack = new Stack<>();
        for (int i = 0; i < v.length; i++) {
            if (xStack.isEmpty()) {
                xStack.push(Integer.valueOf(v[i][0]));
            } else if (xStack.peek().intValue() == v[i][0]) {
                xStack.pop();
            } else {
                xStack.push(Integer.valueOf(v[i][0]));
            }
            if (yStack.isEmpty()) {
                yStack.push(Integer.valueOf(v[i][1]));
            } else if (yStack.peek().intValue() == v[i][1]) {
                yStack.pop();
            } else {
                yStack.push(Integer.valueOf(v[i][1]));
            }
        }
        answer[0] = xStack.peek().intValue();
        answer[1] = yStack.peek().intValue();
        return answer;
    }
}