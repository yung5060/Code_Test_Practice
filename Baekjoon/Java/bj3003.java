import java.util.Scanner;

public class bj3003 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] chess = { 1, 1, 2, 2, 2, 8 };
        int num;
        for (int i = 0; i < 6; i++) {
            num = sc.nextInt();
            System.out.print(chess[i] - num + " ");
        }
        sc.close();
    }
}
