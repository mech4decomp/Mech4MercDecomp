/*
 * FUN_007539e0 (extent 0x7539e0-0x753b98) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00754230(void);

__declspec(naked) void FUN_007539e0(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x2c]
        test    eax, eax
        jne    L_3af2
        mov    cx, word ptr [esi + 6]
        push    ebx
        push    edi
        xor    edi, edi
        mov    di, word ptr [esi]
        xor    edx, edx
        mov    dx, word ptr [esi + 2]
        mov    eax, edi
        imul    eax, edx
        shl    eax, 2
        test    ch, 8
        je    L_3a1c
        mov    ebx, eax
        shl    ebx, 4
        add    ebx, eax
        lea    ebx, [ebx + ebx*4]
        lea    eax, [eax + ebx*4]
        shr    eax, 8
L_3a1c:
        mov    dword ptr [esi + 0x2c], eax
        xor    eax, eax
        mov    ax, word ptr [esi + 4]
        and    ecx, 0xffff
        mov    ebx, ecx
        shr    ebx, 7
        and    ebx, 1
        shr    eax, 0xa
        and    eax, 7
        lea    eax, [ebx + eax*2]
        mov    ebx, ecx
        shr    ebx, 0xe
        lea    eax, [ebx + eax*4]
        mov    ebx, eax
        shl    ebx, 5
        sub    ebx, eax
        mov    eax, dword ptr [ebx*4 + 0x8b7b24]
        imul    eax, edi
        imul    eax, edx
        not    ecx
        shr    eax, 3
        test    cl, 1
        je    L_3a74
        mov    ecx, eax
        shl    ecx, 4
        add    ecx, eax
        lea    ecx, [ecx + ecx*4]
        lea    edx, [eax + ecx*4]
        mov    eax, edx
        shr    eax, 8
L_3a74:
        push    1
        mov    ecx, esi
        mov    dword ptr [esi + 0x30], eax
        call    FUN_00754230
        xor    ecx, ecx
        mov    cx, word ptr [esi + 4]
        push    0
        mov    edi, eax
        xor    eax, eax
        mov    ax, word ptr [esi + 6]
        shr    ecx, 0xa
        and    ecx, 7
        mov    edx, eax
        shr    edx, 7
        and    edx, 1
        lea    ecx, [edx + ecx*2]
        shr    eax, 0xe
        lea    eax, [eax + ecx*4]
        mov    edx, eax
        shl    edx, 5
        sub    edx, eax
        mov    ecx, esi
        lea    ebx, [edx*4 + 0x8b7ad0]
        call    FUN_00754230
        and    edi, 0xffff
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 6]
        and    eax, 0xffff
        imul    eax, dword ptr [ebx + 0x54]
        imul    eax, edi
        not    ecx
        shr    eax, 3
        test    cl, 1
        pop    edi
        pop    ebx
        je    L_3aef
        mov    ecx, eax
        shl    ecx, 4
        add    ecx, eax
        lea    edx, [ecx + ecx*4]
        lea    eax, [eax + edx*4]
        shr    eax, 8
L_3aef:
        mov    dword ptr [esi + 0x34], eax
L_3af2:
        mov    al, byte ptr [esp + 8]
        test    al, al
        mov    eax, dword ptr [esp + 0xc]
        je    L_3b75
        cmp    eax, 3
        ja    L_3b92
        jmp    dword ptr [eax*4 + 0x753b98]
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_3b1a
        mov    ecx, dword ptr [esi + 0x2c]
        jmp    L_3b1c
L_3b1a:
        xor    ecx, ecx
L_3b1c:
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        je    L_3b28
        mov    eax, dword ptr [esi + 0x30]
        jmp    L_3b2a
L_3b28:
        xor    eax, eax
L_3b2a:
        mov    edx, dword ptr [esi + 0x10]
        test    edx, edx
        je    L_3b3c
        mov    esi, dword ptr [esi + 0x34]
        add    eax, esi
        add    eax, ecx
        pop    esi
        ret    8
L_3b3c:
        xor    esi, esi
        add    eax, esi
        add    eax, ecx
        pop    esi
        ret    8
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_3b92
        mov    eax, dword ptr [esi + 0x2c]
        pop    esi
        ret    8
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        je    L_3b92
        cmp    eax, dword ptr [esi + 8]
        je    L_3b92
        mov    eax, dword ptr [esi + 0x30]
        pop    esi
        ret    8
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_3b92
        mov    eax, dword ptr [esi + 0x34]
        pop    esi
        ret    8
L_3b75:
        cmp    eax, 3
        ja    L_3b92
        jmp    dword ptr [eax*4 + 0x753ba8]
        mov    eax, dword ptr [esi + 0x34]
        mov    edx, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x2c]
        add    eax, edx
        add    eax, ecx
        pop    esi
        ret    8
L_3b92:
        xor    eax, eax
        pop    esi
        ret    8
        // jump-table data @ 0x00753B98 (4 relocated pointers)
        __emit 0x0E
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        __emit 0x46
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        __emit 0x54
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        __emit 0x67
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        // jump-table data @ 0x00753BA8 (6 relocated pointers)
        __emit 0x81
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        __emit 0x4D
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        __emit 0x60
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        __emit 0x6E
        __emit 0x3B
        __emit 0x75
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
