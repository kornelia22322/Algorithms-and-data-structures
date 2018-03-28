import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution {
    public static int numberNeeded(String first, String second) {
        HashMap<Character, Integer> firstMap = gethmap(first);
        HashMap<Character, Integer> secondMap = gethmap(second);
        return compareMaps(firstMap, secondMap);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        System.out.println(numberNeeded(a, b));
    }

    public static int compareMaps(HashMap<Character, Integer> first, HashMap<Character, Integer> second) {
        int comp = 0;
        for (Map.Entry<Character, Integer> entry : first.entrySet())
        {
            if(second.containsKey(entry.getKey())) {
                if(second.get(entry.getKey()) != entry.getValue()) {
                    comp += Math.abs(entry.getValue() - second.get(entry.getKey()));
                }
            } else {
                comp += Math.abs(entry.getValue());
            }
        }
        for (Map.Entry<Character, Integer> entry : second.entrySet())
        {
            if(!first.containsKey(entry.getKey())) {
                comp += Math.abs(entry.getValue());
            }
        }
        return comp;
    }

    public static HashMap<Character, Integer> gethmap(String a) {
        HashMap<Character, Integer> hmap = new HashMap<Character, Integer>();
        for(int i = 0; i < a.length(); i++) {
            if(hmap.containsKey(a.charAt(i))) {
                int val = hmap.get(a.charAt(i));
                hmap.put(a.charAt(i), ++val);
            } else {
                hmap.put(a.charAt(i), 1);
            }
        }
        return hmap;
    }
}
