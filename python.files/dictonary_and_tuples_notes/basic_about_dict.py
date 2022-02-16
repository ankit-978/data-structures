# what are dictonary?
# the data inside the dictinary take the form of keys and values..
# we can define dictinary by {}
fruits={"apple":1,"banana":2,"mango":3}
print(fruits)


# agr hm kisi dict k saath ka key jan na chahte h to hm ["text"] ka use krte h..
file_counts={"jpg":15,"csv":2,"py":8,"html":20}
print(file_counts["jpg"])


# agr( hm dekhna chate ki koyi key dict mh ya ni to hm in funtion ka use krte h..
print("csv"  in file_counts) 



# agr hm dict m key or string add krna chte h to hm ["text"]=key use krte h
file_counts["cfg"]=17
print(file_counts)

# agr hm kisi string ki key chnge krna chahte h to hm us string ko nyi key de 
file_counts["py"]=23
print(file_counts)


# agr hm dict m kuch delet krna chahte h to hm del keyword use krte h..
del file_counts["html"]
print(file_counts)

# agr hm kisi 2 dict. ko add krna chahte h to hm update meethod ka use krte h..
marks={'physics':68,'math':85,'chemistry':89}
internal={'sceince':78}
marks.update(internal)
print (marks)
internal.update(marks)
print(internal)