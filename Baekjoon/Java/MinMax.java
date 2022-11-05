import java.util.Scanner;

public class MinMax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int min = sc.nextInt(), max = min;
        for (int i = 1; i < N; i++) {
            int tmp = sc.nextInt();
            if (tmp < min) {
                min = tmp;
            }
            if (tmp > max) {
                max = tmp;
            }
        }
        System.out.println(min + " " + max);
        sc.close();
    }
}
