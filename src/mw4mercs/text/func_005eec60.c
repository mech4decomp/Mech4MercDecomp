/*
 * FUN_005eec60 (39 B) — __thiscall method (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_005eec60(void)
{
    

extern int DAT_007f25a8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f25a8]
        test    esi, esi
        jz      LEEC7B
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
LEEC7B:
        mov dword ptr [DAT_007f25a8], 0x0
        pop     esi
        ret
    }


}
