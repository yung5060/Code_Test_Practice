import java.util.Scanner;
import java.lang.Math;

public class bj10818 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), min = 1000000, max = -1000000, tmp;
        for (int i = 0; i < N; i++) {
            tmp = sc.nextInt();
            min = Math.min(min, tmp);
            max = Math.max(max, tmp);
        }
        System.out.println(min + " " + max);
        sc.close();
    }
}
