import java.util.*;

class Codechef {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();
        
        while (T-- > 0) {
            String n = sc.next();
            
            int rem = 0;
            for (char ch : n.toCharArray()) {
                rem = (rem * 10 + (ch - '0')) % 20;
            }
            
            System.out.println(rem);
        }
        
        sc.close();
    }
}