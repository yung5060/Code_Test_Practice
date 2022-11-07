import java.util.Scanner;

public class BreakEven {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt(), B = sc.nextInt(), C = sc.nextInt();
        if (B >= C) {
            System.out.println(-1);
            sc.close();
            return;
        }
        System.out.println(A / (C - B) + 1);
        sc.close();
    }
}
