import pickle
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
import matplotlib.pyplot as plt


def storeData(db):
	dbfile = open('model.pkl', 'ab')
	pickle.dump(db, dbfile)
	dbfile.close()


def loadData(): 
	dbfile = open('./data.pkl', 'rb')      
	db = pickle.load(dbfile) 
	dbfile.close()
	return db


def splitData(db, k):
	X = db[:,0:1]
	y = db[:,1:2]
	db = {}
	X, db['X_test'], y, db['y_test'] = train_test_split(X, y, test_size = 0.1, random_state = 42)
	db['X_train'] = list()
	db['y_train'] = list()
	train_size = int(X.shape[0] / k)
	for _ in range(k - 1):
		X, X_train, y, y_train = train_test_split(X, y, test_size = train_size, random_state = 42)
		db['X_train'].append(X_train)
		db['y_train'].append(y_train)
	db['X_train'].append(X)
	db['y_train'].append(y)
	db['X_train'] = np.array(db['X_train'])
	db['y_train'] = np.array(db['y_train'])
	return db


# It's calculating average of square of bias
def get_bias(y_test, y_pred):
	return np.mean(np.square(np.mean(y_pred, axis = 1).reshape(y_test.shape) - y_test))


def get_mse(y_test, y_pred):
	return np.mean(np.square(y_pred - y_test))


def get_variance(y_pred):
	return np.mean(np.var(y_pred, axis = 1))


def trainData(db, k, p):
	db['bias'] = np.zeros((p))
	db['variance'] = np.zeros((p))
	db['mse'] = np.zeros((p))
	pred = np.zeros((db['y_test'].shape[0], k))
	for j in range(p):
		poly = PolynomialFeatures(degree = j + 1)
		X_test = poly.fit_transform(db['X_test'])
		for i in range(k):
			reg = LinearRegression().fit(poly.fit_transform(db['X_train'][i]), db['y_train'][i])
			pred[:, i:i+1] = reg.predict(X_test)
		db['bias'][j] = get_bias(db['y_test'], pred)
		db['variance'][j] = get_variance(pred)
		db['mse'][j] = get_mse(db['y_test'], pred)
	return db


def printTable(db, p):
	print("Bias^2: ")
	for j in range(p):
		print("deg " + str(j + 1) + ": " + str(round(db['bias'][j], 2)))

	print("\nVariance")
	for j in range(p):
		print("deg " + str(j + 1) + ": " + str(round(db['variance'][j], 2)))

	print("\nMSE")
	for j in range(p):
		print("deg " + str(j + 1) + ": " + str(round(db['mse'][j], 2)))


def plotGraph(db, p):
	plt.plot(np.arange(1, p + 1).reshape(p), db['bias'], label = 'bias^2', color = 'blue')
	plt.plot(np.arange(1, p + 1).reshape(p), db['variance'], label = 'variance', color = 'red')
	plt.xlabel('Model Complexity')
	plt.ylabel('Error')  
	plt.title('Bias & Variance TradeOff') 
	plt.legend()
	plt.ylim(-5, 50)
	plt.show()


if __name__ == "__main__":
	k = 10
	p = 9
	db = loadData()
	db = splitData(db, k)
	db = trainData(db, k, p)
	printTable(db, p)
	plotGraph(db, p)
