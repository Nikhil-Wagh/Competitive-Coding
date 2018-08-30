import java.util.Scanner;

public class PerfectSumProblem {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int[] arr = new int[n];
			for (int i = 0; i < n; i++)
				arr[i] = scanner.nextInt();
			int k = scanner.nextInt();

			int[] sum = new int[k + 1];
			sum[0] = 1;

			for (int i = 0 ; i < n; i++) {
				for (int j = k - arr[i]; j >= 0; j--) {
					if (sum[j] > 0)
						sum[j + arr[i]] += sum[j];
				}
			}

			System.out.println(sum[k]);
		}
	}
}
