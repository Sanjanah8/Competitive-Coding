import java.util.HashSet;
import java.util.Set;

class Solution {
    public boolean reportSpam(String[] message, String[] bannedWords) {
        Set<String> bannedSet = new HashSet<>();
        for (String word : bannedWords) {
            bannedSet.add(word); 
        }
        
        int matchCount = 0;
        for (String word : message) {
            if (bannedSet.contains(word)) {
                matchCount++;
            }
            if (matchCount >= 2) {  
                return true;
            }
        }
        
        return false;  
    }
}
