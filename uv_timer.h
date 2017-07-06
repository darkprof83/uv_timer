
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __UVTIMER_H
#define __UVTIMER_H

#define LONG_PRESS      5
#define DEBOUNCE        1
#define DIG_PORT        GPIOD
#define DIG1_PIN        GPIO_PIN_3
#define DIG2_PIN        GPIO_PIN_2
#define DIG3_PIN        GPIO_PIN_1

#define SEG_A_PORT      GPIOC
#define SEG_A_PIN       GPIO_PIN_4
#define SEG_B_PORT      GPIOC
#define SEG_B_PIN       GPIO_PIN_5
#define SEG_C_PORT      GPIOC
#define SEG_C_PIN       GPIO_PIN_6
#define SEG_D_PORT      GPIOC
#define SEG_D_PIN       GPIO_PIN_7
#define SEG_E_PORT      GPIOB
#define SEG_E_PIN       GPIO_PIN_5
#define SEG_F_PORT      GPIOB
#define SEG_F_PIN       GPIO_PIN_4
#define SEG_G_PORT      GPIOC
#define SEG_G_PIN       GPIO_PIN_3


enum state { timer_run, timer_pause, timer_set };

typedef struct {
  u16 debounce;
  u8  flashTmr;
  bool  flashRdy;
  u32 timeSet;
  u16 timeCurrent;
  u8  timerState;
  u8  timerLongPress;
} uvTimerTypedef;

typedef struct {
  u8  index;
  u8  dig1;
  u8  dig2;
  u8  dig3;
} ledDisplayTypedef;

extern uvTimerTypedef uvTimer;
extern ledDisplayTypedef ledDisplay;


void seven_segment(void);

/**
  * @}
  */
#endif /* __UVTIMER_H */