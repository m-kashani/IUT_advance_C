// Bmp.h
// NKU CSC 480/580 Spring 2003 - Kirby
// ----------------------------------------------------------------------
// A simple encapsulation of a 24-bit .bmp file.
// Revised to not require "Windows.h". 
// ----------------------------------------------------------------------


#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include <stdexcept>
using namespace std ;
 
    
// Types - defined as in WinDef.h 
typedef int LONG ;
typedef unsigned int  DWORD ; 
typedef unsigned short WORD ;

// *** If you are not using VC++, you may need to change this pragma.
#pragma pack(2)  /* align structure fields on 2-byte boundaries */

// Types - defined as in WinGDI.h

typedef struct tagBITMAPFILEHEADER { // bmfh 
        WORD    bfType; 
        DWORD   bfSize; 
        WORD    bfReserved1; 
        WORD    bfReserved2; 
        DWORD   bfOffBits; 
} BITMAPFILEHEADER; 

typedef struct tagBITMAPINFOHEADER{ // bmih 
   DWORD  biSize; 
   LONG   biWidth; 
   LONG   biHeight; 
   WORD   biPlanes; 
   WORD   biBitCount ;
   DWORD  biCompression; 
   DWORD  biSizeImage; 
   LONG   biXPelsPerMeter; 
   LONG   biYPelsPerMeter; 
   DWORD  biClrUsed; 
   DWORD  biClrImportant; 
} BITMAPINFOHEADER; 

// **** If you are not using VC++, you may need to change this pragma.
#pragma pack() /* return to default packing of structure fields*/


class Bmp
{
public:
    Bmp( const string& filename,int *pp )  throw ( runtime_error ) ;
   ~Bmp() throw() ;

   void copyHeaderToStream(ofstream &outStream );
    int  getWidth()  const throw () { return _bmih.biWidth ; }
    int  getHeight() const throw () { return _bmih.biHeight ; } 
    void getPixel( int row, int column, int& red /*out*/, int& green /*out*/, int& blue /*out*/ ) const throw ( out_of_range ) ;
   
private:
    BITMAPFILEHEADER _bmfh ;
    BITMAPINFOHEADER _bmih ;
    int              _pixelCount ;  
    int              _imageSize ;   
    unsigned char*   _image ; 

    int _rcToOffset( int row, int col ) const throw () ;
} ;



