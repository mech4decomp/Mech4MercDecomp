/*
 * FUN_00420988 (extent 0x420988-0x420d2d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00420988(void)
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fcomp    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jne    L_09a8
        fld    dword ptr [edx]
        jmp    L_09aa
L_09a8:
        fld    dword ptr [esi]
L_09aa:
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 1
        je    L_09be
        fld    dword ptr [edx + 4]
        jmp    L_09c1
L_09be:
        fld    dword ptr [esi + 4]
L_09c1:
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_09d6
        fld    dword ptr [edx + 8]
        jmp    L_09d9
L_09d6:
        fld    dword ptr [esi + 8]
L_09d9:
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fcomp    dword ptr [esi + 0xc]
        fnstsw  ax
        test    ah, 1
        je    L_09ee
        fld    dword ptr [edx + 0xc]
        jmp    L_09f1
L_09ee:
        fld    dword ptr [esi + 0xc]
L_09f1:
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edx + 0x10]
        fcomp    dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0a06
        fld    dword ptr [edx + 0x10]
        jmp    L_0a09
L_0a06:
        fld    dword ptr [esi + 0x10]
L_0a09:
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [edx + 0x14]
        fcomp    dword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_0a25
        fld    dword ptr [edx + 0x14]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
        ret    8
L_0a25:
        fld    dword ptr [esi + 0x14]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fcomp    dword ptr [esi]
        fnstsw  ax
        test    ah, 1
        je    L_0a58
        fld    dword ptr [edx]
        jmp    L_0a5a
L_0a58:
        fld    dword ptr [esi]
L_0a5a:
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0a6e
        fld    dword ptr [edx + 4]
        jmp    L_0a71
L_0a6e:
        fld    dword ptr [esi + 4]
L_0a71:
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 1
        je    L_0a86
        fld    dword ptr [edx + 8]
        jmp    L_0a89
L_0a86:
        fld    dword ptr [esi + 8]
L_0a89:
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fcomp    dword ptr [esi + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0a9e
        fld    dword ptr [edx + 0xc]
        jmp    L_0aa1
L_0a9e:
        fld    dword ptr [esi + 0xc]
L_0aa1:
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edx + 0x10]
        fcomp    dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_0ab6
        fld    dword ptr [edx + 0x10]
        jmp    L_0ab9
L_0ab6:
        fld    dword ptr [esi + 0x10]
L_0ab9:
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [edx + 0x14]
        fcomp    dword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0ad5
        fld    dword ptr [edx + 0x14]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
        ret    8
L_0ad5:
        fld    dword ptr [esi + 0x14]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
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
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fcomp    dword ptr [esi]
        fnstsw  ax
        test    ah, 1
        je    L_0b08
        fld    dword ptr [edx]
        jmp    L_0b0a
L_0b08:
        fld    dword ptr [esi]
L_0b0a:
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0b1d
        fld    dword ptr [edx + 4]
        jmp    L_0b1f
L_0b1d:
        fld    dword ptr [esi]
L_0b1f:
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 1
        je    L_0b34
        fld    dword ptr [edx + 8]
        jmp    L_0b37
L_0b34:
        fld    dword ptr [esi + 4]
L_0b37:
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fcomp    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0b4c
        fld    dword ptr [edx + 0xc]
        jmp    L_0b4f
L_0b4c:
        fld    dword ptr [esi + 4]
L_0b4f:
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edx + 0x10]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 1
        je    L_0b64
        fld    dword ptr [edx + 0x10]
        jmp    L_0b67
L_0b64:
        fld    dword ptr [esi + 8]
L_0b67:
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [edx + 0x14]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0b83
        fld    dword ptr [edx + 0x14]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
        ret    8
L_0b83:
        fld    dword ptr [esi + 8]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
        ret    8
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        fcomp    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        je    L_0ba3
        mov    eax, dword ptr [ecx]
        jmp    L_0bb2
L_0ba3:
        fld    dword ptr [edx]
        fcomp    dword ptr [ecx + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0bb4
        mov    eax, dword ptr [ecx + 4]
L_0bb2:
        mov    dword ptr [edx], eax
L_0bb4:
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 1
        je    L_0bc6
        mov    eax, dword ptr [ecx + 8]
        jmp    L_0bd6
L_0bc6:
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [ecx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0bd9
        mov    eax, dword ptr [ecx + 0xc]
L_0bd6:
        mov    dword ptr [edx + 4], eax
L_0bd9:
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_0bf1
        mov    ecx, dword ptr [ecx + 0x10]
        mov    dword ptr [edx + 8], ecx
        mov    eax, edx
        ret    4
L_0bf1:
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [ecx + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0c04
        mov    eax, dword ptr [ecx + 0x14]
        mov    dword ptr [edx + 8], eax
L_0c04:
        mov    eax, edx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c67
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 1
        jne    L_0c67
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c67
        fld    dword ptr [ecx + 0xc]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 1
        jne    L_0c67
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c67
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_0c67
        mov    eax, 1
        ret    4
L_0c67:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        je    L_0cc8
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 1
        jne    L_0cc8
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_0cc8
        fld    dword ptr [ecx + 0xc]
        fcomp    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 1
        jne    L_0cc8
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [edx + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_0cc8
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [edx + 0x14]
        fnstsw  ax
        test    ah, 1
        jne    L_0cc8
        mov    eax, 1
        ret    4
L_0cc8:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_0d28
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 1
        jne    L_0d28
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_0d28
        fld    dword ptr [ecx + 0xc]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_0d28
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [edx + 0x14]
        fnstsw  ax
        test    ah, 0x41
        je    L_0d28
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [edx + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_0d28
        mov    eax, 1
        ret    4
L_0d28:
        xor    eax, eax
        ret    4
    }
}
