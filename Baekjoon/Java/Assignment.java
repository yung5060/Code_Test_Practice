import java.util.Scanner;
import java.util.Arrays;

public class Assignment {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Boolean students[] = new Boolean[30];
        Arrays.fill(students, true);
        for (int i = 0; i < 28; i++) {
            int stu = sc.nextInt();
            students[stu - 1] = false;
        }
        for (int i = 0; i < 30; i++) {
            if (students[i]) {
                System.out.println(i + 1);
            }
        }
        sc.close();
    }
}
