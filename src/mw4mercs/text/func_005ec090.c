/*
 * FUN_005ec090 (39 B) — global cleanup.
 *
 * Loads global pointer at 0x007f259c; if non-null, calls
 * FUN_00501b40(this) then frees it via FUN_004084e0.
 * Finally zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void *p);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void FUN_005ec090(void)
{
    

extern int DAT_007f259c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f259c]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov dword ptr [DAT_007f259c], 0x0
        pop     esi
        ret
    }


}
