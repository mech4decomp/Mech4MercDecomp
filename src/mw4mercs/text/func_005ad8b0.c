/*
 * FUN_005ad8b0 (29 B) — Constructor.
 *
 * Saves this (ECX) in ESI, loads a global into ECX, sets vtable ptr
 * [ESI]=0x785a08, calls FUN_005ad1e0, then FUN_004d9db0(this).
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005ad1e0(void);
extern void __stdcall FUN_004d9db0(void);

__declspec(naked) void __stdcall FUN_005ad8b0(void)
{
    

extern int DAT_007f20d0;
__asm {
push    esi
        mov     esi, ecx
        mov ecx, dword ptr [DAT_007f20d0]
        mov     dword ptr [esi], 0x785a08
        call    FUN_005ad1e0
        mov     ecx, esi
        call    FUN_004d9db0
        pop     esi
        ret
    }


}
