/*
 * FUN_006919D0 (88 B) — .text data block containing 2 sub-functions:
 *   [0x6919D0] __thiscall (2 args, RET 8): copies (count/8) dwords from
 *             arg2 to arg1 and advances [this+4].
 *   [0x691A10] __thiscall (1 arg, RET 4): initializes a string object at
 *             [this] with a byte from arg1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006919D0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 4]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        sub     ecx, esi
        sar     ecx, 3
        mov     edx, ecx
        test    edx, edx
        jle     loc_691a03
        push    edi
        and     ecx, 0x1fffffff
        shl     ecx, 1
        mov     edi, eax
        rep movsd
        pop     edi
        lea     ecx, [eax + edx*8]
        pop     esi
        mov     dword ptr [ebx + 4], ecx
        pop     ebx
        ret     8
loc_691a03:
        pop     esi
        mov     dword ptr [ebx + 4], eax
        pop     ebx
        ret     8
        nop
        nop
        nop
        nop
        nop
        mov     edx, dword ptr [esp + 4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 8], dl
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret     4
    }
}
