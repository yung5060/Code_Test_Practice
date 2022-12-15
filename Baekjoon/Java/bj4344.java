import java.util.Scanner;

public class bj4344 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int C = sc.nextInt();
        for (int i = 0; i < C; i++) {
            int N = sc.nextInt(), cnt = 0;
            double[] cls = new double[N];
            double mean = 0, tmp;
            for (int j = 0; j < N; j++) {
                tmp = sc.nextDouble();
                mean += tmp;
                cls[j] = tmp;
            }
            mean /= N;
            for (int j = 0; j < N; j++) {
                if (cls[j] > mean) {
                    cnt++;
                }
            }
            System.out.printf("%.3f", (double) cnt / N * 100);
            System.out.println("%");
        }
        sc.close();
    }
}
