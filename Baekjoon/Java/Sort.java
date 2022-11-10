import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;

public class Sort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        List<Integer> arr = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            arr.add(sc.nextInt());
        }
        Collections.sort(arr);
        for (int i : arr) {
            System.out.println(i);
        }
        sc.close();
    }
}
