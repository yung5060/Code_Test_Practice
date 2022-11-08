import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Snail {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int A = Integer.parseInt(st.nextToken()), B = Integer.parseInt(st.nextToken()),
                V = Integer.parseInt(st.nextToken());
        int days = ((V - A) % (A - B) == 0) ? (V - A) / (A - B) + 1 : (V - A) / (A - B) + 2;
        System.out.println(days);
        br.close();
    }
}
