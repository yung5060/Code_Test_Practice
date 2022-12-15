import java.util.Scanner;

public class bj11720 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt(), ans = 0;
    String tmp = sc.next();
    for (int i = 0; i < N; i++) {
      ans += tmp.charAt(i) - 48;
    }
    System.out.println(ans);
    sc.close();
  }
}
