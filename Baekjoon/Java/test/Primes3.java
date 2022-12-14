import java.util.Scanner;
import java.util.Arrays;

public class Primes3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt(), N = sc.nextInt();
        Boolean[] primes = new Boolean[N + 1];
        Arrays.fill(primes, true);
        primes[0] = primes[1] = false;
        for (int i = 2; i * i < N + 1; i++) {
            for (int j = 2 * i; j < N + 1; j += i) {
                if (primes[i]) {
                    primes[j] = false;
                }
            }
        }
        for (int k = M; k <= N; k++) {
            if (primes[k]) {
                System.out.println(k);
            }
        }
        sc.close();
    }
}
