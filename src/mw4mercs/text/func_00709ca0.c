/*
 * FUN_00709ca0 (70 B) — __stdcall, RET 4 (one stack param).
 *
 * If both globals g_0085a1fc and g_0085a224 are non-zero, builds a
 * 0x28-byte stack buffer, calls vtable slot +0xc, then slot +0x10 on
 * the g_0085a224 object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085a1fc;
extern int g_0085a224;

__declspec(naked) void __stdcall FUN_00709ca0(void *param_1)
{
    __asm {
        mov     eax, dword ptr [g_0085a1fc]
        sub     esp, 0x28
        test    eax, eax
        jz      short loc_709ce0
        mov     eax, dword ptr [g_0085a224]
        test    eax, eax
        jz      short loc_709ce0
        /* __emit: MSVC6 drops the 00 disp byte for lea edx,[esp]; ref needs 8D 54 24 00 */
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        mov     dword ptr [esp + 0x4], 0x28
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x8], eax
        mov     eax, dword ptr [g_0085a224]
        mov     ecx, dword ptr [eax]
        /* __emit: MSVC6 drops the 00 disp byte for lea edx,[esp]; ref needs 8D 54 24 00 */
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
loc_709ce0:
        add     esp, 0x28
        ret     4
    }
}
