#pragma once
template <class T>
class Node {
private:
	Node<T>* pNext;
	Node<T>* pPre;
	T Data;
public:
	Node();
	~Node();
	Node(T&);

	Node<T>* getpNext();
	Node<T>* getpPre();
	T getData();

	void setpNext(Node<T>*);
	void setpPre(Node<T>*);
	void setData(T);
	Node<T> operator=(const Node<T>&);
	Node<T>* operator=(const Node<T>*&);

};




template<class T>
Node<T>::Node() :pNext(NULL), pPre(NULL) {}


template<class T>
Node<T>::~Node() {}

template<class T>
Node<T>::Node(T& mData) :pNext(NULL), pPre(NULL), Data(mData) {}

template<class T>
inline T Node<T>::getData()
{
	return T(Data);
}




template<class T>
inline Node<T>* Node<T>::getpNext()
{
	return this->pNext;
}

template<class T>
inline Node<T>* Node<T>::getpPre()
{
	return pPre;
}



template<class T>
inline void Node<T>::setpNext(Node<T>* mpNext)
{
	this->pNext = mpNext;
}

template<class T>
inline void Node<T>::setpPre(Node<T>* mpPre)
{
	pPre = mpPre;
}

template<class T>
inline void Node<T>::setData(T mData)
{
	this->Data = mData;
}

template<class T>
inline Node<T> Node<T>::operator=(const Node<T>& mNode)
{
	this->Data = mNode->Data;
	return *this;
}

template<class T>
inline Node<T>* Node<T>::operator=(const Node<T>*& mNode)
{
	this->pNext = mNode->pNext;
	this->pPre = mNode->pPre;
	this->Data = mNode->Data;
	return *this;
}






