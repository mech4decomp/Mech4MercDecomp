/*
 * FUN_004e81de (extent 0x4e81de-0x4e8347) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004e81de(void)
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
L_81f6:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_821e
        test    cl, cl
        je    L_821a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_821e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_81f6
L_821a:
        xor    eax, eax
        jmp    L_8223
L_821e:
        sbb    eax, eax
        sbb    eax, -1
L_8223:
        test    eax, eax
        jne    L_822e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_822e:
        mov    esi, edi
        mov    eax, ebp
L_8232:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_825a
        test    cl, cl
        je    L_8256
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_825a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_8232
L_8256:
        xor    eax, eax
        jmp    L_825f
L_825a:
        sbb    eax, eax
        sbb    eax, -1
L_825f:
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
L_8295:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_82bd
        test    cl, cl
        je    L_82b9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_82bd
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_8295
L_82b9:
        xor    eax, eax
        jmp    L_82c2
L_82bd:
        sbb    eax, eax
        sbb    eax, -1
L_82c2:
        test    eax, eax
        jne    L_82cd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_82cd:
        mov    esi, edi
        mov    eax, ebp
L_82d1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_82f9
        test    cl, cl
        je    L_82f5
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_82f9
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_82d1
L_82f5:
        xor    eax, eax
        jmp    L_82fe
L_82f9:
        sbb    eax, eax
        sbb    eax, -1
L_82fe:
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
        mov    eax, ecx
        mov    word ptr [eax], 0xffff
        mov    word ptr [eax + 2], 0
        ret    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dx, word ptr [ecx]
        mov    cx, word ptr [ecx + 2]
        mov    word ptr [eax], dx
        mov    word ptr [eax + 2], cx
        ret    4
    }
}
