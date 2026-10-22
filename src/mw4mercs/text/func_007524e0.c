/*
 * FUN_007524e0 (47 B) — maps a stream-type enum to a string constant:
 *   0 -> g_7ad5c4, 1 -> g_7ad5d4, 2 -> g_7ad5e8, else -> g_7ad600.
 *
 * __stdcall (RET 4), one enum param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_7ad600[];
extern char g_7ad5e8[];
extern char g_7ad5d4[];
extern char g_7ad5c4[];

__declspec(naked) char * __stdcall FUN_007524e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     eax, 0x0
        jz      L_507
        dec     eax
        jz      L_4ff
        dec     eax
        jz      L_4f7
        mov     eax, offset g_7ad600
        ret     4
    L_4f7:
        mov     eax, offset g_7ad5e8
        ret     4
    L_4ff:
        mov     eax, offset g_7ad5d4
        ret     4
    L_507:
        mov     eax, offset g_7ad5c4
        ret     4
    }
}
