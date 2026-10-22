/*
 * DirectDrawEnumerateA (35 B) — forwards to DAT_5e03a4b4 if set,
 * else returns 0xFFFFFFFF.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e001510(void);
extern int (*g_5e03a4b4)(void);   /* DAT_5e03a4b4 (real DirectDrawEnumerateA) */

__declspec(naked) void __stdcall DirectDrawEnumerateA(void)
{
    __asm {
        call    FUN_5e001510
        mov     eax, dword ptr [g_5e03a4b4]
        test    eax, eax
        jz      L_143d
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    ecx
        push    edx
        call    eax
        ret     0x8
    L_143d:
        or      eax, 0xffffffff
        ret     0x8
    }
}
