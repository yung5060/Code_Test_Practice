import java.util.Scanner;

public class bj25304 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ttl = sc.nextInt(), n = sc.nextInt(), ans = 0;
        for (int i = 0; i < n; i++) {
            ans += sc.nextInt() * sc.nextInt();
        }
        if (ttl == ans) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
        sc.close();
    }
}
