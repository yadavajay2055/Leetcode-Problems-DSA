class Solution {
public:
    int removeElement(vector<int>& A, int elem) {
         int p = 0;
	int q = A.size() - 1;
	while( p <= q )
	{
		if( A[p] != elem )
			p++;
		else if( A[q] == elem )
			q--;
		else
		{
			int tmp = A[p];
			A[p++] = A[q];
			A[q--] = tmp;
		}
	}

	return p;
    }
};