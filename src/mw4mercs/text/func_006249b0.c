/*
 * FUN_006249b0 (51 B) - __thiscall. Copies (this->4 - param_2)>>2 dwords
 * from param_2 to param_1 via rep movsd, then sets this->4 = param_1 +
 * count. If count <= 0, sets this->4 = param_1.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006249b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        sub     ecx, esi
        sar     ecx, 0x2
        mov     edx, ecx
        test    edx, edx
        jle     L_else
        push    edi
        mov     edi, eax
        rep movsd
        pop     edi
        lea     ecx, [eax + edx*4]
        pop     esi
        mov     dword ptr [ebx + 0x4], ecx
        pop     ebx
        ret     8
L_else:
        pop     esi
        mov     dword ptr [ebx + 0x4], eax
        pop     ebx
        ret     8
    }
}
