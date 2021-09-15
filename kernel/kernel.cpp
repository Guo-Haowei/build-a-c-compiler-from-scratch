#include "screen.hpp"

extern "C" void _start()
{
    kprint_init();
    kprint_color( VGA_DEFAULT_COLOR );
    kprint( 'H' );
    kprint_color( VGA_WARNING_COLOR );
    kprint( 'e' );
    kprint_color( VGA_ERROR_COLOR );
    kprint( 'l' );
    kprint( 'l' );
    kprint_color( VGA_DEFAULT_COLOR );
    kprint( 'o' );

    kprint_color( VGA_ERROR_COLOR );
    kprint( "\n, world\n!" );

    char buffer[SCREEN_WIDTH];
    for ( int i = 0; i < SCREEN_WIDTH; ++i )
    {
        buffer[i] = ( i % 26 ) + 'A';
    }

    kprint( '\n' );

    kprint_color( VGA_DEFAULT_COLOR );
    kprint( buffer );

    constexpr char msg[] = "This is a test message\n    2222222222222222222222222222222222222222222222222222222222222 this is another test message\n";
    constexpr int repeat = 4;
    for ( int i = 0; i < repeat; ++i )
    {
        kprint_color( i + 1 );
        kprint( msg );
    }
}
