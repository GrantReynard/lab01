void quicksort( int v [], int n )
{
if( n <= 1 ) /* nothing to do */
return ;
int piv = partition( v, n ) ;
quicksort( v, piv ) ; /* recursively sort each part. */
quicksort( v+piv+1, n-piv-1 ) ;
}


int partition( int *v, int n )
{
int i, last=0 ;
swap( v,0,rand() % n ); /* move pivot element to v[0] */
for ( i = 1; i < n; i++ ) /* partition */
if ( v[i] < v[0] )
swap( v, ++last, i ) ;
swap( v, 0, last ); /* restore pivot */
return last ;
}




