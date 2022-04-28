



int main() {
	// your code goes here
	int n;
	cin>>n;
	vi a(n);
	
	rep(i,0,n)
	    cin>>a[i];
	    
	heapsort(a);    
	
	rep(i,0,n)
	    cout<<a[i]<<" ";

	return 0;
}
