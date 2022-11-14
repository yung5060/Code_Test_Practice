import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class CoordsCompress {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int N = Integer.parseInt(br.readLine());
        Integer[] arr = new Integer[N];
        String[] input = br.readLine().split(" ");
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(input[i]);
        }
        Integer[] arr2 = arr.clone();
        Arrays.sort(arr);
        Map<Integer, Integer> map = new HashMap<>();
        int idx = 0;
        for (int num : arr) {
            if (!map.containsKey(num)) {
                map.put(num, idx++);
            }
        }
        for (int num : arr2) {
            sb.append(map.get(num)).append(" ");
        }
        System.out.println(sb);
    }
}