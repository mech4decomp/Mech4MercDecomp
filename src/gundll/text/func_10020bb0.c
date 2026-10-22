/*
 * FUN_10020BB0 (37 B) - __fastcall. Ctor: calls FUN_1001c6e0(0xa104),
 * zeroes this+0x20..+0x2c, stores vtable 0x1004aa68 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10020BB0(void)
{
    __asm {
        push    esi
        push    0xa104
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x1004aa68
        mov     eax, esi
        pop     esi
        ret
    }
}
