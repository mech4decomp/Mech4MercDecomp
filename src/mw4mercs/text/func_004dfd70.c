/*
 * FUN_004DFD70 (33 B) — Constructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 * Calls sub-function, zeroes fields, sets vtable.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415180(int this, int param);

__declspec(naked) int __stdcall FUN_004DFD70(int param)
{
    __asm {
        mov     eax, [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     [esi + 8], eax
        mov     [esi + 0x0c], eax
        mov     dword ptr [esi], 0x00773980
        mov     eax, esi
        pop     esi
        ret     4
    }
}
