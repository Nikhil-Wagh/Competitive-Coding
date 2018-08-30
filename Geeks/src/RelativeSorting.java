import java.util.*;

public class RelativeSorting {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			int m = scanner.nextInt();
			ArrayList<Integer> a = new ArrayList<>();
			Map<Integer, Integer> b = new HashMap<>();
			for (int i = 0; i < n; i++){
				int x = scanner.nextInt();
				a.add(x);
			}
			for (int i = 0; i < m; i++) {
				int x = scanner.nextInt();
				b.put(x, i);
			}

			a.sort((o1, o2) -> {
				if (b.containsKey(o1) && b.containsKey(o2)) {
					return b.get(o1) < b.get(o2) ? -1 : b.get(o1).equals(b.get(o2)) ? 0 : 1;
				}
				else if (!b.containsKey(o1) && !b.containsKey(o2)) {
					return (o1 < o2) ? -1 : 1;
				}
				else {
					if (b.containsKey(o1))
						return -1;
					else
						return 1;
				}
			});

			for (int num : a)
				System.out.print(num + " ");
			System.out.println();
		}
	}
}
