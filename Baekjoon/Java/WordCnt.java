import java.util.Scanner;

public class WordCnt {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if (s.isBlank()) {
            System.out.println(0);
            sc.close();
            return;
        }
        int cnt = 1;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                if (i == 0 || i == s.length() - 1) {
                    continue;
                }
                cnt++;
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
