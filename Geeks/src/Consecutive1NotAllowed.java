import java.util.Scanner;

public class Consecutive1NotAllowed {
	public static final int MAX = 1000000007;
	public static void main(String[] args) {
		int[][] pascal = getPascalTriangle();
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int ans = 0;
			for (int i = 0; i <= (n + 1)/2 ; i++) {
				ans += (pascal[n - i + 1][i]) % MAX;
			}
			System.out.println(ans % MAX);
		}
	}

	private static int[][] getPascalTriangle() {
		int[][] pascal = new int[150][150];
		pascal[0][0] = 1;

		return pascal;
	}
}
