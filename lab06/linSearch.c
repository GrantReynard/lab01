/* return index of first find, -1 otherwise */

int linSearch( int *a, int size, int t ){
int i ;
for( i=0; i<size; ++i )
if( a[i] == t )
return i ;
return i ;
}
