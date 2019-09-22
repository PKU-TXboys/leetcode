class Solution {
public:
	int myAtoi(string str) {
		int l = str.length();
		long long result = 0, neg = 1, begin = 0;
		int index = 0;
		unsigned long long int_max = 2147483647;
		int numlen = 0;
		while (index < l)
		{
			if (str[index] >= '0' && str[index] <= '9')
			{
				begin = 1;
				result = result * 10 + str[index] - '0';
				if(result != 0)
					numlen++;
				if (numlen > 10)
				{
					if (neg == 1)
						return int_max;
					else
						return -2147483647 - 1;
				}
			}
			else if (str[index] == '-')
			{
				if (begin == 0)
				{
					neg = -1;
					begin = 1;
				}
				else
				{
					if (neg == 1 && result > int_max)
						return int_max;
					else if (neg == -1 && result > int_max + 1)
						return -2147483647 - 1;
					else
						return result * neg;
				}
			}
			else if (str[index] == '+')
			{
				if (begin == 0)
				{
					neg = 1;
					begin = 1;
				}
				else
				{
					if (neg == 1 && result > int_max)
						return int_max;
					else if (neg == -1 && result > int_max + 1)
						return -2147483647 - 1;
					else
						return result * neg;
				}
			}
			else if (str[index] == ' ')
			{
				if (begin != 0)
				{
					if (neg == 1 && result > int_max)
						return int_max;
					else if (neg == -1 && result > int_max + 1)
						return -2147483647 - 1;
					else
						return result * neg;
				}
			}
			else
			{
				if (neg == 1 && result > int_max)
					return int_max;
				else if (neg == -1 && result > int_max + 1)
					return -2147483647 - 1;
				else
					return result * neg;
			}
			index++;
		}
		if (neg == 1 && result > int_max)
			return int_max;
		else if (neg == -1 && result > int_max + 1)
			return -2147483647 - 1;
		else
			return result * neg;
	}
};
