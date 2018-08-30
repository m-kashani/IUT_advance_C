#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "bmp.h" //ketabkhuneye mahali bmp(BitMap)

struct MyRGB {
	int r; // red color
	int g; // green color
	int b; // blue color
	int RGBQuadReserved;
};

Bmp *inImageObject; //bmp is a class from bmp.h

#define MAX_IMG_WIDTH_HEIGHT 1024 //hadeaksar tool ya arze tasvir
struct MyRGB InImg[MAX_IMG_WIDTH_HEIGHT][MAX_IMG_WIDTH_HEIGHT];// baraye khondane tasvir
struct MyRGB OutImg[MAX_IMG_WIDTH_HEIGHT][MAX_IMG_WIDTH_HEIGHT];
int ImgSizeX=-1, ImgSizeY=-1 , ImgRealSize=-1;//initializing the value

/*
this program should get only two (IO) 
files if you don't get them it will exit
*/
// برنامه ی من بدلیل ندونستن اینکه کدوم عکسو بگیره دائم میاد اینجا
//و این دوتارو چاپ میکنه! چطوری عکس ورودی رو باید براش مشخص کنم ؟
void showCmdArgumentFormatAndExit()
{
    cout << "Only two arguments are needed:\n";
    cout << "<input>.bmp and <output>.bmp\n";
	system("pause");
    exit(0);
}


/*put pixels fom inImage to InImg[y][x] */
void readImage (void)
{
  int x, y;
  struct MyRGB inPix;

  // read resolutions
  ImgSizeX = inImageObject->getWidth();
  ImgSizeY = inImageObject->getHeight();
  if (ImgSizeX<1 || ImgSizeY<1) {
    cout << "Image resolution less than 1 (" << ImgSizeX << 
		"," << ImgSizeY << "). Something wrong." << endl;
    exit(0);
  }

  if (ImgSizeX > MAX_IMG_WIDTH_HEIGHT || ImgSizeY>MAX_IMG_WIDTH_HEIGHT) {
	  cout << "Either width or height of the image exceeds my"
		  << " size limit of " << MAX_IMG_WIDTH_HEIGHT << " x "
		  << MAX_IMG_WIDTH_HEIGHT << ". Quitting..." << endl;
	  exit(0);
  }

  cout << "Resolution: " << ImgSizeX << " x " 
	  << ImgSizeY << endl;

  for (y=0 ; y<ImgSizeY ; y++){
    for (x=0 ; x<ImgSizeX ; x++){
      inImageObject->getPixel(y, x, inPix.r, inPix.g, inPix.b);
	  InImg[y][x] = inPix;
      assert ((inPix.r>=0) && (inPix.r<256) &&
	      (inPix.g>=0) && (inPix.g<256) &&
	      (inPix.b>=0) && (inPix.b<256) );
	}
  }

}

/*
Just writes all the pixels in OutImg to the file.
I assume ImgSizeX and ImgSizeY have already been set.
Also, the object inImageObject must have been initialized
because I copy the header info verbatim in the new output
file.
this function get OutImg file and write pixels out*/
void writePixels (ofstream &outFile)
{
  int x, y ,z;
  struct MyRGB outPix;

  assert (ImgSizeX > 0 && ImgSizeY>0);
  inImageObject->copyHeaderToStream(outFile);
  z=ImgSizeX*ImgSizeY*3;
  z=(ImgRealSize-z)/ImgSizeY;
  for (y=ImgSizeY-1 ; y>=0 ; y--){
	for (x=0 ; x<ImgSizeX ; x++){
		outPix = OutImg[y][x];
		// write output pixel
		char temp3[3];
		temp3[0] = outPix.b;
		temp3[1] = outPix.g;
		temp3[2] = outPix.r;
		outFile.write(temp3, 3);
	}
	for(int k=0;k<z;k++)
		outFile.write("FF", 1);
  }
}

// argc va *argv[] parametr haye vuroodi hastand
void main(int argc, char *argv[]){
  int x, y;
  MyRGB pix;

    if (argc!=3) { 
	// bit-map.exe(1) - input.bmp(2) - output.bmp(3) //
	  showCmdArgumentFormatAndExit();
  }
  cout << argv[1] << " --> " << argv[2] << endl;
  /*
  khate paiin parametr voroodi ro
  baraye neveshtan bitmap baz mikone
  */
  ofstream outFile(argv[2], ios::out | ios::binary);

  if (!outFile) {
    cout << "Cannot create the output file" << argv[2] << endl;
    showCmdArgumentFormatAndExit();
  }
  /*
  khate paiin tasvir ro mikhune
  */
  cout << "Reading the input image " << argv[1] << endl;
  inImageObject = new Bmp (argv[1],&ImgRealSize);
  readImage ();

  // INJAA AMALIYAATE InImg --> OutImg KHOD RAA ANJAAM DAHID
  for (y=0 ; y<ImgSizeY ; y++)
	  for (x=0 ; x<ImgSizeX ; x++) {
		  pix = InImg[y][x];
		  pix.b = pix.r = 0;
		 // int roshanayiKhakestari = (pix.r + pix.g + pix.b) / 3;
		//  pix.r = pix.g = pix.b = roshanayiKhakestari;
		  OutImg[y][x] = pix;
	  }
  // PAYANE GHESMATI KE SHOMAA TAGH-YIR MIDAHID

  writePixels(outFile);

  outFile.close(); //file ro beband
  delete inImageObject;
  system("pause");
}
