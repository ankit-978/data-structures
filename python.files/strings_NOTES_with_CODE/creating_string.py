# agr hm string m kuch add krna chahte h to hme direct ni kr skte h like...
str1=" my kame is ankit singh tomar nd i m from gwl!"


# it shows error becoz we string are immutable i.e we cant change the string
# str1[4]="n"
# print(str1)

# string m add krne k liye hme slice  use krna pdega ..
print(str1[:3] + "n" + str1[5:]) 


# agr hme string badlani h to hme same variable m alag string deni pdegi..
str1=" you are my favourite person"
print (str1)