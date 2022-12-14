import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Mean {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            int ele = sc.nextInt();
            arr.add(ele);
        }
        int max = Collections.max(arr);
        double ttl = 0;
        for (int e : arr) {
            ttl += ((double) e / max) * 100;
        }
        System.out.println(ttl / N);
        sc.close();
    }
}
