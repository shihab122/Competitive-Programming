import java.util.*;

public class Solution {
    public boolean isPalindrome(int x) {
        String str = Integer.toString(x);
        StringBuffer stringBuffer = new StringBuffer(str);
        if (str.contentEquals(stringBuffer.reverse())) return true;
        return false;
    }
}
