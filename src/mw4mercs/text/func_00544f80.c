// 0x00544F80 (34B) - Array element zeroing
// If byte at [ecx+0x16] is non-zero, computes index*1031 and zeros byte at [ecx+index*1031*8+0x3541]
__declspec(naked) void __stdcall func_00544f80(void) {
    
__asm {
mov al, [ecx + 0x16]
        test al, al
        jz skip
        mov eax, [esp + 4]
        mov edx, eax
        shl edx, 7
        add edx, eax
        shl edx, 3
        sub edx, eax
        mov  byte ptr [ecx+edx*8+0x3541], 0
skip:
        ret 8
    }


}
