import java.util.Scanner;

public class bj2675 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(), R;
        String S;
        for (int i = 0; i < T; i++) {
            R = sc.nextInt();
            S = sc.next();
            String ans = "";
            for (int j = 0; j < S.length(); j++) {
                for (int k = 0; k < R; k++) {
                    ans += S.charAt(j);
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
