/*
 * FUN_005c9943 (extent 0x5c9943-0x5c9e1e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005cdff0(void);

__declspec(naked) void FUN_005c9943(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    ebp, dword ptr [edi + 0x4e0]
        xor    bl, bl
        test    ebp, 0xfffffffc
        je    L_99ac
        mov    esi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x17]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x1b], 1
        call    dword ptr [eax + 0x24]
        mov    ecx, ebp
        and    ecx, 0xfffffffc
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        push    4
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        jmp    L_99c2
L_99ac:
        mov    esi, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x17]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x1b], bl
        call    dword ptr [edx + 0x24]
L_99c2:
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x4e4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x4f0]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x4fc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [edi + 0x514]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x518]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x51c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x520]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x524]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x528]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x52c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x530]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x534]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x540]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x544]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x545]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x546]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x547]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x549]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x54a]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x54c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x548]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    8
        lea    eax, [edi + 0x550]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    8
        lea    eax, [edi + 0x558]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x560]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x564]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x568]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x56c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x570]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x574]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x578]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x57c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x580]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x584]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x588]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x594]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ebp, dword ptr [edi + 0x598]
        test    ebp, 0xfffffffc
        je    L_9c2a
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x20], 1
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    0x30
        and    ebp, 0xfffffffc
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        jmp    L_9c3c
L_9c2a:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x20], bl
        call    dword ptr [eax + 0x24]
L_9c3c:
        mov    ebp, dword ptr [edi + 0x59c]
        test    ebp, 0xfffffffc
        je    L_9c6c
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x20], 1
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    0x30
        and    ebp, 0xfffffffc
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        jmp    L_9c7e
L_9c6c:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x20], bl
        call    dword ptr [eax + 0x24]
L_9c7e:
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x5a0]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x5a4]
        mov    ecx, dword ptr [edi + 0x5a8]
        mov    edx, dword ptr [esi]
        sub    ecx, eax
        sar    ecx, 2
        push    4
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ebp, dword ptr [edi + 0x5a4]
        mov    ebx, dword ptr [edi + 0x5a8]
        cmp    ebp, ebx
        je    L_9cdd
L_9cc1:
        mov    ecx, dword ptr [ebp]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        add    ebp, 4
        cmp    ebp, ebx
        jne    L_9cc1
L_9cdd:
        mov    ecx, dword ptr [edi + 0x5b4]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [edi + 0x5b8]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x5bc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi + 0x5c4]
        mov    ecx, dword ptr [edi + 0x5c8]
        sub    ecx, edx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        push    4
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ebp, dword ptr [edi + 0x5c4]
        mov    ebx, dword ptr [edi + 0x5c8]
        cmp    ebp, ebx
        je    L_9d6e
L_9d5d:
        mov    edx, dword ptr [esi]
        push    0xc
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        add    ebp, 0xc
        cmp    ebp, ebx
        jne    L_9d5d
L_9d6e:
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [edi + 0x5d0]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    0xc
        lea    eax, [edi + 0x5d4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x5e0]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x5e4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x5f8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x5fc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x5fd]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x4dc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x5fe]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x614]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        mov    ecx, edi
        call    FUN_005cdff0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
