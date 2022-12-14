import java.util.Scanner;

public class GroupWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(), cnt = N;
        for (int i = 0; i < N; i++) {
            String s = sc.next(), tmp = "";
            for (int j = 0; j < s.length(); j++) {
                tmp += s.charAt(j);
                if (j != 0 && s.charAt(j) != s.charAt(j - 1)) {
                    if (tmp.indexOf(s.charAt(j)) != j) {
                        cnt--;
                        break;
                    }
                }
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
