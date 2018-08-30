import java.util.*;

public class FirstNonRepeatingCharacters {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while (t-- > 0) {
			int n = scanner.nextInt();
			Queue<Character> q = new LinkedList<>();
			Map<Character, Integer> map = new HashMap<>();

			while (n-- > 0){
				Character c = scanner.next().charAt(0);
				map.put(c, map.containsKey(c) ? map.get(c) + 1 : 1);
				((LinkedList<Character>) q).add(c);
				while (!q.isEmpty() && map.get(q.peek()) > 1){
					q.remove();
				}
				if(q.isEmpty())
					System.out.print(-1 + " ");
				else
					System.out.print(q.peek() + " ");
			}
			System.out.println();
		}
	}
}

/*

2
40
v f g v j w d v j j a f q z z x l c x d z n c q g j l a p o p k v x f g v i c e
12
o t z o m e q l f t x z


1
284
w l r b b m q b h c d a r z o w k k y h i d d q s c d x r j m o w f r x s j y b l d b e f s a r c b y n e c d y g g x x p k l o r e l l n m p a p q f w k h o p k m c o q h n w n k u e w h s q m g b b u q c l j j i v s w m d k q t b x i x m v t r r b l j p t n s n f w z q f j m a f a d r r w s o f s b c n u v q h f f b s a q x w p q c a c e h c h z v f r k m l n o z j k p q p x r j x k i t z y x a c b h h k i c q c o e n d t o m f g d w d w f c g p x i q v k u y t d l c g d e w h t a c i o h o r d t q k v w c s g s p q o q m s b o a g u w n n y q x n z l g d g w

*/
