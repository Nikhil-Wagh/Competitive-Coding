import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MaximizeTheArray {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while(t-- > 0) {
			int n = scanner.nextInt();
			int[] a = new int[n];
			int[] b = new int[n];
			for (int i = 0; i < n; i++)
				a[i] = scanner.nextInt();
			for (int i = 0; i < n; i++)
				b[i] = scanner.nextInt();

			Map<Integer, Integer> mp = new HashMap<>();
			for (int i = 0; i < n; i++) {
				mp.put(a[i], 0);
				mp.put(b[i], 0);
			}

//			mp.forEach((k ,v) -> System.out.println(k + " : " + v));
			ArrayList<Integer> keys = new ArrayList<>(mp.keySet());
//			System.out.println(keys);

			for (int i = 1; i <= n; i++)
				mp.put(keys.get(keys.size() - i), 1);

			for(int i = 0; i < n; i++) {
				if (mp.get(b[i]) > 0 ) {
					mp.put(b[i], mp.get(b[i]) - 1);
					System.out.print(b[i] + " ");
				}
			}
			for(int i = 0; i < n; i++) {
				if (mp.get(a[i]) > 0 ) {
					mp.put(a[i], mp.get(a[i]) - 1);
					System.out.print(a[i] + " ");
				}
			}
			System.out.println();
		}
	}
}
