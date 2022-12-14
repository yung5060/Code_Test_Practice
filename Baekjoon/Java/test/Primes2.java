import java.util.Scanner;
import java.util.Arrays;

public class Primes2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean[] primes = new Boolean[10001];
        Arrays.fill(primes, true);
        primes[0] = false;
        primes[1] = false;
        for (int i = 2; i * i < 10001; i++) {
            for (int j = 2 * i; j < 10001; j += i) {
                if (primes[i]) {
                    primes[j] = false;
                }
            }
        }
        int M = sc.nextInt(), N = sc.nextInt(), min = -1, sum = 0;
        for (int k = N; k >= M; k--) {
            if (primes[k]) {
                sum += k;
                min = k;
            }
        }
        if (sum == 0) {
            System.out.println(min);
        } else {
            System.out.println(sum);
            System.out.println(min);
        }
        sc.close();
    }
}
