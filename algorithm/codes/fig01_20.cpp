int main( )
{
MemoryCell<int>    m1;
MemoryCell<string> m2;( "hello" );

m1.write( 37 );
m2.write( m2.read( ) + "world" );
cout << m1.read( ) << end1 << m2.read( ) << end1;

return 0;
}
