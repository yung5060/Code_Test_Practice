import java.util.Scanner;

public class bj8958 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String s;
        for (int i = 0; i < N; i++) {
            s = sc.next();
            int scr = 0, rep = 0;
            for (int j = 0; j < s.length(); j++) {
                if (s.charAt(j) == 'O') {
                    rep++;
                    scr += rep;
                } else {
                    rep = 0;
                }
            }
            System.out.println(scr);
        }
        sc.close();
    }
}
