#include <stdio.h>
#include <tonc.h>

int main() {
  // Init interrupts and VBlank irq
  irq_init(NULL);
  irq_add(II_VBLANK, NULL);

  // Video mode 0, enable bg 0
  REG_DISPCNT = DCNT_MODE0 | DCNT_BG0;

  // Use charblock 0/4, screenblock 24/32, 8bpp color,
  // and a basic 256x256px map (32x32 tiles)
  REG_BG0CNT = BG_CBB(0) | BG_SBB(24) | BG_8BPP | BG_REG_32x32;

  // Set up palette memory, colors are 15bpp
  pal_bg_mem[0] = 0x77DF;  // base color (cream)
  pal_bg_mem[1] = 0x4588;  // blue
  pal_bg_mem[2] = 127;     // red

  // Set up an 8x8 tile 1
  for (int line = 0; line < 8; line++) {
    // update charblock 0, tile 1, line i * 2

    tile8_mem[0][1].data[line * 2] =
        (1 << 0) + (2 << 8) + (1 << 16) + (2 << 24);
    //    blue       red        blue        red
    tile8_mem[0][1].data[line * 2 + 1] =
        (1 << 0) + (1 << 8) + (2 << 16) + (2 << 24);
    //    blue       blue        red        red
  }

  // Set up a map, draw 10 tiles starting from tile 6
  for (int i = 6; i < 6 + 10; i++)
    // update screenblock 24, tile i
    se_mem[24][i] = 1;

  while (1) {
    VBlankIntrWait();
  }

  return 0;
}
