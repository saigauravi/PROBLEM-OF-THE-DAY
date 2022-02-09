class Solution {
public:
    bool isIsomorphic(string s, string t) {
        {if(s.length()!=t.length())
            return false;
        }
        int a[256]={0},b[256]={0},c[256]={0};
        for(int i=0;i<s.length();i++)
        {if (a[s[i]]!=b[t[i]])
        {return false;}
         if(c[s[i]]==0)
         {c[s[i]]=t[i];}
         if(c[s[i]]!=t[i])
             return false;
         a[s[i]]++;
         b[t[i]]++;
        }
        return true;
    }
};
