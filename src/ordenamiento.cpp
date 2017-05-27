#include "ordenamiento.h"

split(list<int>l,int index,list<int> li,list<int> ld){
	for (int j = 0; j < l.size(); ++j)
	{
		if(j<index){
			li.push_back(l[j]);
		}
		else{
			ld.push_back(l[j]);
		}
	}
}

vector<int> ordenamiento::Bubblesort(vector<int> l){
	for (int i = 0; i < l.size(); ++i)
	{
		for (int j = 0; j <l.size(); ++i)
		{
		
			{
				if (l[j]> l[j+1])
				{
					int=aux=l[j];
					l[j]=l[j+1];
					l[j+1]=aux;
				}
			}
		}
	}
}


list<int> ordenamiento::insercion(list<int> l){
	int aux;
	for(i=1;i<l.size();++i){
	aux=l[i];
	int j=l-1;
		while(j>=0 && aux<l[j]){
		l[j+1]=l[j]
		--j;
		}
	l[j+1]=aux;
	}
	return l;
}

int ordenamiento::Mergesort (list<int> l){
	int t= l.size()/2;
	list<int> ld,li;
	split(l,t,li,ld);
	if (li.size()!=1)
	{
		li=Mergesort(li);
	}
	if(ld.size()!=1)
	{
		ld=Mergesort(ld);
	}

}

list<int> l merge(li,ld){
	int i=0, j=0;
	lista l;
	while(i<li.size() && j<ld.size){
		if(li[i]>ld[j]){
			l.push_back(ld[j]);
			++j;
		}
		else{
			l.push_back(li[i]);
			++i;
		}
	}
	if (i==li.size())
	{
		for (int k = j; k < ld.size(); ++k)
		{
			l.push_back(ld[k]);
		}
	}
	else{
		for (int k = i; k < li.size(); ++k)
		{
			l.push_back(li[k])
		}
	}
}

int Menor (lista l, int i){
	int aux= l[i];
	int index = i;
	for (int j = i+1; j < l.size(); ++j)
	{
		if (aux>l[j])
		{
			aux=l[j];
			index=j;
		}
	}
	return index;
}

list<int> ordenamiento::seleccion(list<int> l){
	int aux;
	for (int i = 0; i < l.size(); ++i)
	{
		int idx_men=Menor(l.i);
		if (idx_men!=i)
		{
			aux=l[i];
			l[i]=l[idx_men];
			l[idx_men]=aux;
		}
	}
	return l;
}