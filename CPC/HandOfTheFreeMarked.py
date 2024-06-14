def encode(deck, suites):
    freq = {}
    for i in deck:
        if i//13 in freq:
            cardToHide = i
            firstCard = freq[i//13]
            break
        else:
            freq[i//13] = i 


    distance = cardToHide - firstCard

    if(distance > 0):
        (cardToHide, firstCard) = (firstCard, cardToHide)

    x = []
    x.append(firstCard)
    distance = (13 + distance)%13

    remDeck = [i for i in deck if i != firstCard and i != cardToHide]

    if(distance == 1):
        remDeck_sorted = sorted(remDeck)
        med = remDeck_sorted[1]
        x.append(min(remDeck))
        x.append(med)
        x.append(max(remDeck))
    elif(distance == 2):
        remDeck_sorted = sorted(remDeck)
        med = remDeck_sorted[1]
        x.append(min(remDeck))
        x.append(max(remDeck))
        x.append(med)
    elif(distance == 3):
        remDeck_sorted = sorted(remDeck)
        med = remDeck_sorted[1]
        x.append(med)
        x.append(min(remDeck))
        x.append(max(remDeck))
    elif(distance == 4):
        remDeck_sorted = sorted(remDeck)
        med = remDeck_sorted[1]
        x.append(med)
        x.append(max(remDeck))
        x.append(min(remDeck))
    elif(distance == 5):
        remDeck_sorted = sorted(remDeck)
        med = remDeck_sorted[1]
        x.append(max(remDeck))
        x.append(min(remDeck))
        x.append(med)
    else:
        remDeck_sorted = sorted(remDeck)
        med = remDeck_sorted[1]
        x.append(max(remDeck))
        x.append(med)
        x.append(min(remDeck))

    s = ""
    for i in x:
        s+=f"{i%13+1}{suites[i//13]}, "
    return s[:-2]

H = 0*13
D = 1*13
C = 2*13
S = 3*13
suites = {0:"H", 1:"D", 2:"C", 3:"S"}
deck = [10+S, 2+S, 2+D, 4+D,9+D]


deck = [element - 1 for element in deck]

s = encode(deck, suites)
print(s)

