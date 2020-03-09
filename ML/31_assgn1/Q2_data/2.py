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
	db = {}      
	dbfile = open('./X_train.pkl', 'rb')
	db['X_train'] = pickle.load(dbfile)
	db['X_train'] = db['X_train'].reshape(db['X_train'].shape[0], db['X_train'].shape[1], 1) 
	dbfile.close()
	dbfile = open('./Y_train.pkl', 'rb')
	db['y_train'] = pickle.load(dbfile) 
	db['y_train'] = db['y_train'].reshape(db['y_train'].shape[0], db['y_train'].shape[1], 1) 
	dbfile.close()
	dbfile = open('./X_test.pkl', 'rb')
	db['X_test'] = pickle.load(dbfile)
	db['X_test'] = db['X_test'].reshape(db['X_test'].shape[0], 1)
	dbfile.close()
	dbfile = open('./Fx_test.pkl', 'rb')
	db['y_test'] = pickle.load(dbfile) 
	db['y_test'] = db['y_test'].reshape(db['y_test'].shape[0], 1)
	dbfile.close()
	return db


# It's calculating average of square of bias
def get_bias(y_test, y_pred):
	return np.mean(np.square(np.mean(y_pred, axis = 1).reshape(y_test.shape) - y_test))


def get_mse(y_test, y_pred):
	return np.mean(np.square(y_pred - y_test))


def get_variance(y_pred):
	return np.mean(np.var(y_pred, axis = 1))


def trainData(db, p):
	db['bias'] = np.zeros((p))
	db['variance'] = np.zeros((p))
	db['mse'] = np.zeros((p))
	pred = np.zeros((db['y_test'].shape[0], db['y_train'].shape[0]))
	for j in range(p):
		poly = PolynomialFeatures(degree = j + 1)
		X_test = poly.fit_transform(db['X_test'])
		for i in range(db['y_train'].shape[0]):
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
	plt.show()


if __name__ == "__main__":
	p = 9
	db = loadData()
	db = trainData(db, p)
	printTable(db, p)
	plotGraph(db, p)
