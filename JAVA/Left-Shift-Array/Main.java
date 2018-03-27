import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        reverseArray(a, 0, a.length-1);
        reverseArray(a, 0, a.length-1-k);
        reverseArray(a, a.length-k, a.length-1);

        for(int a_i=0; a_i < n; a_i++){
            System.out.print(a[a_i]+ " ");
        }
    }

    public static void reverseArray(int[] arr, int start, int end) {
        int j = 0;
        for(int i=start; i <= start+(end-start)/2; i++) {
            int a = arr[i];
            arr[i] = arr[end-j];
            arr[end-j] = a;
            j++;
        }

    }
}
