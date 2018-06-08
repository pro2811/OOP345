//SAVAN PANCHAL
//152302162

#ifndef KVLIST_H
#define KVLIST_H
#include <iostream>

template<typename K, typename V, int N>	

class KVList{
private:
	struct str1{
		K key;
		V value;
	}obj1[N];

	size_t LSize = 0;

public:
	KVList(){		
		LSize = 0;
	}

	size_t size() const{
		return LSize;
	}

	const K& key(int i ) const{
		return obj1[i].key;
	}
	
	const V& value(int i) const{
		return obj1[i].value;
	}


	KVList& add(const K& ki, const V& val){
		if(LSize < N){
		obj1[LSize].key = ki;
		obj1[LSize].value = val;
		LSize++;
		}
		return *this;
	}


	int find(const K& k) const{
		for (size_t s=0; s<LSize; s++){
		if(obj1[s].key == k){
			return s;
		}
	}
		return 0;
}


	KVList& replace(int i, const K& k, const V& v){
		obj1[i].key = k;
		obj1[i].value = v;
		return * this;
	} 
	
};
#endif

