import java.util.Scanner;

public class ArithmeticNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), cnt = 0;
        for (int i = 1; i <= N; i++) {
            String s = String.valueOf(i);
            if (s.length() <= 2) {
                cnt++;
            } else {
                if (s.charAt(0) + s.charAt(2) == 2 * s.charAt(1)) {
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
