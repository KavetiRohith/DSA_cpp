void reverse(string s){
	string str="";
	vector<string> v;
	for(int i=0;i<s.length();i++){
		if(s[i]==" "){
			v.push_back(str);
			str="";
		}
		else str+=s[i];
	}
	for(int i=v.size()-1;i>0;i++){
		cout<<v[i]<<" "
	}
	cout<<v[0]<<endl;
}