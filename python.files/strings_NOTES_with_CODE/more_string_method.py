# methods

# agr hm kisi string k sbhi letter komupper case ya lower case m convert krna chate h
#  .upper()  nd  .lower()
pets=" elephant"
print(pets.upper())


# agr hm string m space hatana chate h to hm 
# .strip method ka use krte h..
print(pets.strip())

# agr hm left m space dena chte h to hm lstrip() or 
# agr hm right m space dena chte h rstrip() ka use krte h
print(pets.lstrip())
print(pets.rstrip())


# agr hm chahte h ki hm pta kr ske ki hmri string koyi letter kitni
#  baar repeat ho a h to hm  .count("LETTER")
print(pets.count("e"))


# agr hm kisi string m ye jana na chahte ki vo end us substring se ho rhi h ya ni
#  .endwith("substring") method use krte h
print(pets.endswith("ant"))
print("animal".endswith("mal"))


# gr hm string ko add krna chate h to hm join method ka use krte h..
# .join()
print(" ".join(["you","are","doing","great","job"]))
print("...".join(["you","are","doing","great","job"]))



# agr hm string ko alg krna chahte h to hm split method ka use krte h
# .split()
# in this method we convert string into list..
str2="you r such a bad person u r not deserve me"
print(str2.split())





# code for using split method
def initials(phrase):
    words = phrase.split()
    result = ""
    for word in words:
        result +=word[0]
    return result

print(initials("Universal Serial Bus")) # Should be: USB
print(initials("local area network")) # Should be: LAN
print(initials("Operating system")) # Should be: OS