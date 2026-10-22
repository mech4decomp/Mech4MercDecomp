// FUN_0059c120 - __stdcall: cleanup global singleton at 0x7F2000
// Calls destructor, deletes, and sets pointer to NULL

extern void __stdcall FUN_004d5d20(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_0059c120(void)
{
    

extern int DAT_007f2000;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2000]
        test    esi, esi
        je      L1
        mov     ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L1:
        mov dword ptr [DAT_007f2000], 0x0
        pop     esi
        ret
    }


}
