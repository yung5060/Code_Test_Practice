import java.util.Scanner;

public class bj5622 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int ans = 0;
        for (char c : s.toCharArray()) {
            int t = (int) c;
            if (t <= 67) {
                ans += 3;
            } else if (t <= 70) {
                ans += 4;
            } else if (t <= 73) {
                ans += 5;
            } else if (t <= 76) {
                ans += 6;
            } else if (t <= 79) {
                ans += 7;
            } else if (t <= 83) {
                ans += 8;
            } else if (t <= 86) {
                ans += 9;
            } else {
                ans += 10;
            }
        }
        System.out.println(ans);
        sc.close();
    }
}
