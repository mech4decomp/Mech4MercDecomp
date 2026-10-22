/*
 * FUN_00420774 (extent 0x420774-0x42083b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00420774(void)
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
        ret    
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fcomp    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        je    L_07ac
        mov    eax, dword ptr [edx]
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [esi]
        jmp    L_07b2
L_07ac:
        mov    eax, dword ptr [esi]
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [edx]
L_07b2:
        fld    dword ptr [edx + 4]
        mov    dword ptr [ecx + 4], eax
        fcomp    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_07cd
        mov    eax, dword ptr [edx + 4]
        mov    dword ptr [ecx + 8], eax
        mov    eax, dword ptr [esi + 4]
        jmp    L_07d6
L_07cd:
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [ecx + 8], eax
        mov    eax, dword ptr [edx + 4]
L_07d6:
        fld    dword ptr [edx + 8]
        mov    dword ptr [ecx + 0xc], eax
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_07f8
        mov    eax, dword ptr [esi + 8]
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [ecx + 0x14], eax
        mov    dword ptr [ecx + 0x10], edx
        mov    eax, ecx
        pop    esi
        ret    8
L_07f8:
        mov    eax, dword ptr [esi + 8]
        mov    edx, dword ptr [edx + 8]
        mov    dword ptr [ecx + 0x10], eax
        mov    dword ptr [ecx + 0x14], edx
        mov    eax, ecx
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 0x14]
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax + 0x14], ecx
        ret    4
    }
}
