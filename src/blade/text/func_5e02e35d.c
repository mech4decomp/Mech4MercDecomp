/* tiny function 0x5E02E35D (6 B): mov eax,[esp+8]; pop edi; ret */
/* zero-disp [esp] variant: [esp+8] encodes natively */
__declspec(naked) void FUN_5e02e35d(void) {
    __asm {
        mov eax, dword ptr [esp + 8]
        pop edi
        ret
    }
}
