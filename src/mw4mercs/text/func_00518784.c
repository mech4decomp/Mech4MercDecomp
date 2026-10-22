/*
 * FUN_00518784 (extent 0x518784-0x518b37) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2e0;
extern int    g_0076b308;
extern int    g_0076b418;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007dd268;
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_00704820(void);

__declspec(naked) void FUN_00518784(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        xor    eax, eax
        mov    al, byte ptr [edx + 0x3078]
        ret    0xc
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
        nop    
        nop    
        mov    eax, dword ptr [g_007dd268]
        mov    edx, dword ptr [eax + 0x40d08]
        test    edx, edx
        push    ebx
        push    esi
        push    edi
        je    L_88d8
        mov    esi, dword ptr [g_0076b308]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        push    0x3a
        push    edx
        mov    edi, ecx
        call    esi
        mov    ebx, dword ptr [g_0076b2e0]
        add    esp, 8
        test    eax, eax
        je    L_8839
        mov    ecx, dword ptr [g_007dd268]
        mov    edx, dword ptr [ecx + 0x40d08]
        push    3
        push    0x779f78
        push    edx
        call    ebx
        add    esp, 0xc
        test    eax, eax
        je    L_8839
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x40d08]
        push    4
        push    0x779f70
        push    ecx
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_88d8
L_8839:
        mov    edx, dword ptr [g_007dd268]
        mov    eax, dword ptr [edx + 0x40d08]
        push    0x5c
        push    eax
        call    esi
        add    esp, 8
        test    eax, eax
        jne    L_88d8
        lea    esi, [edi - 1]
        mov    eax, esi
        test    eax, eax
        jle    L_88c4
        mov    ecx, dword ptr [g_007dd268]
        mov    ecx, dword ptr [ecx + 0x40d08]
L_886a:
        cmp    byte ptr [ecx + eax], 0x2f
        je    L_8877
        dec    eax
        test    eax, eax
        jg    L_886a
        jmp    L_88c4
L_8877:
        cmp    esi, eax
        jle    L_88c4
L_887b:
        cmp    byte ptr [ecx + esi], 0x2e
        je    L_8888
        dec    esi
        cmp    esi, eax
        jg    L_887b
        jmp    L_88c4
L_8888:
        sub    edi, esi
        cmp    edi, 4
        jne    L_88a1
        push    edi
        add    ecx, esi
        push    0x779f68
        push    ecx
        call    ebx
        add    esp, 0xc
        test    eax, eax
        je    L_88c4
L_88a1:
        cmp    edi, 5
        jne    L_88d8
        mov    edx, dword ptr [g_007dd268]
        mov    eax, dword ptr [edx + 0x40d08]
        push    edi
        add    eax, esi
        push    0x779f60
        push    eax
        call    ebx
        add    esp, 0xc
        test    eax, eax
        jne    L_88d8
L_88c4:
        mov    ecx, dword ptr [g_007dd268]
        mov    edx, dword ptr [ecx + 0x40d08]
        push    edx
        push    3
        call    FUN_00704820
L_88d8:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        ret    0xc
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
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x409bc]
        sub    esp, 0x24
        test    ecx, ecx
        jne    L_890b
        or    eax, 0xffffffff
        add    esp, 0x24
        ret    0xc
L_890b:
        mov    ecx, dword ptr [eax + 0x409c0]
        test    ecx, ecx
        jg    L_891e
        or    eax, 0xffffffff
        add    esp, 0x24
        ret    0xc
L_891e:
        push    esi
        xor    esi, esi
        test    ecx, ecx
        push    edi
        mov    byte ptr [esp + 8], 0
        jle    L_8986
        mov    edi, 0x409c4
L_8930:
        mov    ecx, dword ptr [edi + eax]
        cmp    ecx, -1
        je    L_8978
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        je    L_8973
        mov    dl, byte ptr [eax + 0x28]
        mov    ecx, dword ptr [esp + 8]
        mov    al, byte ptr [esp + 8]
        and    ecx, 0xff
        inc    al
        mov    byte ptr [esp + ecx + 0xc], dl
        mov    byte ptr [esp + 8], al
L_8973:
        mov    eax, dword ptr [g_007dd268]
L_8978:
        mov    ecx, dword ptr [eax + 0x409c0]
        inc    esi
        add    edi, 4
        cmp    esi, ecx
        jl    L_8930
L_8986:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0x2e8
        call    dword ptr [edx + 0x34]
        mov    edx, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        mov    eax, dword ptr [g_007dd268]
        not    ecx
        dec    ecx
        mov    esi, ecx
        mov    ecx, dword ptr [eax + 0x409bc]
        push    esi
        push    edx
        push    ecx
        call    dword ptr [g_0076b418]
        mov    edx, dword ptr [g_007dd268]
        add    esp, 0xc
        test    eax, eax
        jne    L_8a1e
        mov    eax, dword ptr [edx + 0x409bc]
        cmp    byte ptr [eax + esi], 0x20
        jne    L_8a1e
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [g_007dab40]
        push    eax
        xor    eax, eax
        mov    eax, dword ptr [g_007db090]
        mov    al, byte ptr [eax + 0x28]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0xc]
        push    0
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    8
        push    eax
        call    dword ptr [edx + 0x30]
        pop    edi
        mov    eax, 1
        pop    esi
        add    esp, 0x24
        ret    0xc
L_8a1e:
        mov    edx, dword ptr [edx + 0x409bc]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        push    edx
        xor    edx, edx
        mov    edx, dword ptr [g_007db090]
        mov    dl, byte ptr [edx + 0x28]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        push    0
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    7
        push    edx
        call    dword ptr [eax + 0x30]
        pop    edi
        mov    eax, 1
        pop    esi
        add    esp, 0x24
        ret    0xc
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x409bc]
        sub    esp, 0x24
        test    ecx, ecx
        jne    L_8a7b
        or    eax, 0xffffffff
        add    esp, 0x24
        ret    0xc
L_8a7b:
        mov    ecx, dword ptr [eax + 0x409c0]
        test    ecx, ecx
        jg    L_8a8e
        or    eax, 0xffffffff
        add    esp, 0x24
        ret    0xc
L_8a8e:
        push    edi
        xor    edi, edi
        test    ecx, ecx
        mov    byte ptr [esp + 4], 0
        jle    L_8af7
        push    esi
        mov    esi, 0x409c4
L_8aa0:
        mov    ecx, dword ptr [esi + eax]
        cmp    ecx, -1
        je    L_8ae8
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        je    L_8ae3
        mov    dl, byte ptr [eax + 0x28]
        mov    ecx, dword ptr [esp + 8]
        mov    al, byte ptr [esp + 8]
        and    ecx, 0xff
        inc    al
        mov    byte ptr [esp + ecx + 0xc], dl
        mov    byte ptr [esp + 8], al
L_8ae3:
        mov    eax, dword ptr [g_007dd268]
L_8ae8:
        mov    ecx, dword ptr [eax + 0x409c0]
        inc    edi
        add    esi, 4
        cmp    edi, ecx
        jl    L_8aa0
        pop    esi
L_8af7:
        mov    eax, dword ptr [eax + 0x409bc]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        push    eax
        xor    eax, eax
        mov    eax, dword ptr [g_007db090]
        mov    al, byte ptr [eax + 0x28]
        xor    edx, ecx
        mov    ecx, dword ptr [edx + 0xc]
        push    0
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0
        push    eax
        call    dword ptr [edx + 0x30]
        mov    eax, 1
        pop    edi
        add    esp, 0x24
        ret    0xc
    }
}
