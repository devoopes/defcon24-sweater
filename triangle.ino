#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN 1
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}
void loop() {
//  theaterChase(strip.Color(255, 255, 204), 50); // yellow1
//  theaterChase(strip.Color(255, 255, 153), 50); // yellow2
//  theaterChase(strip.Color(255, 255, 102), 50); // yellow3
  theaterChase(strip.Color(255, 255, 51), 50); // yellow4
  theaterChase(strip.Color(255, 255, 0), 50); // yellow5
  theaterChase(strip.Color(0, 0, 127), 50); // Blue
}
//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<50; j++) {  //do 50 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//
//                              @B@B@
//                              @@B@B
//                              @B@B@
//                              B@B@@
//                              @@@B@
//                              B@B@B
//                              @@@@@
//                              B@B@@
//                              @B@B@
//                              B@@@B
//                              @@@B@
//                              B@@@B
//                              @B@B@
//                              B@B@B
//                              @@@B@
//                            B@B@B@B@B,
//                            MqJ7i7YPM.
//
//                               7@:
//                              r@B@:
//                             r@@@B@:
//                            ;@B@B@B@:
//                           r@B@B@B@@@:
//                          ;@@@B@B@B@B@:
//                         i@B@@@B@B@B@B@:
//                        i@B@B@B@B@B@@@B@:
//                       i@B@B@B@@@B@B@B@B@:
//                      i@B@B@B@B@B@B@@@B@B@:
//                     i@B@B@B@u. , .u@B@@@B@:
//                    i@B@B@Br   .@    7@@B@@@:
//                   i@B@B@u     u@.     0@B@B@:
//                  i@@@B@       XB:      .@B@B@:
//                 :@B@B@M       F@:       B@B@@@,
//                :@B@B@B@Bv     LB      5B@B@B@B@,
//               :@B@B@B@B@@@:    @    :@B@B@B@B@@@,
//              :@B@B@B@B@@@@@Bv     v@@B@B@B@B@B@B@,
//             :@B@@@B@B@B@B@B@B@B@B@@@B@B@@@B@B@B@B@,
//            :@B@B@B@B@B@Br7@@@@@B@B@BB:5B@@@B@B@B@B@,
//           :@B@B@B@B@B@B@    j@B@BBr   J@B@@@B@B@B@B@,
//          :@B@B@B@B@B@B@B:      r      S@@B@@@B@B@B@B@,
//         ,@B@B@B@B@B@@@B@.    7G@Pi    U@B@B@B@B@B@@@B@.
//        ,@B@B@B@B@@@B@B@B. YB@B@B@B@B; LB@B@@@@@B@@@@@@@.
//       ,@@@@@B@@@B@B@B@B@B@B@@@@@B@@@B@@@B@@@@@B@B@B@B@B@.
//      ,@B@B@B@@@B@B@@@B@@@B@B@B@B@@@B@B@B@B@B@@@B@B@B@B@B@.
//     .@@@B@B@B@B@@@B@B@B@B@B@B@B@B@@@B@B@B@B@B@@@@@B@B@B@B@.
//    ,@B@@@B@B@@@B@@@B@B@B@B@B@B@B@@@B@@@B@@@B@@@B@B@B@B@B@B@.
//   .@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@@@B@B@@@B@B@B@B@B@@@B@B@.
//  ,@B@B@B@B@B@B@@@B@B@B@@@B@B@B@B@B@B@@@B@B@B@B@B@B@@@B@B@B@B@.
// :@B@@@B@B@B@B@B@B@@@B@@@B@B@B@B@B@B@B@B@B@B@B@B@B@@@B@B@@@B@@@.
//i@B@B@BBB@MBB@B@B@B@MMB@O@B@B@B@B@B@B@B@BBM@MBB@BMOM8GBMZOOMMBB@
//        .5            Yu                   B          k
//        rP            15                   @          P7
//        v0            LB    @i             B          FU
//        7G             @   MBi            U@          Uq
//        vE             v@YM @i           J@           vG
//        vG               :  Bi       MMXE2            rO
//        LN                  @v       B7               rB
//        i8                  i:       @j               :@
//        .B                           BN               ,B
//         @                           @q               iM
//         B7                          Bi          r    u5
//         iB  .v                                  78 0 B:
//          @r iL Z                               8iuqO,B
//           Mi@kO:                                ::uO7
//
// [HES WATCHING YOU] .... . ... / - .... . / -.-. -.-- .--. .... . .-. .-.-.-
// Zwf cfiwwz vppe bz hbbns upp diwh.
