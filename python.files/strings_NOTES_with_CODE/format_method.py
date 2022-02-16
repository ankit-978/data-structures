# format method []
# format method ka use hm string or number ko sath likhne k liye krte h
name="ankit"
number=len(name)
print("hello {}, you get 5 out of {}".format(name,number))

# agr hm order matter n kre es code krna chahte h to hm
print("hello {name},you get 5 out of {number} ".format(name=name,number=number))

# agr hm number kuch decimal tk chahtetb bhi hm format method use krk h like..
price=7.250
with_tax=price*1.9
print(price,with_tax)

#print with 2 decimal digit
print("base price {:.2f}: and with_tax {:.2f} ".format(price,with_tax)) 