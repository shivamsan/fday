def menu():
	print("menu")
	
def takeinput(sports):
	player= int(input(f"the no of players playing {sports}: "))
	a=[]
	for i in range(0,player):
		a.append(input("enter the name of players: "))
	return a
	
a = takeinput("cricket")
b = takeinput("badminton")
c = takeinput("football")	

def intersection(L1,L2):
	res=[]
	
	for stud in L1:
		if stud in L2:
			res.append(stud)
	return res
	
def union(L1,L2):
	res=L2.copy()
	
	for stud in L1:
		if not stud in L2:
			res.append(stud)
	return res
	
def diff(L1,L2):
	res=[]
	for stud in L2:
		if not stud in L2:
			res.append(stud)
	return res
	
print(f"A={a} \nB={b} \nC={c}")
print("a", end=" ")
print(intersection(a,b))


u = union(a,b)
i = intersection(a,b)

print("b",end=" ")
print(diff(u,i))

q = union(a,b)

d = diff(c,q)

print("c", end=" ")
print(d)

p = intersection(a,c)
l = diff(p,b)

print("d", end=" ")
print(l)

