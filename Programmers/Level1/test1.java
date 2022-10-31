
class Solution {
    public int solution(int n) {
        int a = 1;
        int sum = 0;
        while (a <= Math.sqrt(n)) {
            if ((n % a) == 0) {
                if (a == Math.sqrt(n)) {
                    sum += a;
                    return sum;
                }
                sum += (a + n / a);
                a++;
            } else
                a++;
        }
        return sum;
    }
}

public class test1 {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.solution(5));
    }
}
