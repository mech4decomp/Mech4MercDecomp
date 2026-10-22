// 0x0054F1B0 (32B) - Set field at this+0x5B8 based on parameter
// If param == 1 or param == 2, set [ecx+0x5B8] = param
__declspec(naked) void __stdcall func_0054f1b0(void) {
    __asm {
        mov  eax, [esp+4]
        cmp  eax, 1
        jne  check_two
        mov  [ecx+0x5B8], eax
        ret  4
check_two:
        cmp  eax, 2
        jne  skip
        mov  [ecx+0x5B8], eax
skip:
        ret  4
    }
}
