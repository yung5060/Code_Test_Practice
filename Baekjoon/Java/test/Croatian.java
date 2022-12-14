import java.util.Scanner;

public class Croatian {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int i = 0, cnt = 0;
        while (i < s.length() - 1) {
            if (s.charAt(i) == 'c') {
                if (s.charAt(i + 1) == '=' || s.charAt(i + 1) == '-') {
                    i += 2;
                    cnt++;
                } else {
                    i++;
                    cnt++;
                }
            } else if (s.charAt(i) == 'd') {
                if (s.charAt(i + 1) == 'z') {
                    if (i == s.length() - 2) {
                        i += 2;
                        cnt += 2;
                    } else {
                        if (s.charAt(i + 2) == '=') {
                            i += 3;
                            cnt++;
                        } else {
                            i++;
                            cnt++;
                        }
                    }
                } else if (s.charAt(i + 1) == '-') {
                    i += 2;
                    cnt++;
                } else {
                    i++;
                    cnt++;
                }
            } else if (s.charAt(i) == 'l' || s.charAt(i) == 'n') {
                if (s.charAt(i + 1) == 'j') {
                    i += 2;
                    cnt++;
                } else {
                    i++;
                    cnt++;
                }
            } else if (s.charAt(i) == 's' || s.charAt(i) == 'z') {
                if (s.charAt(i + 1) == '=') {
                    i += 2;
                    cnt++;
                } else {
                    i++;
                    cnt++;
                }
            } else {
                i++;
                cnt++;
            }
        }
        if (i == s.length() - 1) {
            System.out.println(++cnt);
        } else {
            System.out.println(cnt);
        }
        sc.close();
    }
}
