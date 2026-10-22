/*
 * FUN_004ec130 (45 B) — __stdcall (RET 0x4), returns float.
 * MLR/Adept audio state-engine helper: if param==0 returns global
 * float; else computes global - (FUN_00707e70(0) - *(double*)(p+0x28))
 * / *(float*)(*(int*)(p+0x10)+0x74).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float __cdecl FUN_00707e70(int);

__declspec(naked) float FUN_004ec130(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        test    esi, esi
        jnz     L1
        fld     dword ptr [g_0076d064]
        pop     esi
        ret     4
    L1:
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi+0x28]
        mov     eax, dword ptr [esi+0x10]
        pop     esi
        fdiv    dword ptr [eax+0x74]
        fsubr   dword ptr [g_0076d064]
        ret     4
    }
}
