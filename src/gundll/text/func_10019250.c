/*
 * FUN_10019250 (30 B) - __fastcall. Ctor: allocates 0x7100 bytes via
 * FUN_1001c6e0, installs vtable 0x10049a64, zeroes field at +0x20.
 * Extern-referenced by wave-5 FUN_10005a90.
 *
 * __fastcall (spelled).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10019250(void)
{
    __asm {
        push    esi
        push    0x7100
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x10049a64
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
