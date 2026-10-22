/*
 * FUN_00707e70 (26 B) — gosScript helper: returns one of two global
 * doubles depending on a nonzero flag argument. __stdcall (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_00858b70;
extern double g_00858b68;

__declspec(naked) double FUN_00707e70(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jz      L1
        fld     qword ptr [g_00858b70]
        ret     4
    L1:
        fld     qword ptr [g_00858b68]
        ret     4
    }
}
