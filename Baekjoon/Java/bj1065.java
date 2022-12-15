import java.util.Scanner;

public class bj1065 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        if (N < 100) {
            System.out.println(N);
            sc.close();
            return;
        }
        int ans = N;
        for (int i = 100; i <= N; i++) {
            int a = i / 100, b = i / 10 - a * 10, c = i % 10;
            if (a - b != b - c) {
                ans--;
            }
        }
        System.out.println(ans);
        sc.close();
    }
}
