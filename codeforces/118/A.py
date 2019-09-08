s = input()
s = s.lower()

for i in range(len(s)):
    if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y':
        continue
    else:
        print('.'+s[i],end="")


