/*
 * FUN_100268f0 (31 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x5152),
 * zeroes this+0x20/0x24, stores vtable 0x1004ac0c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_100268f0(void)
{
    __asm {
        push    esi
        push    0x5152
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x1004ac0c
        mov     eax, esi
        pop     esi
        ret
    }
}
