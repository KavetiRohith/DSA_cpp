bool detectLoop(node* x){
	unordered_set<node*> n;
	while(x!=NULL){
		if(n.find(x)!=n.end()) return true;

		n.insert(x);
		x=x->next;
	}

	return false;
}