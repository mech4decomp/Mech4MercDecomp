/*
 * FUN_1001ca30 (57 B) — __stdcall, RET 0x14. Wraps FUN_1001c6a0 with a
 * local out-param, copying the result to *param_5 on success.
 */

extern void __cdecl FUN_1001c6a0(void);

__declspec(naked) void __stdcall FUN_1001ca30(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x10]
        /* __emit: MSVC6 drops the 00 disp byte for lea eax,[esp] (8D 04 24); ref needs 8D 44 24 00 */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        mov     eax, dword ptr [esp+0x10]
        push    ecx
        mov     ecx, dword ptr [esp+0x10]
        push    edx
        push    eax
        push    ecx
        mov     dword ptr [esp+0x14], 0
        call    FUN_1001c6a0
        test    eax, eax
        jl      L_skip
        mov     edx, dword ptr [esp+0x18]
        /* __emit: MSVC6 drops the 00 disp byte for mov ecx,[esp] (8B 0C 24); ref needs 8B 4C 24 00 */
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [edx], ecx
L_skip:
        pop     ecx
        ret     0x14
    }
}
