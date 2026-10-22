/*
 * FUN_004f9815 (extent 0x4f9815-0x4f99a4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00500950(void);
extern void __cdecl FUN_007669b0(void);

__declspec(naked) void FUN_004f9815(void)
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
        mov    edx, dword ptr [esp + 4]
        mov    al, byte ptr [edx + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    cl, byte ptr [esi + 0x18]
        cmp    cl, al
        jne    L_9851
        push    edi
        mov    di, word ptr [edx + 0x1a]
        cmp    di, word ptr [esi + 0x1a]
        pop    edi
        jne    L_9845
        xor    eax, eax
        pop    esi
        ret    8
L_9845:
        cmp    cl, al
        jne    L_9851
        mov    ax, word ptr [edx + 0x1a]
        cmp    word ptr [esi + 0x1a], ax
L_9851:
        sbb    eax, eax
        neg    eax
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
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
        mov    edx, dword ptr [esp + 8]
        mov    cl, byte ptr [edx + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    al, byte ptr [esi]
        cmp    cl, al
        jne    L_98a0
        push    edi
        mov    di, word ptr [esi + 2]
        cmp    di, word ptr [edx + 0x1a]
        pop    edi
        jne    L_9894
        xor    eax, eax
        pop    esi
        ret    8
L_9894:
        cmp    cl, al
        jne    L_98a0
        mov    ax, word ptr [esi + 2]
        cmp    word ptr [edx + 0x1a], ax
L_98a0:
        sbb    eax, eax
        neg    eax
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x1c]
        fld    dword ptr [ecx + eax]
        add    ecx, eax
        mov    eax, dword ptr [esp + 0xc]
        fsub    dword ptr [eax]
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_98dc
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edx], ecx
        mov    al, 1
        ret    0x10
L_98dc:
        xor    al, al
        ret    0x10
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        add    esi, edx
        push    ecx
        push    esi
        call    FUN_007669b0
        add    esp, 0xc
        test    al, al
        jne    L_9931
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        mov    al, 1
        pop    esi
        ret    0x10
L_9931:
        xor    al, al
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        add    eax, ecx
        mov    ecx, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [edx]
        mov    eax, ecx
        sub    eax, esi
        mov    dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        pop    esi
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9977
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], ecx
        mov    al, 1
        ret    0x10
L_9977:
        xor    al, al
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x775948
        call    FUN_00500950
        test    byte ptr [esp + 8], 1
        je    L_999e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_999e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
