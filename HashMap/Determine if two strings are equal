class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        map<char, int> mp1, mp2;
        if (word1.size() != word2.size())
        {
            return false;
        }
        int n = word1.size();
        for (int i = 0; i < n; i++)
        {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }

        vector<int> arr1, arr2;
        int s = mp1.size();
        if (mp1.size() != mp2.size())
        {
            return false;
        }

        for (auto x : mp1)
        {
            if (mp2.find(x.first) == mp2.end())
            {
                return false;
            }
        }

        for (auto x : mp1)
        {
            arr1.push_back(x.second);
        }

        for (auto x : mp2)
        {
            arr2.push_back(x.second);
        }

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        if (arr1 == arr2)
        {
            return true;
        }
        return false;
    }
};