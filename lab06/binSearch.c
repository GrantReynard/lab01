/* Search integer array
Return index of target, or -1 */
int binSearch( int* arr, int size, int target )
{
int low = 0,
high = size-1 ;
int mid ;
while( low <= high )
{
mid = (low+high) / 2 ;
if( arr[mid] == target )
return mid ;
if( target < arr[mid] )
high = mid-1 ;
else
low = mid+1 ;
}
return( -1 ) ;
}
