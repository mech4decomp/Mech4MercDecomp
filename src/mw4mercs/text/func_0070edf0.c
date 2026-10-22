/*
 * FUN_0070edf0 (79 B) — Byte-swap/repack loop. Reads 4 bytes from a
 * source pointer, reorders them, and stores a dword into the output
 * array, iterating while a running index stays below a count.
 *
 * __stdcall, RET 0xC (3 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0070edf0(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        test    ebp, ebp
        jbe     L_ee3b
        mov     ecx, dword ptr [esp + 0xC]
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        push    edi
        mov     edi, 0xFFFFFFFE
        lea     eax, [ecx + 0x2]
        sub     edi, ecx
L_ee0d:
        xor     ecx, ecx
        mov     ch, byte ptr [eax + 0x1]
        xor     edx, edx
        mov     dl, byte ptr [eax - 0x1]
        add     eax, 0x4
        add     esi, 0x4
        mov     cl, byte ptr [eax - 0x4]
        shl     ecx, 0x8
        or      ecx, edx
        xor     edx, edx
        mov     dl, byte ptr [eax - 0x6]
        shl     ecx, 0x8
        or      ecx, edx
        mov     dword ptr [esi - 0x4], ecx
        lea     ecx, [edi + eax]
        cmp     ecx, ebp
        jc      L_ee0d
        pop     edi
        pop     esi
L_ee3b:
        pop     ebp
        ret     0xC
    }
}
