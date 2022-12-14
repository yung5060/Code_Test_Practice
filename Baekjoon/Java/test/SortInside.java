import java.util.Scanner;
import java.util.Collections;
import java.util.Arrays;

public class SortInside {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Integer[] arr = new Integer[s.length()];
        for (int i = 0; i < s.length(); i++) {
            arr[i] = s.charAt(i) - 48;
        }
        Arrays.sort(arr, Collections.reverseOrder());
        for (int j : arr) {
            System.out.print(j);
        }
        sc.close();
    }
}
