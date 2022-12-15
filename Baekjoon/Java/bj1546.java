import java.util.Scanner;
import java.lang.Math;

public class bj1546 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), max = 0;
        int[] scores = new int[N];
        double ans = 0;
        for (int i = 0; i < N; i++) {
            scores[i] = sc.nextInt();
            max = Math.max(max, scores[i]);
        }
        for (int i = 0; i < N; i++) {
            ans += (double) scores[i] / max * 100;
        }
        ans /= N;
        System.out.printf("%.3f", ans);
        sc.close();
    }
}
