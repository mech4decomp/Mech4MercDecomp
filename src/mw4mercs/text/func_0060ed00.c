/*
 * FUN_0060ed00 (94 B) — __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0060ed00(void)
{
    __asm {
        sub     esp, 0xc
        mov     edx, dword ptr [ecx + 0x4]
        test    edx, edx
        mov     eax, 0x1
        mov     dword ptr [esp + 0x8], 0x8c
        mov     dword ptr [esp + 0x4], 0x7
        /* __emit: zero-disp [esp] write; MSVC6 emits 89 04 24 not 89 44 24 00 */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      L_ret2
        mov     eax, dword ptr [edx + 0x3ec]
        test    eax, eax
        mov     eax, dword ptr [ecx]
        jz      L_else
        lea     edx, [esp + 0x4]
        push    edx
        lea     edx, [esp + 0xc]
        push    edx
        call    dword ptr [eax + 0x4c]
        /* __emit: zero-disp [esp] read; MSVC6 emits 8B 04 24 not 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 0xc
        ret
    L_else:
        /* __emit: zero-disp [esp] lea; MSVC6 emits 8D 14 24 not 8D 54 24 00 */
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        lea     edx, [esp + 0x8]
        push    edx
        lea     edx, [esp + 0x10]
        push    edx
        call    dword ptr [eax + 0x40]
        /* __emit: zero-disp [esp] read; MSVC6 emits 8B 04 24 not 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
    L_ret2:
        add     esp, 0xc
        ret
    }
}
