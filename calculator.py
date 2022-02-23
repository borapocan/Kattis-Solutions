from sys import stdin
for line in stdin:
    if line == "":
        break
    else:
        print("%.2f" % eval(line))
