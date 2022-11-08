import java.util.Scanner;

public class ACMhotel {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int A = sc.nextInt(), B = sc.nextInt(), C = sc.nextInt();
            String a, b;
            if (C % A == 0) {
                a = String.valueOf(A);
                b = String.valueOf(C / A);
            } else {
                a = String.valueOf(C % A);
                b = String.valueOf(C / A + 1);
            }
            if (b.length() == 1) {
                b = "0" + b;
            }
            System.out.println(a + b);
        }
        sc.close();
    }
}
