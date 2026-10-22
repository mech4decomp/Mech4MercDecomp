/*
 * FUN_0047CDE0 (80 B) — __thiscall (RET 0xC). Iterates over an array of
 * pointers at [esp+8] (count in eax), and for each element whose float at
 * [esi+8] is not equal to g_7b9550, calls a virtual method; if it returns
 * nonzero and flag bit 2 is set, calls another virtual method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7b9550;

__declspec(naked) void FUN_0047CDE0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        push    ebx
        mov     ebx, ecx
        jle     loc_47ce2c
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ebp, eax
loc_47cdf4:
        mov     esi, dword ptr [edi]
        fld     dword ptr [esi + 8]
        fcomp   dword ptr [g_7b9550]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jne     loc_47ce23
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x1c]
        test    eax, eax
        je      loc_47ce23
        test    byte ptr [esp + 0x1c], 2
        je      loc_47ce23
        mov     edx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx + 0xa0]
loc_47ce23:
        add     edi, 4
        dec     ebp
        jne     loc_47cdf4
        pop     edi
        pop     esi
        pop     ebp
loc_47ce2c:
        pop     ebx
        ret     0xc
    }
}
