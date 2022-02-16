def pig_latin(text):
  say = ""
  # Separate the text into words
  words =text.split()
  for word in words:
    # Create the pig latin word and add it to the list
    word1=word[1:]
    word2=word1[1:]+word[:1]+"ay"
    # Turn the list back into a phrase
    " ".join(word2)

  return word2
		
print(pig_latin("hello how are you")) # Should be "ellohay owhay reaay ouyay"
print(pig_latin("programming in python is fun")) # Should be "rogrammingpay niay ythonpay siay unfay"