import java.util.Scanner;

public class Factorization {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), num = 2;
        while (true) {
            if (N == 1) {
                break;
            }
            if (N % num == 0) {
                System.out.println(num);
                N /= num;
            } else {
                num++;
            }
        }
        sc.close();
    }
}
