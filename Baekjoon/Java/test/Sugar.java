import java.util.Scanner;

public class Sugar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), cnt = 0;
        while (N % 5 != 0) {
            N -= 3;
            if (N < 0) {
                System.out.println(-1);
                sc.close();
                return;
            }
            cnt++;
        }
        System.out.println(N / 5 + cnt);
        sc.close();
    }
}