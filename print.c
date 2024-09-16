int wasm_test(unsigned char *buf, int size) {
  static const char TEST[] = "<p>Hello world</p>";
  for (int i = 0; i < sizeof(TEST); i++) {
    buf[i] = TEST[i];
  }
  return sizeof(TEST);
}
