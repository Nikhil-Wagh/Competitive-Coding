import javafx.scene.shape.QuadCurve;
import javafx.util.Pair;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class RottenOranges {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n, m;
			n = scanner.nextInt();
			m = scanner.nextInt();

			int[][] arr = new int[n][m];
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					arr[i][j] = scanner.nextInt();
				}
			}

			int[][] sol = new int[n][m];
			for(int i = 0 ; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (arr[i][j] == 2) {
						int[][] visited = new int[n][m];
						bfs(arr, visited, sol, i, j);
					}
				}
			}
		}
	}

	private static void bfs(int[][] arr, int[][] visited, int[][] sol, int i, int j) {
		visited[i][j] = 1;
		Queue<Pair<Integer, Integer>> q = new LinkedList<>();

	}
}
