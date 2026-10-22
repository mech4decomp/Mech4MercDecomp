/*
 * DirectDrawCreateClipper (40 B) — forwards to DAT_5e03a4ac if set,
 * else returns 0xFFFFFFFF.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e001510(void);
extern int (*g_5e03a4ac)(void);   /* DAT_5e03a4ac (real DirectDrawCreateClipper) */

__declspec(naked) void __stdcall DirectDrawCreateClipper(void)
{
    __asm {
        call    FUN_5e001510
        mov     eax, dword ptr [g_5e03a4ac]
        test    eax, eax
        jz      L_13e2
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    edx
        push    ecx
        call    eax
        ret     0xC
    L_13e2:
        or      eax, 0xffffffff
        ret     0xC
    }
}
