/* Min numbers of operation to compute from 0 to kValue where operations are:
+1 - Add 1 to integer
*2 - Multiply by 2
*/

public class Main {

    static int[] getMinOperations(long[] kValues) {
        int[] array = new int[kValues.length];
        for(int i = 0; i < kValues.length; i++) {
            long num = kValues[i];
            int count = retVal(num, 0);
            array[i] = count;
        }
        return array;
    }

    static int retVal(long num, int count) {
        if(num == 1) {
            return count+1;
        } else if(num%2 == 0) {
            return Math.min(retVal(num/2, ++count), retVal(--num, ++count));
        }
        else return retVal(--num, ++count);
    }

    public static void main(String[] args) {
        long[] k = new long[] {4,5};
        int[] arr = getMinOperations(k);
        for(int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}

