import java.util.Scanner;
import java.util.Arrays;

public class Primes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean[] primes = new Boolean[1001];
        Arrays.fill(primes, true);
        primes[0] = false;
        primes[1] = false;
        for (int i = 2; i * i <= 1001; i++) {
            for (int j = 2 * i; j < 1001; j += i) {
                if (primes[i] == true) {
                    primes[j] = false;
                }
            }
        }
        int N = sc.nextInt(), cnt = 0;
        for (int i = 0; i < N; i++) {
            int num = sc.nextInt();
            if (primes[num]) {
                cnt++;
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
