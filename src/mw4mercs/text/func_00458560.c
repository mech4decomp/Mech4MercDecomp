/*
 * FUN_00458560 (37 B) — Constructor.
 *
 * Calls FUN_0047FEC0 (sub-constructor), zeroes fields at +0x5C/+0x60,
 * sets vtable to 0x76EC24, sets byte at +0x12 to 1.
 *
 * __thiscall, RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0047FEC0(void);

__declspec(naked) void __fastcall FUN_00458560(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0047FEC0
        xor     eax, eax
        mov     dword ptr [esi + 0x5C], eax
        mov     dword ptr [esi + 0x60], eax
        mov     dword ptr [esi], 0x0076EC24
        mov     byte ptr [esi + 0x12], 1
        mov     eax, esi
        pop     esi
        ret     4
    }
}
