import java.util.Scanner;
import java.util.Arrays;

public class Remainer2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean remainers[] = new Boolean[42];
        Arrays.fill(remainers, true);
        for (int i = 0; i < 10; i++) {
            int tmp = sc.nextInt();
            int idx = tmp % 42;
            remainers[idx] = false;
        }
        int cnt = 0;
        for (Boolean rm : remainers) {
            if (!rm) {
                cnt++;
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
