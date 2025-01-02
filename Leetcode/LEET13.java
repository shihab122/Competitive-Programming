class Solution {
    public int romanToInt(String s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'I') result += 1;
            else if (s.charAt(i) == 'V') result += 5;
            else if (s.charAt(i) == 'X') result += 10;
            else if (s.charAt(i) == 'L') result += 50;
            else if (s.charAt(i) == 'C') result += 100;
            else if (s.charAt(i) == 'D') result += 500;
            else result += 1000;
        }
        return result;
    }
}