/*
 * FUN_00415b50 (30 B) — __fastcall (ECX=this, one stack arg = deleting flag):
 * scalar deleting destructor. Calls FUN_00415980 (destructor), then if the
 * flag bit 0 is set, frees via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415980(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00415b50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00415980
        test    byte ptr [esp+0x8], 0x1
        jz      L_ret
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_ret:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
