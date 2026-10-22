/*
 * FUN_005c9960 (1214 B) - __thiscall (this in ECX), RET 4. Serializes a large
 * set of object fields by calling a virtual method [vtbl+0x24] on an output
 * stream object (ESI) for each field, with size + pointer arguments.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_005cdff0(void);

__declspec(naked) void __cdecl FUN_005c9960(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebp, [edi + 0x4e0]
        xor     bl, bl
        test    ebp, 0xfffffffc
        jz      l_99ac
        mov     esi, [esp + 0x18]
        mov     eax, [esi]
        push    0x1
        lea     ecx, [esp + 0x17]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1b], 0x1
        call    dword ptr [eax + 0x24]
        mov     ecx, ebp
        and     ecx, 0xfffffffc
        mov     edx, [ecx]
        call    dword ptr [edx + 0x4]
        push    0x4
        lea     ecx, [esp + 0x1c]
        mov     [esp + 0x1c], eax
        mov     eax, [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        jmp     l_99c2
    l_99ac:
        mov     esi, [esp + 0x18]
        mov     edx, [esi]
        push    0x1
        lea     eax, [esp + 0x17]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x1b], bl
        call    dword ptr [edx + 0x24]
    l_99c2:
        mov     edx, [esi]
        push    0xc
        lea     eax, [edi + 0x4e4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0xc
        lea     eax, [edi + 0x4f0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0xc
        lea     eax, [edi + 0x4fc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, [edi + 0x514]
        mov     edx, [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     [esp + 0x1c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x518]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x51c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x520]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x524]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x528]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x52c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x530]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0xc
        lea     eax, [edi + 0x534]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x540]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x544]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x545]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x546]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x547]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x549]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x54a]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x54c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x548]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x8
        lea     eax, [edi + 0x550]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x8
        lea     eax, [edi + 0x558]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x560]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x564]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x568]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x56c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x570]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x574]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x578]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x57c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x580]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x584]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0xc
        lea     eax, [edi + 0x588]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x594]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, [edi + 0x598]
        test    ebp, 0xfffffffc
        jz      l_9c2a
        mov     edx, [esi]
        push    0x1
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x20], 0x1
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x30
        and     ebp, 0xfffffffc
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     l_9c3c
    l_9c2a:
        mov     eax, [esi]
        push    0x1
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x20], bl
        call    dword ptr [eax + 0x24]
    l_9c3c:
        mov     ebp, [edi + 0x59c]
        test    ebp, 0xfffffffc
        jz      l_9c6c
        mov     edx, [esi]
        push    0x1
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x20], 0x1
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x30
        and     ebp, 0xfffffffc
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        jmp     l_9c7e
    l_9c6c:
        mov     eax, [esi]
        push    0x1
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x20], bl
        call    dword ptr [eax + 0x24]
    l_9c7e:
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x5a0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, [edi + 0x5a4]
        mov     ecx, [edi + 0x5a8]
        mov     edx, [esi]
        sub     ecx, eax
        sar     ecx, 0x2
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     [esp + 0x1c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, [edi + 0x5a4]
        mov     ebx, [edi + 0x5a8]
        cmp     ebp, ebx
        jz      l_9cdd
    l_9cc1:
        mov     ecx, [ebp]
        mov     edx, [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     [esp + 0x1c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebp, 0x4
        cmp     ebp, ebx
        jnz     l_9cc1
    l_9cdd:
        mov     ecx, [edi + 0x5b4]
        mov     edx, [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     [esp + 0x1c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, [edi + 0x5b8]
        mov     edx, [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     [esp + 0x1c], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x5bc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [edi + 0x5c4]
        mov     ecx, [edi + 0x5c8]
        sub     ecx, edx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    0x4
        lea     eax, [esp + 0x1c]
        mov     [esp + 0x1c], edx
        mov     edx, [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, [edi + 0x5c4]
        mov     ebx, [edi + 0x5c8]
        cmp     ebp, ebx
        jz      l_9d6e
    l_9d5d:
        mov     edx, [esi]
        push    0xc
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     ebp, 0xc
        cmp     ebp, ebx
        jnz     l_9d5d
    l_9d6e:
        mov     eax, [esi]
        push    0x4
        lea     ecx, [edi + 0x5d0]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, [esi]
        push    0xc
        lea     eax, [edi + 0x5d4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x5e0]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x5e4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x5f8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x5fc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x5fd]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x4
        lea     eax, [edi + 0x4dc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x5fe]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, [esi]
        push    0x1
        lea     eax, [edi + 0x614]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        mov     ecx, edi
        call    FUN_005cdff0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
