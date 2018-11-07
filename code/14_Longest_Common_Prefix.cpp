class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		int l = strs[0].length();
		for (int i = 1; i < strs.size(); ++i)
		{
			if (l > strs[i].length())
				l = strs[i].length();
		}
		char *res = new char[l + 1];
		char tmp;
		for (int i = 0; i < l; i++)
		{
			tmp = strs[0][i];
			for (int j = 1; j < strs.size(); ++j)
			{
				if (strs[j][i] != tmp)
				{
					res[i] = 0;
					return string(res);
				}
			}
			res[i] = tmp;
		}
		res[l] = 0;
		return string(res);
	}
};