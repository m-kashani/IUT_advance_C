// Bmp.cpp
// NKU CSC 480/580 Spring 2003 - Kirby
// ----------------------------------------------------------------------
// A simple encapsulation of a 24-bit .bmp file.
// ----------------------------------------------------------------------



#include "Bmp.h"



Bmp::Bmp( const string& filename,int *pp ) throw ( runtime_error )
//
// Constructs a Bmp objects from a 24-bit uncompressed Windows BMP file.
// See Petzold & Yao, PROGRAMMING WINDOWS 95, pp.176-178 for file format description.
{
    // Open the .BMP file for input
    //
    ifstream infile( filename.c_str(), ios::in | ios::binary ) ;
    if ( ! infile )
        throw ( runtime_error( "Cannot open bitmap file " + filename ) ) ;

    // Read the first header information
    //
    infile.read( (char*) &_bmfh, sizeof( BITMAPFILEHEADER ) ) ;
    unsigned char* pc= (unsigned char*) &_bmfh ;
    if ( ! ( pc[0]=='B' && pc[1]=='M' ) )
        throw ( runtime_error( "File " + filename + " is not a BMP file" ) ) ;
    infile.read( (char*) &_bmih, sizeof( BITMAPINFOHEADER ) ) ;
   

   // Check to see if this kind of BMP file can be handled by this class
   //
   if ( sizeof( BITMAPINFOHEADER ) + sizeof( BITMAPFILEHEADER ) != _bmfh.bfOffBits ) 
        throw ( runtime_error( "BMP file " + filename + " has unknown extra header" ) ) ;
   if ( _bmih.biCompression != 0 )
        throw ( runtime_error( "BMP file " + filename + " is compressed and cannot be processed" ) ) ;
   if ( _bmih.biBitCount != 24 )
        throw ( runtime_error( "BMP file " + filename + " is not a 24-bit color bitmap" ) ) ;

    // Read the image bytes into memory
    //
    int _imageSize=  _bmfh.bfSize - _bmfh.bfOffBits ;
	*pp=_imageSize;
    int _pixelCount= _bmih.biWidth * _bmih.biHeight ;
    _image= new unsigned char[ _imageSize ] ; 
    if ( ! _image )
        throw ( runtime_error( "Insufficient memory to store BMP file " + filename ) ) ;
    infile.read( (char*) _image, _imageSize ) ;
    infile.close() ;
}



Bmp::~Bmp()
//
// Destroy the current Bmp object
{
    delete [] _image ;
}


void Bmp::copyHeaderToStream(ofstream &outStream )
{
    outStream.write( (char*) &_bmfh, sizeof( BITMAPFILEHEADER ) ) ;
    outStream.write( (char*) &_bmih, sizeof( BITMAPINFOHEADER ) ) ;
}


void Bmp::getPixel( int row, int column, int& red /*out*/, int& green /*out*/, int& blue /*out*/ ) const throw ( out_of_range )
//
// Return RGB values of pixel in given row and column
{
    if ( row < 0 || row >= _bmih.biHeight || column < 0 || column >= _bmih.biWidth )
        throw ( out_of_range( "Request to get pixel out of range" ) ) ;
    
    unsigned char* ppix= _image +  _rcToOffset( row, column ) ;
    red=   (int) ppix[2] ;
    green= (int) ppix[1] ;
    blue=  (int) ppix[0] ;
}



int Bmp::_rcToOffset( int row, int column ) const throw ()
//
// Offset of start of RGB value for pixel at given row and column, from start of image bytes.
{
    int displayedBytesPerRow= _bmih.biWidth * 3 ;
    int shortfall= displayedBytesPerRow % 4 ;
    int pad= ( shortfall > 0 ) ? 4 - shortfall : 0 ;
    int rowLength= displayedBytesPerRow + pad ;
    int rowsDown= _bmih.biHeight - row - 1 ;
    return rowsDown * rowLength + 3*column ;
}


    
/*

HEADERS referred to above-- from WinGDI.h  ( # < Windows.h ).


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



Example header contents for a 182x134 BMP file:

    {19778, 73986, 0, 0, 54 } 
    {40, 134, 183, 1, 24, 0, 73932, 4724, 4724, 0, 0 }
*/