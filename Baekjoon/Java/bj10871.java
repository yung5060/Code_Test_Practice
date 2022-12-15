import java.util.Scanner;

public class bj10871 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), X = sc.nextInt(), tmp;
        for (int i = 0; i < N; i++) {
            tmp = sc.nextInt();
            if (tmp < X) {
                System.out.print(tmp + " ");
            }
        }
        sc.close();
    }
}
