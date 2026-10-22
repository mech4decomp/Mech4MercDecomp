/*
 * FUN_1003b028 (62 B) — __stdcall.
 * FPU comparison of three globals; returns 1 if remainder exceeds threshold.
 */

extern double g_1004b760;
extern double g_1004b758;
extern double g_1004b750;

__declspec(naked) void __stdcall FUN_1003b028(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        fld     qword ptr [g_1004b760]
        fstp    qword ptr [ebp - 0x8]
        fld     qword ptr [g_1004b758]
        fstp    qword ptr [ebp - 0x10]
        fld     qword ptr [ebp - 0x10]
        fdiv    qword ptr [ebp - 0x8]
        fmul    qword ptr [ebp - 0x8]
        fsubr   qword ptr [ebp - 0x10]
        fstp    qword ptr [ebp - 0x18]
        fld     qword ptr [ebp - 0x18]
        fcomp   qword ptr [g_1004b750]
        fnstsw ax
        sahf
        jbe     L1003b062
        push    0x1
        pop     eax
        leave
        ret
    L1003b062:
        xor     eax, eax
        leave
        ret
    }
}
