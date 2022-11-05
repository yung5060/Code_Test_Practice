import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class CountElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Integer> array = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            int a = sc.nextInt();
            array.add(a);
        }
        int find = sc.nextInt();
        System.out.println(Collections.frequency(array, find));
        sc.close();
    }
}
