def main():

    while(True):
    
        word = raw_input("Enter a word to conjugate: ")
        wordRoot = word[0: len(word) - 2]
        wordSuffix = word[len(word) - 2: len(word)]

        wordPronouns = ["Je ", "Tu ", "Il, Elle, On ", "Nous ", "Vous ", "Ils, Elles, Ons "]
        wordEndings_ER = ["e", "es", "e", "ons", "ez", "ent"]
        wordEndings_IR = ["is", "is", "it", "issons", "issez", "issent"]
        wordEndings_RE = ["s", "s", " ", "ons", "ez", "ent"]

        if wordSuffix == "er":
            for x, y in map(None, wordPronouns, wordEndings_ER):
                print x + wordRoot + y
        elif wordSuffix == "ir":
            for x, y in map(None, wordPronouns, wordEndings_IR):
                print x + wordRoot + y
        elif wordSuffix == "re":
            for x, y in map(None, wordPronouns, wordEndings_RE):
                print x + wordRoot + y
        else:
            print "Please enter a valid word!"

        print

main()
