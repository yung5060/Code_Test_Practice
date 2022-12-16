import java.util.Scanner;

public class bj1152 {
    int cnt = 1;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        s = s.trim();
        if (s.isBlank()) {
            System.out.println(0);
            sc.close();
            return;
        }
        int cnt = 1;
        for (char c : s.toCharArray()) {
            if (c == ' ') {
                cnt++;
            }
        }
        // bj1152 tmp = new bj1152();
        // Arrays.asList(s.toCharArray()).stream().filter(c -> c.equals(' ')).forEach(c
        // -> tmp.cnt++);
        System.out.println(cnt);
        sc.close();
    }
}
