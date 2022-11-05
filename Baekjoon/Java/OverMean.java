import java.util.Scanner;
import java.util.ArrayList;

public class OverMean {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int n = sc.nextInt();
            double ttl = 0, per = 0;
            ArrayList<Integer> arr = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                int tmp = sc.nextInt();
                ttl += tmp;
                arr.add(tmp);
            }
            ttl /= n;
            for (int ele : arr) {
                if (ele > ttl) {
                    per++;
                }
            }
            System.out.printf("%.3f%%\n", (per / n * 100));
        }
        sc.close();
    }
}
