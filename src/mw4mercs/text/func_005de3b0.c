/*
 * FUN_005de3b0 (30 B) — __thiscall (ECX = this), RET 4. Destructor:
 * calls FUN_005de3d0(), then frees this if the low bit of the flag param
 * is set. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005de3d0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005de3b0(void *flag)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005de3d0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_3C8
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_3C8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
