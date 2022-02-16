# what is method ?
# method is associated with the class..

# agr hm chahte h ki string m knsi jagh pr knsa digit h to hm method index use krte h..
pets="cats and dogs"
print(pets.index("and"))


# agr hm ye jan na chahte ki koyi substring kisi string m h ya ni to hm .. IN ka use krte h
print("cats" in pets)
print("dogs" in pets)
print("ex" in pets)


# code related to index in it..

def replace_email(email,old_domain,new_domain):
    if("@" +old_domain):
        index=email.index("@"+old_domain)
        new_email=email[:index]+ "@"+new_domain
        return new_email
    else:
        return email
replace_email(abhitimar978@gmail.com,gmail,email)
replace_email(abhitimar978gmail@email.ccom,gmai,Email)