/*
 * FUN_00412e80 (31 B) — __fastcall constructor: calls FUN_00415bb0(0),
 * sets byte [this+8]=1, dword [this+0xc]=0, vtable 0x76d1f4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415bb0(void);

__declspec(naked) void FUN_00412e80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x0
        call    FUN_00415bb0
        mov     byte ptr [esi + 0x8], 0x1
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], 0x76d1f4
        mov     eax, esi
        pop     esi
        ret
    }
}
