/*
 * FUN_0061ad20 (15 B) — __thiscall: returns (*this & arg) != 0 as a bool.
 * Boolean via NEG/SBB/NEG idiom.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_0061ad20(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        and     eax, dword ptr [esp+4]
        neg     eax
        sbb     eax, eax
        neg     eax
        ret     4
    }
}
