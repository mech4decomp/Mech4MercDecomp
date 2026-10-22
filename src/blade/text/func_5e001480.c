/*
 * DirectDrawEnumerateExA (100 B) — forwards to DAT_5e03a4bc if set;
 * else repackages the 3 params into a local 3-dword buffer and calls
 * DAT_5e03a4b4 with a callback (0x5e0014f0) + pointer to the buffer.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e001510(void);
extern int (*g_5e03a4bc)(void);   /* DAT_5e03a4bc (real DirectDrawEnumerateExA) */
extern int (*g_5e03a4b4)(void);   /* DAT_5e03a4b4 (real DirectDrawEnumerateA) */

__declspec(naked) void __stdcall DirectDrawEnumerateExA(void)
{
    __asm {
        sub     esp, 0xc
        call    FUN_5e001510
        mov     eax, dword ptr [g_5e03a4bc]
        test    eax, eax
        jz      L_14a8
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    ecx
        call    eax
        add     esp, 0xc
        ret     0xC
    L_14a8:
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x4], eax
        mov     eax, dword ptr [g_5e03a4b4]
        __emit 0x89   /* __emit: mov [esp],edx zero-disp; MSVC6 drops the 00 disp byte (89 14 24) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        test    eax, eax
        mov     dword ptr [esp + 0x8], ecx
        jz      L_14db
        __emit 0x8D   /* __emit: lea edx,[esp] zero-disp; MSVC6 drops the 00 disp byte (8D 14 24) */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        push    0x5e0014f0
        call    eax
        add     esp, 0xc
        ret     0xC
    L_14db:
        or      eax, 0xffffffff
        add     esp, 0xc
        ret     0xC
    }
}
