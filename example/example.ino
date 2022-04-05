/* The library is developed by Yusuf Abdulrahman
The library is used to find absolute value of integer

For further enquiries or upgrade on the library, pls contact me: yusufabdulrahman05@gmail.com, +2347039886387
*/

#include<iabs.h> // Calling the Function of blkwd


void setup() {

   Serial.begin(9600);
}

void loop() {

 int a = -500;

 Serial.println(iabs(a));

 delay(1000);
 

}
