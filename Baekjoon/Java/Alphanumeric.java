import java.util.Scanner;

public class Alphanumeric {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            int rep = sc.nextInt();
            String s = sc.next(), tmp = "";
            for (int j = 0; j < s.length(); j++) {
                for (int k = 0; k < rep; k++) {
                    tmp += s.charAt(j);
                }
            }
            System.out.println(tmp);
        }
        sc.close();
    }
}