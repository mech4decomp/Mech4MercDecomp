// FUN_005998a0 - __stdcall: cleanup global singleton at 0x7F1FDC
// Calls destructor, deletes, and sets pointer to NULL

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_005998a0(void)
{
    

extern int DAT_007f1fdc;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f1fdc]
        test    esi, esi
        je      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L1:
        mov dword ptr [DAT_007f1fdc], 0x0
        pop     esi
        ret
    }


}
