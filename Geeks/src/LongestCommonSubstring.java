import java.lang.management.ManagementFactory;
import java.util.Scanner;

public class LongestCommonSubstring {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n, m;
			n = scanner.nextInt();
			m = scanner.nextInt();
			String a = scanner.next();
			String b = scanner.next();

			int[][] arr = new int[m + 1][n + 1];
			int ans = 0;
			for (int i = 1; i <= m; i++) {
				for (int j = 1; j <= n; j++) {
					if (b.charAt(i - 1) == (a.charAt(j - 1)))
						arr[i][j] = arr[i - 1][j - 1] + 1;
					ans = Math.max(ans, arr[i][j]);
				}
			}

			/*System.out.println();
			for (int i = 0; i <= m; i++) {
				for (int j = 0; j <= n; j++)
					System.out.print(arr[i][j] + " ");
				System.out.println();
			}*/
			System.out.println(ans);
		}
	}

}
