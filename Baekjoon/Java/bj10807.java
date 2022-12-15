import java.util.Scanner;
import java.util.Collections;
import java.util.Arrays;

public class bj10807 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Integer[] num_arr = new Integer[N];
        for (int i = 0; i < N; i++) {
            num_arr[i] = sc.nextInt();
        }
        Integer find = sc.nextInt();
        System.out.println(Collections.frequency(Arrays.asList(num_arr), find));
        sc.close();
    }
}
