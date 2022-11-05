import java.util.Scanner;

public class SumCycle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int initial = N, cnt = 0;
        while (true) {
            String s = String.valueOf(N);
            if (s.length() == 1) {
                s = "0" + s;
            }
            int tmp = 0;
            for (int i = 0; i < 2; i++) {
                tmp += s.charAt(i) - 48;
            }
            String t = String.valueOf(tmp);
            String n = s.substring(1) + t.charAt(t.length() - 1);
            N = Integer.parseInt(n);
            cnt++;
            if (N == initial) {
                break;
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
