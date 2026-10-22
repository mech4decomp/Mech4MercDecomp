/*
 * FUN_00630900 (28 B) — __thiscall: zeroes fields at +0x20/+0x24/+0x28,
 * then calls FUN_00630cd0() and FUN_00630e90().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00630cd0(void);
extern void __cdecl FUN_00630e90(void);

__declspec(naked) void FUN_00630900(void)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     byte ptr [esi + 0x20], al
        mov     dword ptr [esi + 0x24], eax
        mov     byte ptr [esi + 0x28], al
        call    FUN_00630cd0
        mov     ecx, esi
        call    FUN_00630e90
        pop     esi
        ret
    }
}
