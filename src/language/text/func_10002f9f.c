/*
 * FUN_10002f9f (72 B, __cdecl) — allocate the 0x140-byte string-table
 * buffer via HeapAlloc and initialize the table header globals.
 * param_1 (ESP+4) is stored into DAT_10008db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10002f9f (72 B) -- __cdecl. Allocate the 0x140-byte
 */

extern void *g_10008fe8;   /* heap handle */
extern void *g_10005088;   /* IAT: HeapAlloc */
extern int   g_10008dac;   /* allocated buffer */
extern int   g_10008da4;
extern int   g_10008da8;
extern int   g_10008da0;
extern int   g_10008db0;
extern int   g_10008d98;

__declspec(naked) int FUN_10002f9f(void)
{
    __asm {
        push    0x140
        push    0
        push    dword ptr [g_10008fe8]
        call    dword ptr [g_10005088]
        test    eax, eax
        mov     dword ptr [g_10008dac], eax
        jnz     L_2fbc
        ret
L_2fbc:
        mov     ecx, dword ptr [esp + 4]
        and     dword ptr [g_10008da4], 0
        and     dword ptr [g_10008da8], 0
        push    1
        mov     dword ptr [g_10008da0], eax
        mov     dword ptr [g_10008db0], ecx
        mov     dword ptr [g_10008d98], 0x10
        pop     eax
        ret
    }
}
