import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            String s = scanner.next();

            StringBuilder ans = new StringBuilder();

            for (int i = 0; i < n; i += 2) {
                String pair = s.substring(i, i + 2);

                if (pair.equals("00"))
                    ans.append('A');
                else if (pair.equals("01"))
                    ans.append('T');
                else if (pair.equals("10"))
                    ans.append('C');
                else
                    ans.append('G'); // "11"
            }

            System.out.println(ans);
        }
    }
}