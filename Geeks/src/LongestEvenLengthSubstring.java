import java.util.Scanner;

public class LongestEvenLengthSubstring {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            String s = scanner.next();
            int n = s.length();
            int[] cum = new int[n + 1];
            for (int i = 0; i < n; i++) {
                cum[i + 1] = cum[i] + Character.getNumericValue(s.charAt(i));
            }

            /*for (int i = 0; i <= n; i++)
                System.out.print(cum[i] + " ");
            System.out.println();*/

            int maxValue = 0;
            for (int l = 2; l <= n; l += 2) {
                for (int i = 0; i <= n - l; i++) {
                    int mid = i + l/2;
                    if (cum[l + i] - cum[mid] == cum[mid] - cum[i]){
                        maxValue = Math.max(maxValue, l);
                    }
                }
            }
            System.out.println(maxValue);
        }
        scanner.close();
    }
}
