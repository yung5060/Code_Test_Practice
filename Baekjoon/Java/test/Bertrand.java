import java.util.Scanner;
import java.util.Arrays;

public class Bertrand {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean[] primes = new Boolean[246913];
        Arrays.fill(primes, true);
        primes[0] = primes[1] = false;
        for (int i = 2; i * i < 246913; i++) {
            for (int j = 2 * i; j < 246913; j += i) {
                if (primes[i]) {
                    primes[j] = false;
                }
            }
        }
        int n = sc.nextInt();
        while (n != 0) {
            int cnt = 0;
            for (int k = n + 1; k <= 2 * n; k++) {
                if (primes[k]) {
                    cnt++;
                }
            }
            System.out.println(cnt);
            n = sc.nextInt();
        }
        sc.close();
    }
}
