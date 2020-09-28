#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int h=40;
	line(0, 440, 639, 440);

	delay(1000);

	// PRINTING LEFT TOWER //

	// First Stage

	int l=-20;
	line( (28+l) , (400+h) , (33+l) , (333+h) );
	line( (86+l) , (400+h) , (80+l) , (333+h) );

	line( (23+l) , (328+h) , (32+l) , (334+h) );
	line( (88+l) , (328+h) , (80+l) , (334+h) );
	line( (83+l) , (323+h) , (75+l) , (334+h) );
	line( (75+l) , (323+h) , (70+l) , (332+h) );
	line( (66+l) , (323+h) , (65+l) , (332+h) );
	line( (57+l) , (323+h) , (57+l) , (332+h) );
	line( (30+l) , (323+h) , (39+l) , (334+h) );
	line( (38+l) , (323+h) , (45+l) , (332+h) );
	line( (48+l) , (323+h) , (51+l) , (332+h) );

	ellipse( (57+l) , (320+h) , 350 , 190 , 34 , 5 );
	ellipse( (57+l) , (327+h) , 350 , 190 , 34 , 5 );
	ellipse( (57+l) , (337+h) , 0 , 180 , 25 ,5 );

	line( (22+l) , (320+h) , (22+l) , (328+h) );
	line( (91+l) , (320+h) , (91+l) , (327+h) );

	setfillstyle( 6 , 15);
	floodfill( (60+l) , (320+h) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l) , (320+h+15) ,15);

	delay(1000);


	// Second Stage on top of First Stage

	line( (35+l) , (315+h) , (38+l) , (242+h) );
	line( (80+l) , (315+h) , (75+l) , (242+h) );

	int t=-93;
	line( (23+4+l) , (328+t+3+h) , (32+5+l) , (334+t+h) );
	line( (88+l) , (328+t+2+h) , (76+l) , (334+t+h) );
	line( (78+l) , (323+t+3+h) , (71+l) , (332+t+h) );
	line( (66+l) , (323+t+2+h) , (65+l) , (332+t+h) );
	line( (57+l) , (323+t+2+h) , (57+l) , (332+t-2+h) );
	line( (35+l) , (323+t+3+h) , (45-3+l) , (332+t+h) );
	line( (48+l) , (323+t+2+h) , (51+l) , (332+t-2+h) );

	ellipse( (57+l) , (320+t+3+h) , 360 , 190 , 30 , 5 );
	ellipse( (57+l) , (327+t+3+h) , 360 , 190 , 30 , 5 );
	ellipse( (57+l) , (337+t-1+h) , 0 , 180 , 18 , 5 );

	line( (26+l) , (320+t+3+h) , (26+l) , (328+t+2+h) );
	line( (88+l) , (320+t+3+h) , (88+l) , (327+t+3+h) );

	setfillstyle( 6 , 15 );
	floodfill( (60+l) , (320+h+t) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l) , (320+h-35) , 15 );

	delay(1000);

	// Third Stage on top of Second Stage

	line( (38+l) , (225+h) , (41+l) , (152+h) );
	line( (75+l) , (225+h) , (72+l) , (152+h) );

	t=-182;

	line( (32+l) , (328+t+4+h) , (32+7+l) , (334+t+h) );
	line( (80+l) , (328+t+4+h) , (73+l) , (334+t+h) );
	line( (76+l) , (323+t+5+h) , (71+l) , (332+t+h) );
	line( (66+l) , (323+t+4+h) , (65+l) , (332+t+h) );
	line( (57+l) , (323+t+4+h) , (57+l) , (332+t-2+h) );
	line( (39+l) , (323+t+6+h) , (45+l) , (332+t+1+h) );
	line( (48+l) , (323+t+4+h) , (51+l) , (332+t+h) );

	ellipse( (57+l) , (320+t+6+h) , 360 , 190 , 24 , 5 );
	ellipse( (57+l) , (327+t+4+h) , 360 , 190 , 24 , 5 );
	ellipse( (57+l) , (337+t-1+h) , 0 , 170 , 16 , 5 );

	line( (32+l) , (320+t+6+h) , (32+l) , (328+t+3+h) );
	line( (81+l) , (320+t+6+h) , (81+l) , (327+t+3+h) );

	setfillstyle( 6 , 15 );
	floodfill( (60+l) , (322+h+t) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l) , (322+h+t+30) , (15) );

	delay(1000);

	// Fourth Stage with dome on top of Third Stage

	ellipse( (51+l) , (132+h) , 340 , 216 , 4 , 15 );
	ellipse( (62+l) , (131+h) , 327 , 216 , 4 , 15 );
	ellipse( (72+l) , (132+h) , 327 , 216 , 2 , 15 );
	ellipse( (42+l) , (132+h) , 327 , 216 , 2 , 15 );
	ellipse( (57+l) , (107+h) , 0 , 170 , 16 , 5 );

	line( (40+l) , (107+h) , (40+l) , (140+h) );
	line( (75+l) , (107+h) , (75+l) , (140+h) );
	line( (34+l) , (107+h) , (40+l) , (107+h) );
	line( (75+l) , (107+h) , (81+l) , (107+h) );
	line( (34+l) , (107+h) , (28+l) , (102+h) );
	line( (81+l) , (107+h) , (87+l) , (102+h) );
	line( (28+l) , (102+h) , (34+l) , (98+h) );
	line( (87+l) , (102+h) , (81+l) , (98+h) );
	line( (34+l) , (98+h) , (58+l) , (95+h) );
	line( (58+l) , (95+h) , (81+l) , (98+h) );

	ellipse( (65+l) , (92+h) , 104 , 190 , 30 , 30 );
	ellipse( (50+l) , (92+h) , 350 , 76 , 30 , 30 );

	line( (58+l) , (61+h) , (58+l) , (63+h) );
	circle( (58+l) , (58+h) , 3 );
	line( (58+l) , (55+h) , (58+l) , (53+h) );
	circle( (58+l) , (50+h) , 2 );
	line( (58+l) , (48+h) , (58+l) , (47+h) );
	circle( (58+l) , (45+h) , 1 );
	line( (58+l) , (44+h) , (58+l) , (41+h) );

	setfillstyle( 6 , 15 );
	floodfill( (60+l-2) , (322+h+t-60) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l-2) , (322+h+t-30) , 15 );

	delay(1000);

	// END OF LEFT TOWER //

	// PRINTING RIGHT TOWER //

	//First Stage

	l=547;

	line( (28+l) , (400+h) , (33+l) , (333+h) );
	line( (86+l) , (400+h) , (80+l) , (333+h) );
	line( (23+l) , (328+h) , (32+l) , (334+h) );
	line( (88+l) , (328+h) , (80+l) , (334+h) );
	line( (83+l) , (323+h) , (75+l) , (334+h) );
	line( (75+l) , (323+h) , (70+l) , (332+h) );
	line( (66+l) , (323+h) , (65+l) , (332+h) );
	line( (57+l) , (323+h) , (57+l) , (332+h) );
	line( (30+l) , (323+h) , (39+l) , (334+h) );
	line( (38+l) , (323+h) , (45+l) , (332+h) );
	line( (48+l) , (323+h) , (51+l) , (332+h) );

	ellipse( (57+l) , (320+h) , 350 , 190 , 34 , 5 );
	ellipse( (57+l) , (327+h) , 350 , 190 , 34 , 5 );
	ellipse( (57+l) , (337+h) , 0 , 180 , 25 , 5 );

	line( (22+l) , (320+h) , (22+l) , (328+h) );
	line( (91+l) , (320+h) , (91+l) , (327+h) );

	setfillstyle( 6 , 15 );
	floodfill( (60+l) , (320+h) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l) , (320+h+15) , 15 );

	delay(1000);

	// Second Stage on top of First Stage

	line( (35+l) , (315+h) , (38+l) , (242+h) );
	line( (80+l) , (315+h) , (75+l) , (242+h) );

	t=-93;

	line( (23+4+l) , (328+t+3+h) , (32+5+l) , (334+t+h) );
	line( (88+l) , (328+t+2+h) , (76+l) , (334+t+h) );
	line( (78+l) , (323+t+3+h) , (71+l) , (332+t+h) );
	line( (66+l) , (323+t+2+h) , (65+l) , (332+t+h) );
	line( (57+l) , (323+t+2+h) , (57+l) , (332+t-2+h) );
	line( (35+l) , (323+t+3+h) , (45-3+l) , (332+t+h) );
	line( (48+l) , (323+t+2+h) , (51+l) , (332+t-2+h) );

	ellipse( (57+l) , (320+t+3+h) , 360 , 190 , 30 , 5 );
	ellipse( (57+l) , (327+t+3+h) , 360 , 190 , 30 , 5 );
	ellipse( (57+l) , (337+t-1+h) , 0 , 180 , 18 , 5 );

	line( (26+l) , (320+t+3+h) , (26+l) , (328+t+2+h) );
	line( (88+l) , (320+t+3+h ), (88+l) , (327+t+3+h) );

	setfillstyle( 6 , 15 );
	floodfill( (60+l) , (320+h+t) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l) , (320+h-35) , 15 );

	delay(1000);

	// Third Stage on top of Second Stage

	line( (38+l) , (225+h) , (41+l) , (152+h) );
	line( (75+l) , (225+h) , (72+l) , (152+h) );

	t=-182;

	line( (32+l) , (328+t+4+h) , (32+7+l) , (334+t+h) );
	line( (80+l) , (328+t+4+h) , (73+l) , (334+t+h) );                       // slant
	line( (76+l) , (323+t+5+h) , (71+l) , (332+t+h) );
	line( (66+l) , (323+t+4+h) , (65+l) , (332+t+h) );                       // slant
	line( (57+l) , (323+t+4+h) , (57+l) , (332+t-2+h) );
	line( (39+l) , (323+t+6+h) , (45+l) , (332+t+1+h) );
	line( (48+l) , (323+t+4+h) , (51+l) , (332+t+h) );

	ellipse( (57+l) , (320+t+6+h) , 360 , 190 , 24 , 5 );
	ellipse( (57+l) , (327+t+4+h) , 360 , 190 , 24 , 5 );
	ellipse( (57+l) , (337+t-1+h) , 0 , 170 , 16 , 5 );

	line( (32+l) , (320+t+6+h) , (32+l) , (328+t+3+h) );
	line( (81+l) , (320+t+6+h) , (81+l) , (327+t+3+h) );

	setfillstyle( 6 , 15 );
	floodfill( (60+l) , (322+h+t) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l) , (322+h+t+30) , 15 );

	delay(1000);

	// Fourth Stage with dome on top of Third Stage

	ellipse( (51+l) , (132+h) , 340 , 216 , 4 , 15 );
	ellipse( (62+l) , (131+h) , 327 , 216 , 4 , 15 );
	ellipse( (72+l) , (132+h) , 327 , 216 , 2 , 15 );
	ellipse( (42+l) , (132+h) , 327 , 216 , 2 , 15 );
	ellipse( (57+l) , (107+h) , 0 , 170 , 16 , 5 );

	line( (40+l) , (107+h) , (40+l) , (140+h) );
	line( (75+l) , (107+h) , (75+l) , (140+h) );
	line( (34+l) , (107+h) , (40+l) , (107+h) );
	line( (75+l) , (107+h) , (81+l) , (107+h) );
	line( (34+l) , (107+h) , (28+l) , (102+h) );
	line( (81+l) , (107+h) , (87+l) , (102+h) );
	line( (28+l) , (102+h) , (34+l) , (98+h) );
	line( (87+l) , (102+h) , (81+l) , (98+h) );
	line( (34+l) , (98+h) , (58+l) , (95+h) );
	line( (58+l) , (95+h) , (81+l) , (98+h) );

	ellipse( (65+l) , (92+h) , 104 , 190 , 30 , 30 );
	ellipse( (50+l) , (92+h) , 350 , 76 , 30 , 30 );

	line( (58+l) , (61+h) , (58+l) , (63+h) );
	circle( (58+l) , (58+h) , 3 );
	line( (58+l) , (55+h) , (58+l) , (53+h) );
	circle( (58+l) , (50+h) , 2 );
	line( (58+l) , (48+h) , (58+l) , (47+h) );
	circle( (58+l) , (45+h) , 1 );
	line( (58+l) , (44+h) , (58+l) , (41+h) );

	setfillstyle( 6 , 15 );
	floodfill( (60+l-2) , (322+h+t-60) , 15 );
	setfillstyle( 10 , 15 );
	floodfill( (60+l-2) , (322+h+t-30) , 15 );

	delay(1000);

	// END OF RIGHT TOWER //

	// PRINTING CENTRAL DOOR //

	rectangle( 275 , 290 , 365 , 440 );
	rectangle( 268 , 283 , 372 , 440 );

	setfillstyle( 1 , 15 );
	floodfill( 274 , 294 , 15 );

	line( 280 , 440 , 280 , 350 );

	ellipse( 315 , 349 , 130 , 180 , 35 , 40 );
	ellipse( 275 , 280 , 290 , 326 , 53 , 40 );

	line( 360 , 440 , 360 , 350 );

	ellipse( 325 , 349 , 360 , 50 , 35 , 40 );
	ellipse( 361 , 280 , 216 , 255 , 53 , 40 );

	setfillstyle( 9 , 7 );
	floodfill( 277 , 386 , 15 );
	putpixel( 277 , 386 , 14 );

	line( 280 , 360 , 359 , 360 );
	line( 280 , 364 , 359 , 364 );
	setfillstyle( 1 , 15 );
	floodfill( 281 , 362 , 15 );

	rectangle( 299 , 370 , 341 , 440 );
	rectangle( 296 , 367 , 344 , 440 );

	setfillstyle( 1 , 15 );
	floodfill( 298 , 369 , 15 );

	rectangle( 296 , 378 , 344 , 380 );
	floodfill( 301 , 379 , 15 );

	line( 302 , 405 , 302 , 440 );
	line( 338 , 405 , 338 , 440 );

	ellipse( 327 , 405 , 108 , 180 , 25 , 20 );
	ellipse( 313 , 405 , 360 , 74 , 25 , 20 );

	setfillstyle( 7 , 15 );

	line( 329 , 390 , 329 , 440 );
	line( 310 , 391 , 310 , 440 );
	line( 311 , 402 , 329 , 402 );
	line( 311 , 422 , 329 , 422 );
	line( 302 , 412 , 310 , 412 );
	line( 329 , 412 , 338 , 412 );
	line( 302 , 428 , 310 , 428 );
	line( 329 , 428 , 338 , 428 );

	int p=-60;

	line( 302 , (405+p) , 302 , (440+p-20) );
	line( 338 , (405+p) , 338 , (440+p-20) );

	ellipse( 327 , (405+p) , 108 , 180 , 25 , 20 );
	ellipse( 313 , (405+p) , 360 , 74 , 25 , 20 );

	setfillstyle( 7 , 15 );
	floodfill( 311 , 406 , 15 );

	line( 329 , (390+p) , 329 , (440+p-20) );
	line( 310 , (391+p) , 310 , (440+p-20) );
	line( 311 , (402+p) , 329 , (402+p) );
	line( 311 , (422+p-7) , 329 , (422+p-7) );
	line( 302 , (412+p) , 310 , (412+p) );
	line( 329 , (412+p) , 338 , (412+p) );

	delay(1000);

	// END OF CENTRAL DOOR //

	// PRINTING DOME ABOVE CENTRAL DOOR //
	// PRINTING THE CARVINGS AROUND CENTRAL DOOR //

	rectangle( 245 , 260 , 400 , 440 );
	rectangle( 230 , 245 , 415 , 440 );
	rectangle( 230 , 425 , 275 , 440 );

	setfillstyle( 1 , 15 );
	floodfill( 231 , 426 , 15 );
	floodfill( 249 , 426 , 15 );

	rectangle( 365 , 425 , 415 , 440 );

	floodfill( 391 , 426 , 15 );
	floodfill( 408 , 426 , 15 );

	line( 415 , 290 , 415 , 440 );
	line( 420 , 245 , 420 , 440 );
	line( 415 , 240 , 415 , 205 );
	line( 420 , 240 , 420 , 205 );
	line( 225 , 245 , 225 , 440 );
	line( 230 , 250 , 230 , 440 );
	line( 225 , 240 , 225 , 205 );
	line( 230 , 240 , 230 , 205 );
	line( 222 , 240 , 425 , 240 );
	line( 222 , 245 , 425 , 245 );

	ellipse( 222 , 242.5 , 90 , 270 , 2.5 , 2.5 );
	ellipse( 425 , 242.5 , 270 , 90 , 2.5 , 2.5 );

	rectangle( 231 , 230 , 414 , 239 );

	ellipse( 227 , 206 , 0 , 180 , 9 , 1 );
	ellipse( 227 , 204 , 0 , 180 , 9 , 1 );
	ellipse( 227 , 203 , 0 , 180 , 6 , 7 );

	line( 227 , 195 , 227 , 192 );

	int r=190;

	ellipse( (227+r) , 206 , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , 204 , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , 203 , 0 , 180 , 6 , 7 );

	line( (227+r) , 195 , (227+r) , 192 );

	ellipse( 315 , 170 , 140 , 210 , 105 , 100 );
	ellipse( 330 , 170 , 330 , 40 , 105 , 100 );
	ellipse( 292 , 167 , 105 , 140 , 75 , 95 );
	ellipse( 353 , 167 , 40 , 75 , 75 , 95 );
	ellipse( 323 , 78 , 350 , 190 , 60 , 8 );
	ellipse( 323 , 77 , 350 , 190 , 60 , 8 );
	ellipse( 240 , 24 , 321 , 358 , 78 , 71 );
	ellipse( 192 , 40 , 342 , 7 , 128 , 100 );

	ellipse( 448 , 30 , 180 , 203 , 128 , 100 );
	ellipse( 443 , 5 , 194 , 220 , 128 , 100 );
	ellipse( 438 , -9 , 203 , 234 , 128 , 100 );
	ellipse( 198 , -6 , 310 , 340 , 128 , 100 );
	ellipse( 319 , 30 , 0 , 360 , 7 , 2 );

	floodfill( 320 , 29 , 15 );
	circle( 319 , 24 , 3 );

	line( 319 , 20 , 319 , 18 );

	circle( 319 , 14 , 4 );

	line( 319 , 9 , 319 , 0 );

	circle( 319 , 2 , 1 );

	line( 316 , 6 , 322 , 6 );
	line( 316 , 6 , 314 , 4 );
	line( 322 , 6 , 324 , 4 );

	ellipse( 321 , 258 , 48 , 130 , 140 , 50 );
	ellipse( 321 , 255 , 48 , 130 , 140 , 50 );
	ellipse( 321 , 241 , 48 , 130 , 140 , 50 );
	ellipse( 321 , 238 , 48 , 130 , 140 , 50 );

	delay(1000);

	setfillstyle( 10 , 15 );
	floodfill( 322 , 160 , 15 );

	setfillstyle( 6 , 15 );
	floodfill( 322 , 193 , 15 );

	delay(1000);

	// END OF DOME ABOVE THE CENTRAL DOOR //
	// END OF CARVINGS AROUND THE DOOR //

	// PRINTING LEFT SIDE OF CENTRAL DOOR //

	rectangle( 150 , 283 , 225 , 294 );

	line( 150 , 298 , 225 , 298 );
	line( 150 , 240 , 150 , 440 );
	line( 146 , 240 , 146 , 440 );
	line( 150 , 299 , 150 , 440 );
	line( 146 , 299 , 146 , 440 );

	r=-80;
	int n=34;

	ellipse( (227+r) , (206+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (204+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (203+n) , 0 , 180 , 6 , 7 );

	line( (227+r) , (195+n) , (227+r) , (192+n) );

	l=128;
	h=150;

	ellipse( (51+l) , (132+h-7) , 340 , 216 , 4 , 15 );
	ellipse( (62+l) , (131+h-7) , 327 , 216 , 4 , 15 );
	ellipse( (72+l) , (132+h-7) , 327 , 216 , 2 , 15 );
	ellipse( (42+l) , (132+h-7) , 327 , 216 , 2 , 15 );
	ellipse( (57+l) , (107+h) , 0 , 170 , 16 , 5 );

	line( (40+l) , (107+h) , (40+l) , (140+h-7) );
	line( (75+l) , (107+h) , (75+l) , (140+h-7) );
	line( (34+l) , (107+h) , (40+l) , (107+h) );
	line( (75+l) , (107+h) , (81+l) , (107+h) );
	line( (34+l) , (107+h) , (28+l) , (102+h) );
	line( (81+l) , (107+h) , (87+l) , (102+h) );
	line( (28+l) , (102+h) , (34+l) , (98+h) );
	line( (87+l) , (102+h) , (81+l) , (98+h) );
	line( (34+l) , (98+h) , (58+l) , (95+h) );
	line( (58+l) , (95+h) , (81+l) , (98+h) );

	ellipse( (65+l) , (92+h) , 104 , 190 , 30 , 30 );
	ellipse( (50+l) , (92+h) , 350 , 76 , 30 , 30 );

	line( (58+l) , (61+h) , (58+l) , (63+h) );

	circle( (58+l) , (58+h) , 3 );

	line( (58+l) , (55+h) , (58+l) , (53+h) );

	circle( (58+l) , (50+h) , 2 );

	line( (58+l) , (48+h), (58+l) , (47+h) );

	circle( (58+l) , (45+h) , 1 );

	line( (58+l) , (44+h) , (58+l) , (41+h) );
	line( 95 , 255 , 95 , 440 );
	line( 91 , 255 , 91 , 440 );

	r=-134;
	n=49;

	ellipse( (227+r) , (206+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (204+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (203+n) , 0 , 180 , 6 , 7 );

	line( (227+r) , (195+n) , (227+r) , (192+n) );
	line( 146 , 294 , 97 , 302 );
	line( 146 , 298 , 97 , 306 );
	line( 146 , 283 , 97 , 291 );

	delay(1000);

	// END OF LEFT SIDE OF CENTRAL DOOR //

	// FILLING COLOR IN LEFT SIDE //

	rectangle( 155 , 302 , 220 , 364 );
	rectangle( 155 , 372 , 220 , 439 );

	int q=-133;
	int d=-2;

	line( (302+q-5) , (405+d) , (302+q-5) , (440+d) );
	line( (338+q+5) , (405+d) , (338+q+5) , (440+d) );

	ellipse( (327+q+5) , (405+d) , 108 , 180 , 35 , 30 );
	ellipse( (313+q-5) , (406+d) , 360 , 74 , 35 , 30 );

	d=-77;

	line( (302+q-5) , (405+d) , (302+q-5) , (440+d) );
	line( (338+q+5) , (405+d) , (338+q+5) , (440+d) );

	ellipse( (327+q) , (405+d) , 105 , 180 , 30 , 25 );
	ellipse( (313+q) , (405+d) , 360 , 80 , 30 , 25 );

	line( 141 , 305 , 141 , 360 );
	line( 101 , 310 , 101 , 365 );
	line( 141 , 305 , 101 , 310 );
	line( 141 , 360 , 101 , 365 );

	int x=70;

	line( 141 , (305+x) , 141 , 440 );
	line( 101 , (310+x) , 101 , 440 );
	line( 141 , (305+x) , 101 ,(310+x) );

	q=-200;

	line( (302+q+4) , (405+d) , (302+q+4) , (440+d) );
	line( (338+q-1) , (405+d) , (338+q-1) , (440+d-2) );

	ellipse( (327+q) , (405+d) , 105 , 180 , 20 , 15 );
	ellipse( (313+q+4) , (405+d) , 360 , 80 , 20 , 15 );

	d=1;

	line( (302+q+4) , (405+d) , (302+q+4) , (440+d-2) );
	line( (338+q-1) , (405+d) , (338+q-1) , (440+d-2) );

	ellipse( (327+q) , (405+d) , 105 , 180 , 20 , 15 );
	ellipse( (313+q+4) , (405+d) , 360 , 80 , 20 , 15 );

	rectangle( 178 , 415 , 197 , 439 );
	setfillstyle( 7 , 15 );
	floodfill( 179 , 416 , 15 );

	rectangle( 178 , 340 , 197 , 364 );
	setfillstyle( 7 , 15 );
	floodfill( 179 , 341 , 15 );

	line( 127 , 417 , 127 , 440 );
	line( 116 , 420 , 116 , 440 );
	line( 116 , 420 , 127 , 417 );
	line( 113 , 440 , 130 , 440 );

	floodfill( 117 , 423 , 15 );

	int a=-76;

	line( 127 , (417+a) , 127 , (440+a-3) );
	line( 116 , (420+a) , 116 , (440+a) );
	line( 116 , (420+a) , 127 , (417+a) );

	floodfill( 117 , (423+a) , 15 );

	line( 10 , (400+h) , 615 , (400+h) );

	delay(1000);

	// END OF PRINTING LEFT SIDE //

	// PRINTING THE RIGHT SIDE //
	// FILLING COLOR IN THE RIGHT SIDE //

	int e=270;

	rectangle( (150+e) , 283 , (226+e) , 294 );

	line( (146+e+4) , 294 , (225+e) , 294 );
	line( (146+e+4) , 298 , (225+e) , 298 );
	line( (150+e+80) , 240 , (150+e+80) , 440 );
	line( (146+e+80) , 240 , (146+e+80) , 440 );
	line( (150+e+80) , 299 , (150+e+80) , 440 );
	line( (146+e+80) , 299 , (146+e+80) , 440 );

	l=400;
	h=149;

	ellipse( (51+l) , (132+h-7) , 340 , 216 , 4 , 15 );
	ellipse( (62+l) , (131+h-7) , 327 , 216 , 4 , 15 );
	ellipse( (72+l) , (132+h-7) , 327 , 216 , 2 , 15 );
	ellipse( (42+l) , (132+h-7) , 327 , 216 , 2 , 15 );
	ellipse( (57+l) , (107+h) , 0 , 170 , 16 , 5 );

	line( (40+l) , (107+h) , (40+l) , (140+h-7) );
	line( (75+l) , (107+h) , (75+l) , (140+h-7) );
	line( (34+l) , (107+h) , (40+l) , (107+h) );
	line( (75+l) , (107+h) , (81+l) , (107+h) );
	line( (34+l) , (107+h) , (28+l) , (102+h) );
	line( (81+l) , (107+h) , (87+l) , (102+h) );
	line( (28+l) , (102+h) , (34+l) , (98+h) );
	line( (87+l) , (102+h) , (81+l) , (98+h) );
	line( (34+l) , (98+h) , (58+l) , (95+h) );
	line( (58+l) , (95+h) , (81+l) , (98+h) );

	ellipse( (65+l) , (92+h) , 104 , 190 , 30 , 30 );
	ellipse( (50+l) , (92+h) , 350 , 76 , 30 , 30 );

	line( (58+l) , (61+h) , (58+l) , (63+h) );

	circle( (58+l) , (58+h) , 3 );

	line( (58+l) , (55+h) , (58+l) , (53+h) );

	circle( (58+l) , (50+h) , 2 );

	line( (58+l) , (48+h) , (58+l) , (47+h) );

	circle( (58+l) , (45+h) , 1 );
	line( (58+l) , (44+h) , (58+l) , (41+h) );

	r=270;
	n=n-15;

	ellipse( (227+r) , (206+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (204+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (203+n) , 0 , 180 , 6 , 7 );

	line( (227+r) , (195+n) , (227+r) , (192+n) );
	line( (146+e+135) , 302 , (97+e+135) , 294 );
	line( (146+e+135) , 306 , (97+e+135) , 298 );
	line( (146+e+135) , 291 , (97+e+135) , 283 );
	line( (95+e+190) , 255 , (95+e+190) , 440 );
	line( (91+e+190) , 255 , (91+e+190) , 440 );

	r=325;
	n+=15;

	ellipse( (227+r) , (206+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (204+n) , 0 , 180 , 9 , 1 );
	ellipse( (227+r) , (203+n) , 0 , 180 , 6 , 7 );

	line( (227+r) , (195+n) , (227+r) , (192+n) );

	rectangle( (155+e) , 302 , (220+e) , 364 );
	rectangle( (155+e) , 372 , (220+e) , 439 );

	delay(1000);

	q=140;
	d-=1;

	line( (302+q-5) , (405+d) , (302+q-5) , (440+d) );
	line( (338+q+5) , (405+d) , (338+q+5) , (440+d) );

	ellipse( (327+q+5) , (405+d) , 108 , 180 , 35 , 30 );
	ellipse( (313+q-5) , (406+d) , 360 , 74 , 35 , 30 );

	d=-77;

	line( (302+q-5) , (405+d) , (302+q-5) , (440+d) );
	line( (338+q+5) , (405+d) , (338+q+5) , (440+d) );

	ellipse( (327+q) , (405+d) , 105 , 180 , 30 , 25 );
	ellipse( (313+q) , (405+d) , 360 , 80 , 30 , 25 );


	e=e-15;

	line( (141+e+150) , 310 , (141+e+150) , 365 );
	line( (101+e+150) , 305 , (101+e+150) , 360 );
	line( (101+e+150) , 305 , (141+e+150) , 310 );
	line(101+e+150,360,141+e+150,365);

	int v=75;

	line( (141+e+150) , (310+v-5) , (141+e+150) , 440 );
	line( (101+e+150) , (305+v-5) , (101+e+150) , 440 );
	line( (101+e+150) , (305+v-5) , (141+e+150) , (310+v-5) );

	e=e+18;

	rectangle( (178+e) , 415 , (197+e) , 439 );

	setfillstyle( 7 , 15 );
	floodfill( (179+e) , 416 , 15 );

	int f=-75;

	rectangle( (178+e) , (415+f) , (197+e) , (439+f) );

	setfillstyle( 7 , 15 );
	floodfill( (179+e) , (416+f) , 15 );

	e+=130;

	line( (127+e) , (440+a-2) , (127+e) , (417+a+2) );
	line( (116+e) , (440+a-2) , (116+e) , (420+a-2) );
	line( (116+e) , (417+a) , (127+e) , (420+a) );

	floodfill( (117+e) , (423+a) , 15 );

	a=1;

	line( (127+e) , (440+a-2) , (127+e) , (417+a+2) );
	line( (116+e) , (440+a-2) , (116+e) , (420+a-2) );
	line( (116+e) , (417+a) , (127+e) , (420+a) );
	line( (116+e) , 440 , (127+e) , 440 );

	floodfill( (117+e) , (423+a) , 15 );

	q=204;

	line( (302+q+4) , (405+d) , (302+q+4) , (440+d-2) );
	line( (338+q-1) , (405+d) , (338+q-1) , (440+d+2) );
	ellipse( (327+q) , (405+d) , 105 , 180 , 20 , 15 );
	ellipse( (313+q+4) , (405+d) , 360 , 80 , 20 , 15 );
	q=204;

	d=0;
	line( (302+q+4) , (405+d) , (302+q+4) , (440+d-1) );
	line( (338+q-1) , (405+d) , (338+q-1) , (440+d) );
	ellipse( (327+q) , (405+d) , 105 , 180 , 20 , 15 );
	ellipse( (313+q+4) , (405+d) , 360 , 80 , 20 , 15 );
	line( (302+q+4) , 440 , (302+q+4) , 440 );

	delay(1000);

	setfillstyle( 9 , 15 );
	floodfill( 110 , 294 , 15 );
	floodfill( 210 , 290 , 15 );
	floodfill( 430 , 290 , 15 );
	floodfill( 520 , 290 , 15 );

	setfillstyle( 6 , 15 );
	floodfill( 93 , 394 , 15 );
	floodfill( 148 , 394 , 15 );
	floodfill( 227 , 394 , 15 );
	floodfill( 417 , 394 , 15 );
	floodfill( 498 , 394 , 15 );
	floodfill( 553 , 394 , 15 );


	setfillstyle( 9 , 15 );
	floodfill( 185 , 224 , 15 );
	floodfill( 465 , 224 ,15 );

	delay(1000);

	// END OF RIGHT SIDE OF CENTRAL DOOR //

	// PRINTING TEXT TAJ MAHAL //

	settextstyle( 10 , 0 , 0 );
	outtextxy( 100 , 30 , "TAJ" );

	settextstyle( 10 , 0 , 0 );
	outtextxy( 425 , 30 , "MAHAL" );

	getch();
	cleardevice();

	// PRINTING GROUP INFORMATION //

	rectangle( 0 , 0 , getmaxx() , 130 );
	rectangle( 0 , 130 , getmaxx() , 350 );

	settextstyle( 8 , 0 , 5 );

	outtextxy( 90 , 50 , "GROUP NUMBER 01" );

	delay(1000);

	settextstyle( 8 , 0 , 1 );

	outtextxy( (getmaxx()/2 - 200) , (getmaxy()/2 - 100) , "ROLL NUMBER" );
	outtextxy( getmaxx()/2  , (getmaxy()/2 - 100) , "NAME OF STUDENT" );

	delay(1000);

	outtextxy( (getmaxx()/2 - 150) , (getmaxy()/2 - 70) , "01" );
	outtextxy( (getmaxx()/2) , (getmaxy()/2 - 70), "YASH KORLA");

	delay(1000);

	outtextxy( (getmaxx()/2 - 150) , (getmaxy()/2 - 40) , "02" );
	outtextxy( (getmaxx()/2) , (getmaxy()/2 - 40), "RAJ MOTTA");

	delay(1000);

	outtextxy( (getmaxx()/2 - 150) , (getmaxy()/2 - 10) , "03" );
	outtextxy( (getmaxx()/2) , (getmaxy()/2 - 10), "SAYED SIDDIQUI");

	delay(1000);

	outtextxy( (getmaxx()/2 - 150) , (getmaxy()/2 + 20) , "04" );
	outtextxy( (getmaxx()/2) , (getmaxy()/2 + 20), "SANMIT GANGURDE");

	// END OF PRINTING GROUP INFORMATION //

	getch();
	return 0;
}