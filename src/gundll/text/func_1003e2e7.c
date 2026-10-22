/*
 * FUN_1003e2e7 (86 B) - __cdecl.
 * Calls IAT(0x100491c8, [esi+0x10], 0, 0x8000). If g_10053f90 != esi,
 * updates it. If esi != 0x10051f70, unlinks esi from a list and calls
 * IAT(0x10049084, g_10076a90). Else sets g_10051f80 to -1.
 *
 * CFLAGS: /O1
 */

extern int *g_100491c8;   /* IAT call dword ptr */
extern int *g_10049084;   /* IAT call dword ptr */
extern int g_10053f90;    /* data */
extern int g_10076a90;    /* data */
extern int g_10051f80;    /* data */

__declspec(naked) void FUN_1003e2e7(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0x8000
        push    0
        push    dword ptr [esi + 0x10]
        call    dword ptr [g_100491c8]
        cmp     dword ptr [g_10053f90], esi
        jnz     L_3e30c
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [g_10053f90], eax
    L_3e30c:
        cmp     esi, 0x10051f70
        jz      L_3e334
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        push    esi
        push    0
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049084]
        pop     esi
        ret
    L_3e334:
        or      dword ptr [g_10051f80], -1
        pop     esi
        ret
    }
}
