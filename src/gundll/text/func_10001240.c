/*
 * FUN_10001240 (90 B) — __stdcall, RET 0x10.
 * COM factory helper: validates param_2, dispatches through a function
 * pointer table at 0x10050044 indexed by param_1->[8], then calls
 * QueryInterface/Release on the resulting object.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10001240(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        __emit 0xC7                     /* __emit: MSVC6 drops the 00 disp on mov dword ptr [esp],0 (gives C7 04 24); ref is C7 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jz      L_5a
        mov     eax, 0x80040110
        pop     ecx
        ret     0x10
    L_5a:
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0x8]
        __emit 0x8D                     /* __emit: MSVC6 drops the 00 disp on lea edx,[esp] (gives 8D 14 24); ref is 8D 54 24 00 */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        shl     ecx, 0x4
        push    edx
        call    dword ptr [ecx + 0x10050044]
        test    eax, eax
        jl      L_96
        mov     edx, dword ptr [esp + 0x14]
        __emit 0x8B                     /* __emit: MSVC6 drops the 00 disp on mov eax,[esp] (gives 8B 04 24); ref is 8B 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [eax]
        push    esi
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        call    dword ptr [ecx]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     eax, esi
        pop     esi
    L_96:
        pop     ecx
        ret     0x10
    }
}
