/*
 * FUN_006ad2e0 (116 B) — Record a stat, guarded by a type check.
 *
 * __cdecl, RET 0 (three stack params). Sets a local flag based on a
 * nested type check, calls FUN_0041ec50, then increments two counters
 * in a global table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041ec50(void *param, int count);
extern int *g_7dab44;
extern int g_7dab40;

__declspec(naked) void __cdecl FUN_006ad2e0(int param1, int param2, int param3)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        mov     eax, dword ptr [eax + 0x99c]
        test    eax, eax
        /* __emit: MSVC6 drops the 00 disp byte on [esp] (C7 04 24); ref needs C7 44 24 00 */
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jz      l_cont
        mov     ecx, dword ptr [eax + 0xe0]
        cmp     dword ptr [ecx + 0x14], 6
        jnz     l_cont
        /* __emit: MSVC6 drops the 00 disp byte on [esp] (C7 04 24); ref needs C7 44 24 00 */
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
    l_cont:
        mov     ecx, dword ptr [esp + 0xc]
        push    1
        lea     edx, [esp + 4]
        push    edx
        call    FUN_0041ec50
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        mov     edx, dword ptr [eax + ecx*4 + 0x848c]
        add     eax, 0x8484
        inc     edx
        mov     dword ptr [eax + ecx*4 + 8], edx
        inc     dword ptr [eax + 0xc00]
        pop     ecx
        ret
    }
}
