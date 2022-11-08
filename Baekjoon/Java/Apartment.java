import java.util.Scanner;

public class Apartment {

    public int solution(int a, int b) {
        if (b == 1) {
            return 1;
        }
        if (a == 0) {
            return b;
        }
        return solution(a, b - 1) + solution(a - 1, b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Apartment apt = new Apartment();
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int a = sc.nextInt(), b = sc.nextInt();
            System.out.println(apt.solution(a, b));
        }
        sc.close();
    }
}
