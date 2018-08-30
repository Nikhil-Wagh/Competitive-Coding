import java.util.Scanner;

public class LengthOfLongestRegion {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while(t-- > 0) {
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			int[][] arr = new int[n][m];
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++)
					arr[i][j] = scanner.nextInt();
			}

			boolean[][] visited = new boolean[n][m];
			System.out.println(solve(arr, visited, 0, 0, n, m, 0));
		}
	}

	private static int solve(int[][] arr, boolean visited[][], int i, int j, int n, int m, int cur) {
		int max = cur;
		if (i > 0) {
			if (j > 0){
				if(arr[i][j] == 1 && !visited[i - 1][j - 1]) {
					visited[i][j] = true;
					max = Math.max(max, solve(arr, visited, i - 1, j - 1, n, m,max + 1));
				}
			}
			if (j > -1){
				if (arr[i - 1][j] == 1 && !visited[i - 1][j]) {
					visited[i - 1][j] = true;
					max = Math.max(max, solve(arr, visited, i - 1, j, n, m,max + 1));
				}
			}
			if (j < n) {
				if (arr[i - 1][j + 1] == 1 && !visited[i - 1][j + 1]) {
					visited[i - 1][j + 1] = true;
					max = Math.max(max, solve(arr, visited, i - 1, j, n, m,max + 1));
				}
			}
		}
		if (i < n) {

		}

		return max;
	}
}
