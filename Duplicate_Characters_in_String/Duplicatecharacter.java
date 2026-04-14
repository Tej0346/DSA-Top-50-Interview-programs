import java.util.HashMap;
public class Duplicatecharacter {
    public static void main(String[] args) {
        String str = "programming";
        HashMap<Character, Integer> map = new HashMap<>();

        for (char c : str.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        System.out.print("Duplicate characters: ");
        map.forEach((key, value) -> {
            if (value > 1) System.out.print(key + " ");
        });
    }
}