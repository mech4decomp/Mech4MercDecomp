/*
 * FUN_006f36ae (extent 0x6f36ae-0x6f3950) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_006f36ae(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_36c6:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_36ee
        test    cl, cl
        je    L_36ea
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_36ee
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_36c6
L_36ea:
        xor    eax, eax
        jmp    L_36f3
L_36ee:
        sbb    eax, eax
        sbb    eax, -1
L_36f3:
        test    eax, eax
        jne    L_36fe
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_36fe:
        mov    esi, edi
        mov    eax, ebp
L_3702:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_372a
        test    cl, cl
        je    L_3726
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_372a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_3702
L_3726:
        xor    eax, eax
        jmp    L_372f
L_372a:
        sbb    eax, eax
        sbb    eax, -1
L_372f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_3765:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_378d
        test    cl, cl
        je    L_3789
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_378d
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_3765
L_3789:
        xor    eax, eax
        jmp    L_3792
L_378d:
        sbb    eax, eax
        sbb    eax, -1
L_3792:
        test    eax, eax
        jne    L_379d
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_379d:
        mov    esi, edi
        mov    eax, ebp
L_37a1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_37c9
        test    cl, cl
        je    L_37c5
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_37c9
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_37a1
L_37c5:
        xor    eax, eax
        jmp    L_37ce
L_37c9:
        sbb    eax, eax
        sbb    eax, -1
L_37ce:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_3806:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_382e
        test    cl, cl
        je    L_382a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_382e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_3806
L_382a:
        xor    eax, eax
        jmp    L_3833
L_382e:
        sbb    eax, eax
        sbb    eax, -1
L_3833:
        test    eax, eax
        jne    L_383e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_383e:
        mov    esi, edi
        mov    eax, ebp
L_3842:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_386a
        test    cl, cl
        je    L_3866
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_386a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_3842
L_3866:
        xor    eax, eax
        jmp    L_386f
L_386a:
        sbb    eax, eax
        sbb    eax, -1
L_386f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_38a5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_38cd
        test    cl, cl
        je    L_38c9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_38cd
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_38a5
L_38c9:
        xor    eax, eax
        jmp    L_38d2
L_38cd:
        sbb    eax, eax
        sbb    eax, -1
L_38d2:
        test    eax, eax
        jne    L_38dd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_38dd:
        mov    esi, edi
        mov    eax, ebp
L_38e1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_3909
        test    cl, cl
        je    L_3905
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_3909
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_38e1
L_3905:
        xor    eax, eax
        jmp    L_390e
L_3909:
        sbb    eax, eax
        sbb    eax, -1
L_390e:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 8]
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [esi], eax
        push    0
        mov    dword ptr [esi + 4], ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 8]
        mov    byte ptr [esi + 0x10], 1
        mov    eax, esi
        pop    esi
        ret    
    }
}
