data1,data2 = [],[]

ak = int(input())

for i in range(ak):
  
    data1.append(input())
    
    data2.append(input())
    
data3 = [0 for x in range(ak)]

for i in range(int(input())):
  
    kt = input()
    
    if kt in data1 :
      
        data3[data1.index(kt)] += 1
        
hls = max(data3)

angka = data3.count(hls)

print("tie" if angka > 1 else data2[data3.index(hls)])
