def menu():
	print("menu")
	
menu()
	
def takeinput():
	str=input("enter string to manipulate: ")
	return str
	
str1=takeinput()

def longest():
	list1=str1.split()
	m=0
	word=o
	print(list1)
	
	for i in range(len(list1)):
		if m<len(list1[i]):
			m=len(list1[i])
			word=i
	print("the lonest word is ", list1[word])

longest()
