import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class bj1157 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        s = s.toLowerCase();
        Map<String, Integer> alphabet = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            if (alphabet.containsKey(String.valueOf(s.charAt(i)))) {
                alphabet.replace(String.valueOf(s.charAt(i)), alphabet.get(String.valueOf(s.charAt(i))),
                        alphabet.get(String.valueOf(s.charAt(i))) + 1);
            } else {
                alphabet.put(String.valueOf(s.charAt(i)), 1);
            }
        }
        Integer maxValue = alphabet.entrySet().stream().max((o1, o2) -> o1.getValue().compareTo(o2.getValue())).get()
                .getValue();
        List<String> maxList = new ArrayList<String>();
        for (Map.Entry<String, Integer> entry : alphabet.entrySet()) {
            if (entry.getValue().equals(maxValue)) {
                maxList.add(entry.getKey());
            }
        }
        if (maxList.size() > 1) {
            System.out.println("?");
        } else {
            System.out.println((char) (maxList.get(0).charAt(0) - 32));
        }
        sc.close();
    }
}
