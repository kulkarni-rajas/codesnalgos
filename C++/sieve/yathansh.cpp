// This functions finds all primes smaller than 'limit' 
// using simple sieve of eratosthenes. 
void simpleSieve(int limit) 
{ 
	// Create a boolean array "mark[0..limit-1]" and 
	// initialize all entries of it as true. A value 
	// in mark[p] will finally be false if 'p' is Not 
	// a prime, else true. 
	bool mark[limit]; 
	memset(mark, true, sizeof(mark)); 

	// One by one traverse all numbers so that their 
	// multiples can be marked as composite. 
	for (int p=2; p*p<limit; p++) 
	{ 
		// If p is not changed, then it is a prime 
		if (mark[p] == true) 
		{ 
			// Update all multiples of p 
			for (int i=p*2; i<limit; i+=p) 
				mark[i] = false; 
		} 
	} 

	// Print all prime numbers and store them in prime 
	for (int p=2; p<limit; p++) 
		if (mark[p] == true) 
			cout << p << " "; 
} 
