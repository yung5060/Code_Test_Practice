import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class AgeSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Person[] arr = new Person[N];
        for (int i = 0; i < N; i++) {
            int age = sc.nextInt();
            String name = sc.next();
            arr[i] = new Person(age, name);
        }
        Arrays.sort(arr, new Comparator<Person>() {
            @Override
            public int compare(Person i1, Person i2) {
                return i1.getAge() - i2.getAge();
            }
        });
        for (Person p : arr) {
            System.out.println(p.getAge() + " " + p.getName());
        }
        sc.close();
    }

    public static class Person {
        int age;
        String name;

        public Person(int age, String name) {
            this.age = age;
            this.name = name;
        }

        public int getAge() {
            return this.age;
        }

        public String getName() {
            return this.name;
        }
    }
}
