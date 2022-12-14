import java.util.Scanner;

public class OXQuiz {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            String s = sc.next();
            int j = 0, ttl = 0;
            while (j < s.length()) {
                if (s.charAt(j) == 'O') {
                    int score = 1;
                    while (s.charAt(j) == 'O') {
                        ttl += score++;
                        j++;
                        if (j == s.length()) {
                            break;
                        }
                    }
                } else {
                    j++;
                }
            }
            System.out.println(ttl);
        }
        sc.close();
    }
}
