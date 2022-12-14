import java.util.Scanner;
import java.util.Arrays;

public class Goldbach {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean[] primes = new Boolean[10001];
        Arrays.fill(primes, true);
        primes[0] = primes[1] = false;
        for (int i = 2; i * i < 10001; i++) {
            for (int j = 2 * i; j < 10001; j += i) {
                if (primes[i]) {
                    primes[j] = false;
                }
            }
        }
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int num = sc.nextInt();
            int pnt = num / 2;
            while (!primes[pnt] || !primes[num - pnt]) {
                pnt--;
            }
            System.out.println(pnt + " " + (num - pnt));
        }
        sc.close();
    }
}
