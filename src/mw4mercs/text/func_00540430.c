// 0x00540430 (32B) - Array zeroing helper
// Iterates 255 elements of size 0x2038, zeroing fields at offset 0 and 8
// if byte at offset -2 is non-zero
__declspec(naked) void __stdcall func_00540430(void) {
    __asm {
        lea eax, [ecx + 0x353A]
        mov ecx, 0xFF
        xor dl, dl
loop_start:
        cmp [eax - 2], dl
        je skip
        mov [eax], dl
        mov [eax + 8], dl
skip:
        add eax, 0x2038
        dec ecx
        jnz loop_start
        ret
    }
}
