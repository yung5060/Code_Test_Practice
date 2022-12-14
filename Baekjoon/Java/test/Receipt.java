import java.util.Scanner;

public class Receipt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int total = sc.nextInt(), N = sc.nextInt(), sum = 0;
        for (int i = 0; i < N; i++) {
            int a = sc.nextInt(), b = sc.nextInt();
            sum += a * b;
        }
        String s = (sum == total) ? "Yes" : "No";
        System.out.println(s);
        sc.close();
    }
}
