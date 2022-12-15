import java.util.Scanner;

public class bj1110 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int tmp = num, cnt = 0;
        while (true) {
            tmp = (((tmp / 10) + (tmp % 10)) % 10) + (tmp % 10) * 10;
            cnt++;
            if (tmp == num) {
                break;
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
