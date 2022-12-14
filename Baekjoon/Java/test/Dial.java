import java.util.Scanner;

public class Dial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int tmp = 0;
        int[] arr = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };
        for (int i = 0; i < s.length(); i++) {
            tmp += arr[s.charAt(i) - 65];
            tmp++;
        }
        System.out.println(tmp);
        sc.close();
    }
}
