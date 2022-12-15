import java.util.Scanner;

public class bj2562 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int max = sc.nextInt(), idx = 1, tmp;
        for (int i = 2; i <= 9; i++) {
            tmp = sc.nextInt();
            if (tmp > max) {
                max = tmp;
                idx = i;
            }
        }
        System.out.println(max);
        System.out.println(idx);
        sc.close();
    }
}
