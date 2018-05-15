import pickle
f = open('py/signet.pkl', 'rb')
data = pickle.load(f, encoding='iso-8859-1')
print(data)