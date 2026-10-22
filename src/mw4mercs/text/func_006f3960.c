/*
 * FUN_006F3960 (64 B) — Random range comparison.
 *
 * Calls FUN_00707E70(0) three times to get random doubles.
 * Sets this[0] = rand1, this[1] = rand2 + param, this[2] = (rand3 < this[1]).
 *
 * __thiscall (ECX = this), RET 8 (one stack param: double).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int param);

__declspec(naked) void __stdcall FUN_006f3960(void)
{
    __asm {
        push    esi
        push    0
        mov     esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi]
        push    0
        call    FUN_00707e70
        fadd    qword ptr [esp + 8]
        push    0
        fst     qword ptr [esp + 0x0C]
        fstp    qword ptr [esi + 8]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        jz      l_set_true
        mov     byte ptr [esi + 0x10], 0
        pop     esi
        ret     8
    l_set_true:
        mov     byte ptr [esi + 0x10], 1
        pop     esi
        ret     8
    }
}
