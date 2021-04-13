#pragma once
#include "Node.h"
template<class T>
class DoubleLinkList 
{
private:
	Node<T>* pHead;
	Node<T>* pTail;
	int length;
public:
	DoubleLinkList();
	~DoubleLinkList();

	Node<T>* getpHead();
	Node<T>* getpTail();
	/*void setpHead(Node<T>*);
	void setPTail(Node<T>*);*/

	int getLength();
	void InsertFirst(T);
	void InsertLast(T);
	bool InsertBefore(T, T);
	bool InsertBefore(Node<T>*, T);
	bool InsertAfter(T, T);
	bool InsertAfter(Node<T>*, T);
	bool InsertAtIndex(int, T);
	void InsertOrder(T);

	void RemoveLast();
	void RemoveFirst();
	bool Remove(T);
	bool Remove(Node<T>*);
	bool RemoveAtIndex(int);

	void ShowFirst();
	void ShowLast();
	bool UpdateVal(T, T);
	bool UpdateVal(Node<T>*, T);

	bool isEmpty();

	Node<T>* SearchVal(T mData);

	void Sort();

	//ByAtrribute 
	void SortBy(bool(*cmp)(T, T));
	template<class U>
	void SearchAllBy(bool(*cmp)(T, U), U, DoubleLinkList<T>&);
	template<class U>
	Node<T>* SearchBy(bool(*cmp)(T, U), U);
	template <class U>
	void ShowBy(bool(*cmp)(T, U), U mAtrribute);
	template <class U>
	bool RemoveBy(bool(*cmp)(T, U), U);
	template <class U>
	bool UpdateBy(bool(*cmp)(T, U), U, T);
	template <class U>
	bool InsertBeforeBy(bool(*cmp)(T, U), U, T);
	template <class U>
	bool InsertAfterBy(bool(*cmp)(T, U), U, T);
	void Swap(T&, T&);
	void Swap(Node<T>*, Node<T>*);
};

template<class T>
DoubleLinkList<T>::DoubleLinkList()
{
	pHead = new Node<T>();
	pTail = new Node<T>();
	length = 0;
}

template<class T>
DoubleLinkList<T>::~DoubleLinkList()
{
	int cnt = 0;
	while (pTail->getpPre() != NULL)
	{
		Node<T>* tmp = pTail->getpPre();
		pTail->setpPre(pTail->getpPre()->getpPre());
		delete tmp;
		++cnt;
	}
	delete pHead;
	delete pTail;
	length = 0;
	//std::cout << "Removed " << cnt << " elements.\n";
}

template<class T>
inline Node<T>* DoubleLinkList<T>::getpHead()
{
	return pHead;
}

template<class T>
inline Node<T>* DoubleLinkList<T>::getpTail()
{
	return pTail;
}

template<class T>
inline int DoubleLinkList<T>::getLength()
{
	return length;
}

template<class T>
void DoubleLinkList<T>::InsertFirst(T mData)
{
	Node<T>* mNode = new Node<T>(mData);
	if (isEmpty())
	{
		pHead->setpNext(mNode);
		pTail->setpPre(mNode);
	}
	else
	{
		pHead->getpNext()->setpPre(mNode);
		mNode->setpNext(pHead->getpNext());
		pHead->setpNext(mNode);
	}
	++length;
}
#if 1
template<class T>
void DoubleLinkList<T>::InsertLast(T mData)
{

	Node<T>* mNode = new Node<T>(mData);
	if (isEmpty())
	{
		pHead->setpNext(mNode);
		pTail->setpPre(mNode);
	}
	else
	{
		pTail->getpPre()->setpNext(mNode);
		mNode->setpPre(pTail->getpPre());
		pTail->setpPre(mNode);
	}
	++length;
}
#endif

#if 1
template<class T>
bool DoubleLinkList<T>::InsertBefore(T target, T mData)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		Node<T>* it = pHead->getpNext();

		while (it != NULL && it->getData() != target)
		{
			it = it->getpNext();
		}
		if (it == NULL)
		{
			return false;
		}
		else
		{
			if (it->getpPre() == NULL)
			{
				InsertFirst(mData);
			}
			else
			{
				Node<T>* mNode = new Node<T>(mData);
				mNode->setpPre(it->getpPre());
				mNode->setpNext(it);
				it->getpPre()->setpNext(mNode);
				it->setpPre(mNode);
			}
			++length;
			return true;
		}
	}
}
#endif
#if 1
template<class T>
inline bool DoubleLinkList<T>::InsertBefore(Node<T>* it, T mData)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		if (it->getpPre() == NULL)
		{
			InsertFirst(mData);
		}
		else
		{
			Node<T>* mNode = new Node<T>(mData);
			mNode->setpPre(it->getpPre());
			mNode->setpNext(it);
			it->getpPre()->setpNext(mNode);
			it->setpPre(mNode);
		}
		++length;
		return true;
	}
}
#endif
#if 1
template<class T>
bool DoubleLinkList<T>::InsertAfter(T target, T mData)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		Node<T>* it = pHead->getpNext();
		while (it != NULL && it->getData() != target)
		{
			it = it->getpNext();
		}
		if (it == NULL)
		{
			return false;
		}
		else
		{
			if (it->getpNext() == NULL)
			{
				InsertLast(mData);
			}
			else
			{
				Node<T>* mNode = new Node<T>(mData);
				mNode->setpPre(it);
				mNode->setpNext(it->getpNext());
				it->getpNext()->setpPre(mNode);
				it->setpNext(mNode);
				++length;
				return true;
			}
		}
	}
}
#endif
#if 1
template<class T>
inline bool DoubleLinkList<T>::InsertAfter(Node<T>* it, T mData)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		if (it->getpNext() == NULL)
		{
			InsertLast(mData);
		}
		else
		{
			Node<T>* mNode = new Node<T>(mData);
			mNode->setpPre(it);
			mNode->setpNext(it->getpNext());
			it->getpNext()->setpPre(mNode);
			it->setpNext(mNode);
			++length;
			return true;
		}
	}
}
#endif 
#if 1
template<class T>
bool DoubleLinkList<T>::InsertAtIndex(int index, T mData)
{

	if (index > length) return false;
	if (index == 0) InsertFirst(mData);
	else if (index == length) InsertLast(mData);
	else
	{
		if (index > 0)
		{
			Node<T>* it;
			if (index < length / 2)
			{
				it = pHead->getpNext();
				int cnt = 0;
				while (cnt < index)
				{
					++cnt;
					it = it->getpNext();
				}
			}
			else
			{
				it = pTail;
				int cnt = 0;
				while (cnt != length - index)
				{
					++cnt;
					it = it->getpPre();
				}
			}

			if (it == NULL)
			{
				return false;
			}
			else
			{
				if (it->getpPre() == NULL)
				{
					InsertFirst(mData);
				}
				else
				{
					Node<T>* mNode = new Node<T>(mData);
					mNode->setpPre(it->getpPre());
					mNode->setpNext(it);
					it->getpPre()->setpNext(mNode);
					it->setpPre(mNode);
				}
				++length;
				return true;
			}
		}
	}

}
#endif
#if 1
template<class T>
inline void DoubleLinkList<T>::InsertOrder(T mData)
{
	Node<T>* it = pHead->getpNext();
	while (it != NULL && (it->getData() < mData)) it = it->getpNext();
	if (it == NULL)
	{
		InsertLast(mData);
	}
	else
	{
		if (it->getpPre() == NULL)
		{
			InsertFirst(mData);
		}
		else
		{
			InsertBefore(it, mData);
		}
	}
}
#endif

#if 1
template<class T>
void DoubleLinkList<T>::RemoveLast()
{
	if (!isEmpty())
	{
		Node<T>* tmp = pTail->getpPre();
		if (tmp->getpPre() == NULL)
		{
			pHead->setpNext(NULL);
			pTail->setpPre(NULL);
			delete tmp;
		}
		else
		{
			tmp->getpPre()->setpNext(NULL);
			pTail->setpPre(tmp->getpPre());
			tmp->setpPre(NULL);
			tmp->setpNext(NULL);
			delete tmp;
		}
		--length;
	}
}
#endif
#if 1
template<class T>
void DoubleLinkList<T>::RemoveFirst()
{
	if (!isEmpty())
	{
		Node<T>* tmp = pHead->getpNext();
		if (tmp->getpNext() == NULL)
		{
			pHead->setpNext(NULL);
			pTail->setpPre(NULL);
			delete tmp;
		}
		else
		{
			tmp->getpNext()->setpPre(NULL);
			pHead->setpNext(tmp->getpNext());
			tmp->setpNext(NULL);
			tmp->setpPre(NULL);
			delete tmp;
		}
		--length;
	}
}
#endif
#if 1
template<class T>
inline bool DoubleLinkList<T>::Remove(T target)
{
	Node<T>* it = SearchVal(target);

	return Remove(it);
}
#endif
#if 1
template<class T>
inline bool DoubleLinkList<T>::Remove(Node<T>* it)
{
	if (it)
	{
		if (it->getpPre() == NULL && it->getpNext() == NULL)
		{
			pHead->setpNext(NULL);
			pTail->setpPre(NULL);
			delete it;
		}
		else if (it->getpNext() == NULL && it->getpPre() != NULL)
		{
			pTail->setpPre(it->getpPre());
			it->getpPre()->setpNext(NULL);
			it->setpPre(NULL);
			delete it;
		}
		else if (it->getpNext() != NULL && it->getpPre() == NULL)
		{
			pHead->setpNext(it->getpNext());
			it->getpNext()->setpPre(NULL);
			it->setpNext(NULL);
			delete it;
		}
		else
		{
			it->getpPre()->setpNext(it->getpNext());
			it->getpNext()->setpPre(it->getpPre());
			it->setpPre(NULL);
			it->setpNext(NULL);
			delete it;
		}
		--length;
		return true;
	}
	return false;
}
#endif
#if 1
template<class T>
inline bool DoubleLinkList<T>::RemoveAtIndex(int index)
{
	if (index >= length) return false;
	if (index == 0) RemoveFirst();
	else if (index == length - 1) RemoveLast();
	else
	{
		if (index > 0)
		{
			Node<T>* it;
			if (index < length / 2)
			{
				it = pHead->getpNext();
				int cnt = 0;
				while (cnt < index)
				{
					++cnt;
					it = it->getpNext();
				}
			}
			else
			{
				it = pTail;
				int cnt = 0;
				while (cnt != length - index)
				{
					++cnt;
					it = it->getpPre();
				}
			}

			if (it == NULL)
			{
				return false;
			}
			else
			{
				if (it->getpPre() == NULL)
				{
					RemoveFirst();
				}
				else
				{
					Remove(it);
				}
				return true;
			}
		}
	}
}
#endif

#if 1
template<class T>
void DoubleLinkList<T>::ShowFirst()
{
	Node<T>* it = pHead->getpNext();
	if (!it) std::cout << "Empty.";
	while (it)
	{
		std::cout << (it)->getData() << "\n";
		it = it->getpNext();
	}
	std::cout << "\n";
}
#endif
#if 1
template<class T>
void DoubleLinkList<T>::ShowLast()
{

	Node<T>* it = pTail->getpPre();
	if (!it) std::cout << "Empty.";
	while (it != NULL)
	{
		std::cout << it->getData() << "\n";
		it = it->getpPre();
	}
	std::cout << "\n";
}

#endif
#if 1
template<class T>
inline bool DoubleLinkList<T>::UpdateVal(T target, T mData)
{
	Node<T>* it = SearchVal(target);
	if (it)
	{
		it->setData(mData);
		std::cout << "The information was updated successfully.\n";
		return true;
	}
	std::cout << "The information was not updated successfully.\n";
	return false;
}
#endif
#if 1
template<class T>
inline bool DoubleLinkList<T>::UpdateVal(Node<T>* it, T mData)
{
	if (it)
	{
		it->setData(mData);
		//std::cout << "\nThe information was updated successfully.\n";
		return true;
	}
	else
	{
		//std::cout << "\nThe information was not udated successfully.\n";
		return false;
	}
	return false;
}
#endif
template<class T>
bool DoubleLinkList<T>::isEmpty()
{
	return (pHead->getpNext() == NULL);
}

#if 1
template<class T>
inline Node<T>* DoubleLinkList<T>::SearchVal(T target)
{
	Node<T>* it = pHead->getpNext();
	while (it && it->getData() != target)
	{
		it = it->getpNext();
	}
	if (!it) std::cout << "Element does not exist.\n";
	return it;
}
#endif

#if 1
template<class T>
inline void DoubleLinkList<T>::Sort()
{
	if (pHead->getpNext() != NULL)
	{
		if (pHead->getpNext()->getpNext() != NULL)
		{
			Node<T>* it1 = pHead->getpNext();
			Node<T>* it2;
			while (it1->getpNext())
			{
				it2 = it1->getpNext();
				while (it2)
				{
					if (it1->getData() > it2->getData()) Swap(it1, it2);
					it2 = it2->getpNext();
				}
				it1 = it1->getpNext();
			}
		}
	}
}
#endif
#if 1
template<class T>
inline void DoubleLinkList<T>::SortBy(bool(*cmp)(T, T))
{
	if (pHead->getpNext() != NULL)
	{
		if (pHead->getpNext()->getpNext() != NULL)
		{
			Node<T>* it1 = pHead->getpNext();
			Node<T>* it2;
			while (it1->getpNext())
			{
				it2 = it1->getpNext();
				while (it2)
				{
					if (cmp(it1->getData(), it2->getData())) Swap(it1, it2);
					it2 = it2->getpNext();
				}
				it1 = it1->getpNext();
			}
		}
	}
}
#endif
#if 1
template<class T>
template<class U>
inline void DoubleLinkList<T>::SearchAllBy(bool(*cmp)(T, U), U mAtrribute, DoubleLinkList<T>& tmp)
{
	
	Node<T>* it = pHead->getpNext();
	while (it)
	{
		
		if (cmp(it->getData(), mAtrribute)) tmp.InsertLast(it->getData());
		it = it->getpNext();
	}
}
template<class T>
template<class U>
inline Node<T>* DoubleLinkList<T>::SearchBy(bool(*cmp)(T, U), U mAtrribute)
{
	Node<T>* it = pHead->getpNext();
	while (it)
	{
		if (cmp(it->getData(), mAtrribute)) break;
		it = it->getpNext();
	}
	//if (!it) std::cout<<"Element does not exist.\n";
	return it;
}
#endif
#if 1
template<class T>
template <class U>
inline bool DoubleLinkList<T>::RemoveBy(bool(*cmp)(T, U), U mAtrribute)
{
	Node<T>* it = SearchBy(cmp, mAtrribute);
	return Remove(it);
}

template<class T>
template <class U>
inline bool DoubleLinkList<T>::UpdateBy(bool(*cmp)(T, U), U mAtrribute, T mData)
{
	Node<T>* it = SearchBy(cmp, mAtrribute);
	return UpdateVal(it, mData);
}
#endif
#if 1
template<class T>
template <class U>
inline bool DoubleLinkList<T>::InsertBeforeBy(bool(*cmp)(T, U), U mAtrribute, T mData)
{
	Node<T>* it = SearchBy(cmp, mAtrribute);
	return InsertBefore(it, mData);
}


template<class T>
template <class U>
inline bool DoubleLinkList<T>::InsertAfterBy(bool(*cmp)(T, U), U mAtrribute, T mData)
{
	Node<T>* it = SearchBy(cmp, mAtrribute);
	return InsertAfter(it, mData);
}
#endif
#if 1
template<class T>
inline void DoubleLinkList<T>::Swap(T& mData1, T& mData2)
{
	T tmp = mData1;
	mData1 = mData2;
	mData2 = tmp;
}
template<class T>
inline void DoubleLinkList<T>::Swap(Node<T>* mNode1, Node<T>* mNode2)
{
	Node<T>* tmp = new Node<T>;
	tmp->setData(mNode1->getData());
	mNode1->setData(mNode2->getData());
	mNode2->setData(tmp->getData());
}
#endif
#if 1
template<class T>
template<class U>
inline void DoubleLinkList<T>::ShowBy(bool(*cmp)(T, U), U mAtrribute)
{
	Node<T>* it = SearchBy(cmp, mAtrribute);
	if (it) std::cout << it->getData() << "\n\n";
	else std::cout << "Element does not exist.\n\n";
}

#endif