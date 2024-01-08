'''
    Write a Python program to count the occurrences of each word in a given sentence. 
'''
sentence = input("Enter String : ")
words = sentence.split()

unique_words = []
word_counts = []

for word in words:
    word = word.lower()
    if word not in unique_words:
        unique_words.append(word)
        word_counts.append(1)
    else:
        index = unique_words.index(word)
        word_counts[index] += 1

print("Word Occurrence:")

for i in unique_words:
    ind = unique_words.index(i)
    print(unique_words[ind],":",word_counts[ind])