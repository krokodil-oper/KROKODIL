#1

sentence = "че то"
word_lengths = lengths(sentence)
print(word_lengths)  

#2
def letter_frequency(text):
  
  letter_counts = {}
  for letter in text.lower():
    if letter.isalpha():  
      if letter in letter_counts:
        letter_counts[letter] += 1
      else:
        letter_counts[letter] = 1
  return letter_counts

text = "че то"
letter_stats = letter_frequency(text)
print(letter_stats)
#3
def divisors(numbers):
   return {number: [divisor for divisor in range(1, number + 1) if number % divisor == 0] for number in numbers}


numbers = {2, 4, 6, 8, 10}
divisors_dict = divisors(numbers)
print(divisors_dict)


#4
def abbreviate(string):

  return ''.join([word[0].upper() for word in string.split()])

string = "че то"
abbreviation = abbreviate(string)
print(abbreviation)  

#5
def rle_decode(rle):

  return ''.join([char * count for char, count in rle])

rle = [('a', 2), ('b', 3), ('c', 1), ('d', 4)]
decoded_string = rle_decode(rle)
print(decoded_string)  