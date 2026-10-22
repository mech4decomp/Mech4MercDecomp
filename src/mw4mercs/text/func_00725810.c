/*
 * FUN_00725810 (156 B) — __stdcall, RET 8 (2 params).
 *
 * If param_1 == 0, zero-fills 9 dwords at param_2. Otherwise copies a
 * structure from param_1 into param_2 (with a sub-structure at
 * [param_1+0x20]), and depending on the type field ([param_1]==5) computes
 * a float from a qword at [param_1+0xec]+0x28 times _DAT_007a5564, or copies
 * [param_1+0x24] and [sub+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007a5564;   /* _DAT_007a5564 */

__declspec(naked) void __stdcall FUN_00725810(int *param_1, int *param_2)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        push    edi
        jnz     L2A
        mov     edi, dword ptr [esp + 0xc]
        mov     ecx, 0x9
        xor     eax, eax
        rep stosd
        pop     edi
        ret     0x8
L2A:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edx + 0x4]
        mov     edi, dword ptr [edx]
        push    ebx
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edx + 0x20]
        mov     bx, word ptr [ecx + 0x2]
        mov     word ptr [eax + 0xa], bx
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0xc], ebx
        mov     bx, word ptr [ecx + 0xe]
        mov     word ptr [eax + 0x16], bx
        mov     bx, word ptr [ecx + 0x10]
        push    esi
        mov     si, word ptr [ecx]
        mov     word ptr [eax + 0x18], bx
        mov     bx, word ptr [ecx + 0xc]
        mov     word ptr [eax + 0x8], si
        cmp     si, 0x1
        mov     esi, dword ptr [edx + 0x14]
        mov     dword ptr [eax + 0x4], edi
        mov     word ptr [eax + 0x14], bx
        jz      L76
        shl     esi, 0x2
L76:
        cmp     edi, 0x5
        mov     dword ptr [eax + 0x1c], esi
        pop     esi
        pop     ebx
        jnz     L9C
        mov     edx, dword ptr [edx + 0xec]
        fild    qword ptr [edx + 0x28]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x10], ecx
        pop     edi
        fmul    dword ptr [g_007a5564]
        fstp    dword ptr [eax + 0x20]
        ret     0x8
L9C:
        mov     edx, dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x20], edx
        mov     dword ptr [eax + 0x10], ecx
        pop     edi
        ret     0x8
    }
}
