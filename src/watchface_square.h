#include <Arduino.h>
#define facesquare_width 200
#define facesquare_height 200
uint8_t facesquare_bits[] = {
  0x00, 0x04, 0x00, 0x19, 0x00, 0x0E, 0xC0, 0x00, 0x08, 0xC0, 0x00, 0x06, 
  0x3D, 0xC0, 0x00, 0x03, 0x54, 0x00, 0x43, 0x70, 0x00, 0x38, 0x00, 0x68, 
  0x21, 0x00, 0x1E, 0x00, 0x18, 0x80, 0x5E, 0x00, 0x01, 0x18, 0x80, 0x00, 
  0x02, 0x7C, 0x60, 0x40, 0x01, 0x18, 0x80, 0x01, 0x7C, 0x01, 0x0A, 0x00, 
  0x30, 0x00, 0x00, 0x18, 0x00, 0x30, 0x00, 0x3C, 0x00, 0x01, 0x18, 0x80, 
  0x00, 0x06, 0x3C, 0x41, 0x00, 0x03, 0x18, 0x80, 0x04, 0xFE, 0x12, 0x0C, 
  0x41, 0x98, 0x00, 0x00, 0x30, 0x00, 0x60, 0x01, 0x3D, 0x40, 0x03, 0x10, 
  0x80, 0x01, 0x06, 0x3C, 0x60, 0x00, 0x01, 0x08, 0xC0, 0x00, 0x3C, 0x00, 
  0x26, 0x00, 0x0C, 0x00, 0x00, 0x60, 0x00, 0xC0, 0x00, 0x78, 0x00, 0x02, 
  0x10, 0x80, 0x00, 0x04, 0x3C, 0x60, 0x00, 0x03, 0x1C, 0xC0, 0x10, 0x1E, 
  0x00, 0x07, 0x00, 0x07, 0x08, 0x00, 0xC0, 0x00, 0x80, 0x00, 0xF8, 0x02, 
  0x06, 0x20, 0x80, 0x01, 0x06, 0x78, 0x40, 0x80, 0x01, 0x0C, 0x60, 0x02, 
  0xBF, 0x00, 0x89, 0x40, 0x1A, 0x40, 0x00, 0x80, 0x01, 0x80, 0x01, 0xF0, 
  0x00, 0x06, 0x60, 0x80, 0x01, 0x04, 0x3E, 0x60, 0x81, 0x01, 0x0C, 0x28, 
  0x40, 0x0F, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80, 0x03, 0x00, 0x03, 
  0xE0, 0x01, 0x04, 0x60, 0x00, 0x01, 0x0C, 0x3C, 0x60, 0x80, 0x80, 0x06, 
  0x70, 0x20, 0x17, 0xD4, 0x00, 0x84, 0x01, 0x00, 0x00, 0x00, 0x07, 0x80, 
  0x02, 0xE0, 0x01, 0x08, 0x60, 0x00, 0x01, 0x06, 0x3C, 0x60, 0x80, 0x00, 
  0x06, 0x90, 0xA2, 0x1F, 0xC0, 0x10, 0xE0, 0x04, 0x20, 0x01, 0x00, 0x04, 
  0x00, 0x16, 0xE0, 0x43, 0x18, 0x40, 0x00, 0x01, 0x14, 0x7C, 0x20, 0x80, 
  0x01, 0x06, 0x30, 0xC0, 0x07, 0x78, 0x02, 0xB0, 0x20, 0x88, 0x01, 0x00, 
  0x18, 0x00, 0x0C, 0x80, 0x03, 0x18, 0x40, 0x00, 0x03, 0x0C, 0x7C, 0x60, 
  0xC0, 0x00, 0x06, 0x19, 0xD2, 0x03, 0x30, 0x00, 0x12, 0x00, 0x80, 0x0F, 
  0x00, 0x18, 0x00, 0x18, 0x80, 0x0F, 0x30, 0xC0, 0x00, 0x03, 0x04, 0x3C, 
  0x30, 0x40, 0x80, 0x03, 0x18, 0xE0, 0x83, 0x51, 0x00, 0x18, 0x00, 0xE0, 
  0x0C, 0x00, 0x30, 0x00, 0x18, 0x80, 0x0F, 0x30, 0x80, 0x00, 0x02, 0x0C, 
  0x3C, 0x30, 0xC0, 0x00, 0x01, 0x0C, 0xE0, 0x00, 0x1C, 0x48, 0x4C, 0x00, 
  0x71, 0x18, 0x00, 0x60, 0x00, 0x30, 0x00, 0x0F, 0x20, 0x80, 0x01, 0x02, 
  0x08, 0x3C, 0x20, 0x60, 0x80, 0x01, 0x14, 0xF4, 0x12, 0x0C, 0x00, 0x06, 
  0x01, 0x18, 0x18, 0x00, 0xC0, 0x00, 0x60, 0x80, 0x1E, 0x20, 0x00, 0x01, 
  0x02, 0x1C, 0xB8, 0x31, 0x40, 0x80, 0x20, 0x06, 0x74, 0x02, 0x02, 0x00, 
  0x03, 0x10, 0x4C, 0xE0, 0x01, 0x80, 0x01, 0x40, 0x01, 0x1E, 0x60, 0x00, 
  0x01, 0x06, 0x08, 0x3E, 0x10, 0x60, 0x80, 0x01, 0x06, 0xF8, 0x00, 0x26, 
  0x80, 0x23, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0x80, 0x00, 0x3C, 0x40, 
  0x00, 0x03, 0x04, 0x08, 0x7C, 0x18, 0x60, 0xC0, 0x81, 0x12, 0x3C, 0x00, 
  0x03, 0xC1, 0x00, 0x01, 0x1B, 0x80, 0x03, 0x00, 0x07, 0x80, 0x01, 0x3C, 
  0x81, 0x00, 0x02, 0x04, 0x0C, 0x3C, 0x30, 0x20, 0x40, 0x00, 0x03, 0xDE, 
  0x90, 0x05, 0xE0, 0x08, 0xC0, 0x01, 0x20, 0x03, 0x00, 0x04, 0x00, 0x01, 
  0x78, 0x80, 0x00, 0x02, 0x04, 0x18, 0x38, 0x30, 0x20, 0x40, 0x00, 0x03, 
  0x3E, 0x86, 0x00, 0x70, 0x00, 0x70, 0x00, 0x00, 0x0C, 0x00, 0x1C, 0x00, 
  0x06, 0xF8, 0x00, 0x01, 0x06, 0x0C, 0x08, 0x7C, 0x10, 0x38, 0x60, 0x80, 
  0x01, 0x1E, 0xC0, 0x00, 0x10, 0x20, 0x60, 0x00, 0x00, 0x1C, 0x00, 0x10, 
  0x00, 0x06, 0xF0, 0x00, 0x01, 0x04, 0x08, 0x18, 0x3C, 0x30, 0x30, 0x20, 
  0x80, 0x00, 0x0F, 0x60, 0x10, 0x2C, 0x08, 0x18, 0x40, 0x00, 0x38, 0x00, 
  0x60, 0x00, 0x08, 0xE0, 0x01, 0x03, 0x04, 0x0C, 0x08, 0x3C, 0x18, 0x10, 
  0x60, 0xC0, 0x80, 0xAF, 0x30, 0x00, 0x0C, 0x00, 0x3C, 0x01, 0x00, 0x60, 
  0x00, 0x60, 0x00, 0x18, 0xE0, 0x01, 0x02, 0x04, 0x08, 0x18, 0x38, 0x10, 
  0x30, 0x20, 0x40, 0xA8, 0x07, 0x54, 0x00, 0x06, 0x80, 0x4E, 0x00, 0x00, 
  0xC0, 0x01, 0xC0, 0x00, 0x18, 0xC0, 0x03, 0x02, 0x04, 0x08, 0x10, 0x3C, 
  0x08, 0x10, 0x30, 0xE0, 0xC0, 0x03, 0x1C, 0x80, 0x13, 0x00, 0x03, 0x00, 
  0x00, 0x80, 0x03, 0x80, 0x01, 0x20, 0x80, 0x07, 0x04, 0x08, 0x00, 0x00, 
  0x3C, 0x10, 0x08, 0x30, 0x20, 0xC0, 0x03, 0x0C, 0x80, 0x13, 0xC0, 0x01, 
  0x06, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x40, 0x00, 0xC8, 
  0x00, 0x00, 0x01, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0x00, 0x40, 0x21, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x28, 0xC0, 0x06, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0x00, 0x60, 0x0C, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0E, 0x00, 0x78, 0x58, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x27, 0x00, 0x19, 0x70, 0x00, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x21, 0x2E, 0xD4, 0x00, 0x00, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x43, 0x80, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x05, 0x00, 0x06, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF2, 0x41, 0x00, 
  0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xB0, 0x00, 
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 
  0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x07, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x03, 0x10, 0x41, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0xC8, 0x12, 0x44, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x01, 0x80, 0x23, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x38, 0x80, 0xD4, 0x0F, 0x00, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1C, 0x04, 0xF0, 0x3F, 0x08, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x20, 0xFE, 0xFF, 0x41, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x01, 0xFE, 0xFE, 0x01, 0x80, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xD0, 0x7F, 0xF8, 0x07, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x84, 0xE0, 0x5F, 0xE0, 
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x0B, 
  0xA0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xFC, 
  0x03, 0x00, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0xFF, 0x14, 0x00, 0xFA, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x7F, 0x82, 0x02, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF2, 0x0F, 0x00, 0x10, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFA, 0x93, 0x20, 0x00, 0x80, 0x7F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x05, 0x08, 0x01, 0x00, 0xFE, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x7F, 0x24, 0x82, 0x0B, 0x04, 0xF8, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0xAF, 0x00, 0xC0, 0x0E, 0x00, 0xF8, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 0x18, 0xE0, 0x3C, 0x01, 0x80, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x91, 0x01, 0x3E, 0xF0, 0x01, 
  0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x09, 0x80, 0x17, 0x80, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x85, 
  0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xB8, 
  0x00, 0x10, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1F, 0x00, 0x00, 0xE8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x82, 0x13, 0x10, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0x82, 0x04, 0x00, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x5C, 0x08, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x01, 0x00, 0x80, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x25, 0x40, 0x26, 0x13, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0xC0, 0x0E, 0x04, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x09, 0xFC, 0xF8, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1F, 0xA0, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x13, 0x80, 
  0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3E, 0x80, 
  0x00, 0xF2, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x2F, 
  0x80, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 
  0x81, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3E, 0x08, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x09, 0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0xC0, 0x7F, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0xFF, 0xE8, 0x27, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x27, 0x20, 0xFA, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x7F, 0x10, 0x00, 0xAA, 
  0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x85, 0x04, 0x00, 
  0x00, 0xFA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x5F, 0x01, 0x80, 
  0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x20, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xEC, 0x7A, 0x7D, 0x00, 0x00, 0x42, 
  0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
  0x04, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x00, 
  0x00, 0x00, 0x04, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xEF, 0xFF, 
  0x01, 0x00, 0x00, 0x20, 0x40, 0xBF, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x08, 
  0xF0, 0x00, 0x00, 0x84, 0x88, 0xFD, 0xFE, 0x5F, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 
  0x00, 0xF2, 0x01, 0x00, 0x90, 0xFE, 0x5F, 0x00, 0xFA, 0xFF, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 
  0x00, 0x00, 0xE8, 0x00, 0x80, 0xFF, 0x57, 0x08, 0x80, 0x08, 0xEA, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3C, 0x00, 0x00, 0xF0, 0x01, 0xE0, 0x15, 0x48, 0x82, 0x00, 0x00, 0x02, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x78, 0x00, 0x20, 0xF1, 0x00, 0x00, 0x48, 0x00, 0x10, 0x08, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 
  0x00, 0x00, 0x7C, 0x00, 0x04, 0xF0, 0x01, 0x00, 0x00, 0x09, 0x80, 0x40, 
  0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
  0x00, 0x00, 0x00, 0x3C, 0x20, 0x00, 0xF0, 0x00, 0x00, 0x21, 0x10, 0x08, 
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0xFF, 0x03, 0x00, 0x00, 0x38, 0x00, 0x21, 0xF2, 0x00, 0x00, 0x00, 0x00, 
  0x49, 0x51, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0xFF, 0x03, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x22, 
  0x22, 0x00, 0x7B, 0xBF, 0xF7, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0x03, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xF0, 0x00, 0x80, 
  0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0xFF, 0x03, 0x00, 0x00, 0x3C, 0x00, 0x00, 0xE0, 0x01, 
  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0xFF, 0x07, 0x00, 0x00, 0x3C, 0x00, 0x00, 0xF8, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x03, 0x00, 0x00, 0x78, 0x00, 0x80, 
  0xF0, 0x01, 0xA0, 0xFF, 0xEF, 0xFF, 0x16, 0x29, 0x2A, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x03, 0x00, 0x00, 0x7C, 0x80, 
  0x00, 0xE0, 0x01, 0x00, 0x99, 0xA1, 0x16, 0x40, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0x00, 0x00, 0x3C, 
  0x02, 0x01, 0xF1, 0x00, 0x00, 0x00, 0x28, 0x80, 0x10, 0x04, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x01, 0x00, 0x00, 
  0x3C, 0x00, 0x10, 0xF8, 0x01, 0x10, 0x00, 0x11, 0x02, 0x08, 0x20, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 
  0x00, 0x78, 0x00, 0x00, 0xF0, 0x09, 0x00, 0x20, 0x80, 0x40, 0x00, 0x00, 
  0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 
  0x00, 0x00, 0x7C, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x40, 0x00, 0x10, 0x00, 
  0x01, 0x62, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3C, 0x22, 0x00, 0xF8, 0x00, 0xC0, 0x2B, 0x22, 0x08, 
  0x01, 0x94, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xF0, 0x02, 0x80, 0xFF, 0x25, 
  0x81, 0xF4, 0xFF, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x40, 0x02, 0xF0, 0x01, 0x80, 0x94, 
  0xFF, 0x3F, 0xBF, 0x23, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x04, 0x10, 0xF1, 0x00, 0x00, 
  0x84, 0x99, 0xFA, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xE5, 0xED, 0xFD, 0x01, 
  0x00, 0x00, 0x80, 0x82, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 
  0x00, 0x80, 0x08, 0x00, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 
  0xFF, 0x00, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x20, 0x00, 0x48, 0x00, 0x08, 0x80, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  0x14, 0x91, 0x11, 0x02, 0x80, 0x01, 0x82, 0x00, 0x08, 0x20, 0xF9, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x2F, 0x10, 0x02, 0x00, 0x82, 0x9F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF9, 0x03, 0x00, 0x01, 0xFE, 
  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x5F, 0x20, 0xE0, 
  0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x4F, 
  0x7E, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x90, 
  0xBE, 0x47, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
  0x09, 0xE8, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x14, 0x80, 0x10, 0x04, 0x04, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x01, 0x04, 0x08, 0x80, 0x20, 0x79, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x90, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x9E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0xA0, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x81, 0x42, 0x7E, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x3E, 0x00, 0x80, 0x0F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xE8, 0x23, 0xE8, 0x10, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x42, 0x2F, 0xBF, 
  0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x78, 
  0x07, 0x00, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0x08, 
  0xE0, 0x08, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x23, 
  0x20, 0x04, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 
  0x06, 0x00, 0x82, 0x20, 0x42, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3E, 0x41, 0x20, 0x00, 0x80, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF9, 0x10, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x43, 0x20, 0x00, 0x78, 0x85, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x40, 0x0E, 0x8A, 0x20, 0x3E, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x7A, 0x00, 0x81, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xF2, 0x01, 0xE4, 0x02, 0x02, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x05, 0x80, 0x47, 0x78, 0x86, 
  0xE0, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x28, 0x3D, 0x1E, 
  0x00, 0xC8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x97, 0x00, 0x70, 
  0x0B, 0x41, 0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x10, 
  0xD1, 0x09, 0x10, 0xFD, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0xE3, 0xF0, 0x86, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 
  0x02, 0x80, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0xCF, 0x33, 0x8F, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xA0, 
  0xFE, 0x60, 0x14, 0x80, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x0C, 0x33, 0x18, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0x07, 0x80, 0x20, 0xF0, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0x04, 0x33, 0x18, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x2F, 0x02, 0x08, 0xFC, 0x23, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0xC7, 0x33, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x42, 0x82, 0x1F, 0x20, 0xA2, 0xFF, 0x85, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x87, 0x13, 0x30, 0x0C, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xA0, 0x7F, 0x00, 0x00, 0x7F, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x32, 0x18, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xFE, 0x93, 0xE4, 0x9F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x23, 0x18, 0x0C, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x10, 0xFA, 0x07, 0xF0, 0x2F, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0xB3, 0x0E, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0xE8, 0x1F, 0xFE, 0x01, 
  0x88, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xE0, 0xF1, 0x07, 
  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0x81, 0xE4, 0x3F, 0xFE, 
  0x42, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0xFF, 
  0x7F, 0x11, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x24, 
  0xFD, 0x1F, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 
  0x00, 0xF0, 0x07, 0x02, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 
  0xB8, 0x40, 0xD1, 0x81, 0x80, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x0A, 0x88, 0x84, 0x01, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xD8, 0x00, 0x08, 0x00, 0xD0, 0x01, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x87, 0x80, 0x01, 0xE4, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x04, 0x00, 0x07, 0x02, 0x08, 0x30, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x21, 0x3C, 0x10, 0x08, 0x9C, 0x82, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x88, 0x40, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x60, 0x00, 0x12, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0xC1, 0x01, 0xC0, 
  0x11, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x20, 0xC0, 0x00, 0x84, 0x27, 
  0x68, 0x01, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xA0, 0x13, 0x10, 
  0x06, 0x30, 0x00, 0xD1, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0x40, 0x7E, 0x1E, 0x20, 0x60, 0x01, 0x00, 0x04, 0x20, 0x00, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x84, 0x00, 0x00, 
  0x06, 0x00, 0x30, 0x87, 0x04, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
  0x81, 0x5C, 0x02, 0x62, 0x01, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x01, 0x00, 0x00, 
  0x02, 0x00, 0x18, 0x00, 0xC8, 0x4B, 0x00, 0x4C, 0x21, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x10, 0x10, 
  0x00, 0x20, 0x00, 0x71, 0x18, 0x80, 0x00, 0x22, 0x03, 0x00, 0x02, 0x20, 
  0x90, 0x03, 0x04, 0x08, 0x00, 0x11, 0x0A, 0x10, 0x01, 0x01, 0x20, 0xC0, 
  0x09, 0x02, 0x00, 0x20, 0xC0, 0x01, 0x22, 0x00, 0x80, 0x07, 0x80, 0x01, 
  0x38, 0x84, 0x0B, 0x0C, 0x28, 0x18, 0x18, 0x7C, 0x18, 0x18, 0x30, 0x61, 
  0xE0, 0x23, 0x6C, 0xC0, 0x05, 0x92, 0x41, 0x00, 0x00, 0xC8, 0x02, 0xC0, 
  0x80, 0x10, 0xC0, 0x07, 0x0A, 0x0C, 0x18, 0x90, 0x3E, 0x18, 0x10, 0x30, 
  0x60, 0xC0, 0x0F, 0x18, 0x18, 0x06, 0x40, 0x23, 0x00, 0x00, 0x62, 0x00, 
  0x64, 0x08, 0x3C, 0xE8, 0x03, 0x02, 0x14, 0x2C, 0x18, 0xBC, 0x18, 0x18, 
  0x28, 0x60, 0xE0, 0x03, 0x19, 0x00, 0x16, 0x08, 0x06, 0x41, 0x00, 0x70, 
  0x01, 0x60, 0x01, 0x0C, 0xE0, 0x61, 0x87, 0x04, 0x08, 0x1D, 0x78, 0x10, 
  0x92, 0x60, 0xC8, 0x01, 0x1F, 0x70, 0x40, 0x0E, 0x00, 0x1E, 0x18, 0x18, 
  0x1C, 0x80, 0x38, 0x00, 0x16, 0xF8, 0x04, 0x03, 0x06, 0x0C, 0x08, 0x3D, 
  0x39, 0x38, 0x60, 0x80, 0x88, 0x8F, 0x28, 0x01, 0x58, 0x20, 0x98, 0x00, 
  0x00, 0x0C, 0x02, 0x58, 0x40, 0x86, 0xF8, 0x41, 0x81, 0x86, 0x4C, 0x0A, 
  0x7C, 0x18, 0x30, 0x61, 0x80, 0x01, 0x1F, 0x48, 0x08, 0x12, 0x11, 0x78, 
  0x00, 0x00, 0x47, 0x00, 0x0E, 0x00, 0x03, 0x7A, 0x80, 0x01, 0x02, 0x05, 
  0x58, 0x3C, 0x30, 0x22, 0x40, 0x51, 0x95, 0x5E, 0xD2, 0x20, 0x64, 0x00, 
  0x40, 0x21, 0x94, 0x03, 0x80, 0x16, 0x84, 0x21, 0x7C, 0xC8, 0x09, 0x17, 
  0x04, 0x0C, 0x3D, 0x55, 0x70, 0x40, 0x08, 0x01, 0x9C, 0xC4, 0x01, 0x71, 
  0x82, 0xE1, 0x01, 0xC0, 0x04, 0x10, 0x03, 0xC0, 0x02, 0xBE, 0xC2, 0x00, 
  0x01, 0x1D, 0x1C, 0xBC, 0x30, 0x20, 0xD8, 0x80, 0x27, 0x3D, 0x00, 0x05, 
  0xC0, 0x00, 0x00, 0x0B, 0x40, 0x00, 0x84, 0x05, 0x68, 0x80, 0x1E, 0x40, 
  0x81, 0x81, 0x26, 0x8A, 0xBC, 0x38, 0x70, 0xC0, 0x21, 0x86, 0x7A, 0x10, 
  0x07, 0x80, 0x81, 0x10, 0x06, 0xF0, 0x05, 0xD0, 0x01, 0x61, 0x04, 0x5F, 
  0x78, 0x10, 0x03, 0x0A, 0x0C, 0x3C, 0x12, 0x41, 0x82, 0x01, 0x06, 0xF8, 
  0x85, 0x46, 0x88, 0x07, 0x40, 0x5E, 0x1A, 0x80, 0x60, 0x20, 0x60, 0x01, 
  0xAF, 0x60, 0x84, 0x01, 0x06, 0x1C, 0x3D, 0x20, 0xC0, 0x60, 0x45, 0x04, 
  0xF1, 0x00, 0x0C, 0x40, 0x16, 0x00, 0x18, 0x1C, 0x00, 0x30, 0x40, 0x38, 
  0x90, 0x0F, 0x31, 0xC0, 0x05, 0x42, 0x44, 0x7C, 0xB4, 0x68, 0x01, 0x01, 
  0x2E, 0xF8, 0x05, 0x3A, 0x04, 0x0C, 0x02, 0x34, 0x03, 0x02, 0x18, 0x00, 
  0x18, 0xE8, 0x4F, 0x32, 0x80, 0x00, 0x8A, 0x8C, 0x3C, 0x20, 0x40, 0x00, 
  0x01, 0x1C, 0xE2, 0x01, 0x1A, 0x00, 0x0C, 0x20, 0xE4, 0x47, 0x80, 0x3C, 
  0x04, 0x8D, 0x82, 0x07, 0x18, 0xD1, 0x81, 0x03, 0x1E, 0x7D, 0x34, 0xC0, 
  0x84, 0x13, 0x18, 0xE0, 0x47, 0x30, 0x21, 0x78, 0x04, 0xC0, 0x02, 0x00, 
  0x4E, 0x00, 0x16, 0xE8, 0x23, 0x58, 0xC0, 0x02, 0x11, 0x04, 0x7D, 0x64, 
  0xC2, 0x11, 0x06, 0x54, 0xE0, 0x13, 0x60, 0x04, 0x22, 0x20, 0x44, 0x10, 
  0x40, 0x06, 0x10, 0x06, 0xC0, 0x83, 0x0C, 0x60, 0x10, 0x03, 0x0E, 0x3C, 
  0x62, 0xA0, 0x00, 0x06, 0x32, 0xC2, 0x8F, 0xC8, 0x00, 0xE0, 0x02, 0x00, 
  0x04, 0x10, 0x03, 0x42, 0x03, 0xF4, 0x01, 0x04, 0x60, 0x02, 0x03, 0x45, 
  0x7C, 0x38, 0xC4, 0x01, 0x06, 0x30, 0xC4, 0x0F, 0xC0, 0x40, 0xD0, 0x80, 
  0x80, 0x01, 0x80, 0x05, 0x80, 0x41, 0xF0, 0x12, 0x2E, 0x30, 0x80, 0x21, 
  0x0E, 0x3C, 0x60, 0x80, 0x42, 0x0E, 0x68, 0x20, 0x2F, 0x88, 0x05, 0x80, 
  0x05, 0x00, 0x00, 0xE0, 0x00, 0x98, 0x01, 0xF4, 0x58, 0x8E, 0x71, 0x88, 
  0x01, 0x06, 0xBE, 0x60, 0x01, 0x15, 0x84, 0x61, 0x40, 0x5F, 0x11, 0x01, 
  0x84, 0x03, 0x08, 0x10, 0x64, 0x11, 0xC0, 0x22, 0x7C, 0x01, 0x02, 0x38, 
  0xA0, 0x05, 0x42, 0x3C, 0x48, 0x80, 0x01, 0x1C, 0x60, 0x02, 0x3E, 0x80, 
  0x47, 0x00, 0x1E, 0x00, 0x02, 0x30, 0x00, 0x64, 0x14, 0x7E, 0x48, 0x03, 
  0x90, 0x80, 0x84, 0x06, 0x1C, 0xE2, 0x41, 0x01, 0x0A, 0xC0, 0x4A, 0x3E, 
  0x48, 0x06, 0x18, 0x0C, 0x01, 0x00, 0xBA, 0x08, 0x30, 0x00, 0xBC, 0x01, 
  0x03, 0x18, 0xC0, 0x00, 0x16, 0xFC, 0x44, 0x00, 0x13, 0x18, 0x94, 0x00, 
  0x7C, 0x02, 0x0C, 0x00, 0x3A, 0x20, 0x00, 0x0C, 0x40, 0x30, 0x80, 0x3E, 
  0x40, 0xA1, 0x3A, 0x82, 0x00, 0x46, 0x3E, 0x70, 0x80, 0x06, 0x18, 0x80, 
  0x21, 0x7C, 0x00, 0x18, 0x80, 0xB8, 0x10, 0x80, 0x0C, 0x00, 0x8E, 0x04, 
  0x1F, 0xC0, 0x02, 0x08, 0xE0, 0x41, 0x12, 0xBC, 0x42, 0x05, 0x03, 0x98, 
  0x82, 0x05, 0x79, 0x22, 0x56, 0x01, 0x20, 0x00, };
