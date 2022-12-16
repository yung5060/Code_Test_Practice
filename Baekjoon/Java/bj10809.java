import java.util.Scanner;
import java.util.Arrays;

public class bj10809 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int[] alphabet = new int[26];
        Arrays.fill(alphabet, -1);
        int idx;
        for (int i = 0; i < s.length(); i++) {
            idx = s.charAt(i) - 97;
            if (alphabet[idx] == -1) {
                alphabet[idx] = i;
            }
        }
        Arrays.stream(alphabet).forEach(num -> System.out.print(num + " "));
        sc.close();
    }
}
