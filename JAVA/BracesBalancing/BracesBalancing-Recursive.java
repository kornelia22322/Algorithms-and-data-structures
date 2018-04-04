public class Main {

    public static boolean isCorrect(String[] array, int i, int howMany) {
        System.out.println(i + " " +  howMany);
        if(i == array.length && howMany == 0) {
            return true;
        }
        else if(i < array.length && array[i] == "(") {
            return isCorrect(array, ++i, ++howMany);
        } else if(i < array.length && array[i] == ")" && howMany > 0) {
            return isCorrect(array, ++i, --howMany);
        }
        return false;
    }

    public static void main(String[] args) {
        System.out.println(isCorrect(new String[] {")", ")", "(", "("}, 0, 0 ));
    }
}
