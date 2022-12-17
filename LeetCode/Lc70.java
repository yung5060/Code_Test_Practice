import java.lang.Math;

public class Lc70 {
    static int[][] dp;

    public static int binomial(int a, int b) {
        if (dp[a][b] > 0) {
            return dp[a][b];
        }
        if (a == b || b == 0) {
            dp[a][b] = 1;
            return dp[a][b];
        }
        dp[a][b] = binomial(a - 1, b) + binomial(a - 1, b - 1);
        return dp[a][b];
    }

    public int climbStairs(int n) {
        dp = new int[46][46];
        int two = n / 2, one = n % 2, ans = 0;
        while (two >= 0) {
            ans += binomial(two + one, Math.min(one, two));
            two--;
            one += 2;
        }
        return ans;
    }

    public static void main(String[] args) {
        Lc70 tmp = new Lc70();
        System.out.println(tmp.climbStairs(1));
        System.out.println(tmp.climbStairs(2));
        System.out.println(tmp.climbStairs(3));
        System.out.println(tmp.climbStairs(4));
        System.out.println(tmp.climbStairs(5));
    }
}
