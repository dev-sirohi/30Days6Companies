// I do not currently know whether this code will work or not because the GFG people have a bug on their website (shameless!)
// I have to wait till they fix it. (I know I can test myself, but I don't wanna.)

class Solution
{
    public List<List<string>> Anagrams(List<string> string_list)
    {
        List<List<string>> finalList = new List<List<string>>();
        Dictionary<string, List<string>> dict = new Dictionary<string, List<string>>();
        
        foreach (string str in string_list) {
            char[] charArr = str.ToCharArray();
            Array.Sort(charArr);
            string newStr = string.Join("", charArr);
            dict[newStr].Add(str);
        }
        
        foreach (KeyValuePair<string, List<string>> pair in dict) {
            finalList.Add(pair.Value);
        }
        
        return finalList;
    }
}
