import re
s = str(input())
i = re.findall('\\d', s)
print(len(i))