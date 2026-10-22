/*
 * FUN_1003b137 (24 B) - __cdecl. Returns 1 if *arg (double) is >= the
 * constant g_1004b790, else 0. (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern double g_1004b790;   /* .rdata double constant */

__declspec(naked) void __cdecl FUN_1003b137(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        fld     qword ptr [eax]
        fcomp   qword ptr [g_1004b790]
        fnstsw  ax
        sahf
        jb      L_14c
        push    1
        pop     eax
        ret
L_14c:
        xor     eax, eax
        ret
    }
}
