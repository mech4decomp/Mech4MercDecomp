/*
 * FUN_006dffde (extent 0x6dffde-0x6e03f0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_006dffde(void)
{
    __asm {
        nop    
        nop    
        push    ecx
        mov    edx, dword ptr [ecx + 0x30]
        push    ebx
        push    ebp
        mov    eax, edx
        and    eax, 0x3fc0
        cmp    eax, 0x140
        push    esi
        push    edi
        jg    L_026a
        je    L_014c
        add    eax, -0x40
        cmp    eax, 0xc0
        ja    L_03e7
        xor    ebx, ebx
        mov    bl, byte ptr [eax + 0x6e0404]
        jmp    dword ptr [ebx*4 + 0x6e03f0]
        mov    ecx, dword ptr [ecx + 0x24]
        test    ecx, ecx
        jne    L_002f
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_002f:
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 7
        cmp    al, 1
        je    L_03e7
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
        mov    ecx, dword ptr [ecx + 0x24]
        test    ecx, ecx
        jne    L_005a
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_005a:
        mov    ecx, dword ptr [ecx + 0x24]
        and    ecx, 7
        cmp    cl, 1
        je    L_03e7
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
        mov    ecx, dword ptr [ecx + 0x24]
        test    ecx, ecx
        jne    L_0086
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_0086:
        mov    edx, dword ptr [ecx + 0x24]
        and    edx, 7
        cmp    dl, 1
        je    L_03e7
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
        mov    esi, dword ptr [ecx + 0x24]
        test    esi, esi
        jne    L_00b2
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_00b2:
        mov    eax, dword ptr [esi + 0x24]
        and    eax, 7
        cmp    al, 1
        je    L_00c7
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
L_00c7:
        mov    eax, dword ptr [ecx + 0x28]
        test    eax, eax
        jne    L_00d9
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 2
        pop    ebx
        pop    ecx
        ret    
L_00d9:
        mov    ebx, dword ptr [eax + 0x24]
        and    ebx, 7
        cmp    bl, 3
        je    L_00ef
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 6
        pop    ebx
        pop    ecx
        ret    
L_00ef:
        mov    edi, dword ptr [eax + 0x10]
        cmp    edi, dword ptr [ecx + 4]
        je    L_025f
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, dword ptr [ecx + 8]
        je    L_025f
        mov    ecx, dword ptr [esi + 0x10]
        lea    ebx, [ecx - 1]
        test    ebx, ecx
        jne    L_02f6
        mov    esi, dword ptr [esi + 0x14]
        lea    ecx, [esi - 1]
        test    ecx, esi
        jne    L_02f6
        shr    edx, 0xe
        test    dl, 1
        jne    L_03e7
        lea    edx, [edi - 1]
        test    edx, edi
        jne    L_0141
        lea    ecx, [eax - 1]
        test    ecx, eax
        je    L_03e7
L_0141:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xf
        pop    ebx
        pop    ecx
        ret    
L_014c:
        mov    ebp, dword ptr [ecx + 0x24]
        test    ebp, ebp
        jne    L_015e
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_015e:
        mov    eax, dword ptr [ebp + 0x24]
        and    eax, 7
        cmp    al, 1
        je    L_0173
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
L_0173:
        mov    eax, dword ptr [ecx + 0x28]
        test    eax, eax
        jne    L_0185
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 2
        pop    ebx
        pop    ecx
        ret    
L_0185:
        mov    ebx, dword ptr [eax + 0x24]
        and    ebx, 7
        cmp    bl, 3
        je    L_019b
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 6
        pop    ebx
        pop    ecx
        ret    
L_019b:
        mov    esi, dword ptr [eax + 0x10]
        mov    edi, dword ptr [ecx + 4]
        cmp    esi, edi
        mov    dword ptr [esp + 0x10], esi
        je    L_025f
        mov    eax, dword ptr [eax + 0x14]
        mov    esi, dword ptr [ecx + 8]
        cmp    eax, esi
        je    L_025f
        mov    ecx, dword ptr [ecx + 0x2c]
        test    ecx, ecx
        jne    L_01cd
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 3
        pop    ebx
        pop    ecx
        ret    
L_01cd:
        mov    ebx, dword ptr [ecx + 0x24]
        and    ebx, 7
        cmp    bl, 3
        je    L_01e3
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 7
        pop    ebx
        pop    ecx
        ret    
L_01e3:
        mov    ebx, dword ptr [ecx + 0x10]
        cmp    ebx, edi
        je    L_0254
        mov    ecx, dword ptr [ecx + 0x14]
        cmp    ecx, esi
        je    L_0254
        mov    esi, dword ptr [ebp + 0x10]
        lea    edi, [esi - 1]
        test    edi, esi
        jne    L_02f6
        mov    esi, dword ptr [ebp + 0x14]
        lea    edi, [esi - 1]
        test    edi, esi
        jne    L_02f6
        shr    edx, 0xe
        and    dl, 1
        jne    L_022f
        mov    esi, dword ptr [esp + 0x10]
        lea    edi, [esi - 1]
        test    edi, esi
        jne    L_0381
        lea    esi, [eax - 1]
        test    esi, eax
        jne    L_0381
L_022f:
        test    dl, dl
        jne    L_03e7
        lea    edx, [ebx - 1]
        test    edx, ebx
        jne    L_0249
        lea    eax, [ecx - 1]
        test    eax, ecx
        je    L_03e7
L_0249:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0x10
        pop    ebx
        pop    ecx
        ret    
L_0254:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xc
        pop    ebx
        pop    ecx
        ret    
L_025f:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xb
        pop    ebx
        pop    ecx
        ret    
L_026a:
        cmp    eax, 0x200
        jg    L_038c
        je    L_0301
        sub    eax, 0x180
        je    L_02b6
        sub    eax, 0x40
        jne    L_03e7
        mov    ecx, dword ptr [ecx + 0x28]
        test    ecx, ecx
        jne    L_029d
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 2
        pop    ebx
        pop    ecx
        ret    
L_029d:
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 7
        cmp    al, 1
        je    L_0365
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 8
        pop    ebx
        pop    ecx
        ret    
L_02b6:
        mov    ecx, dword ptr [ecx + 0x24]
        test    ecx, ecx
        jne    L_02c8
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_02c8:
        mov    edx, dword ptr [ecx + 0x24]
        and    edx, 7
        cmp    dl, 2
        je    L_02de
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 5
        pop    ebx
        pop    ecx
        ret    
L_02de:
        mov    eax, dword ptr [ecx + 0x10]
        lea    edx, [eax - 1]
        test    edx, eax
        jne    L_02f6
        mov    ecx, dword ptr [ecx + 0x14]
        lea    eax, [ecx - 1]
        test    eax, ecx
        je    L_03e7
L_02f6:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xe
        pop    ebx
        pop    ecx
        ret    
L_0301:
        mov    eax, dword ptr [ecx + 0x24]
        test    eax, eax
        jne    L_0313
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_0313:
        mov    ebx, dword ptr [eax + 0x24]
        and    ebx, 7
        cmp    bl, 1
        je    L_0329
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
L_0329:
        mov    ecx, dword ptr [ecx + 0x28]
        test    ecx, ecx
        jne    L_033b
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 2
        pop    ebx
        pop    ecx
        ret    
L_033b:
        mov    ebx, dword ptr [ecx + 0x24]
        and    ebx, 7
        cmp    bl, 4
        je    L_0351
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 9
        pop    ebx
        pop    ecx
        ret    
L_0351:
        mov    esi, dword ptr [eax + 0x10]
        lea    edi, [esi - 1]
        test    edi, esi
        jne    L_02f6
        mov    eax, dword ptr [eax + 0x14]
        lea    esi, [eax - 1]
        test    esi, eax
        jne    L_02f6
L_0365:
        shr    edx, 0xe
        test    dl, 1
        jne    L_03e7
        mov    eax, dword ptr [ecx + 0x10]
        lea    edx, [eax - 1]
        test    edx, eax
        jne    L_0381
        mov    ecx, dword ptr [ecx + 0x14]
        lea    eax, [ecx - 1]
        test    eax, ecx
        je    L_03e7
L_0381:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xf
        pop    ebx
        pop    ecx
        ret    
L_038c:
        cmp    eax, 0x280
        jne    L_03e7
        mov    eax, dword ptr [ecx + 0x24]
        test    eax, eax
        jne    L_03a5
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    
L_03a5:
        mov    ebx, dword ptr [eax + 0x24]
        and    ebx, 7
        cmp    bl, 1
        je    L_03bb
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
L_03bb:
        mov    ecx, dword ptr [ecx + 0x28]
        test    ecx, ecx
        jne    L_03cd
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 2
        pop    ebx
        pop    ecx
        ret    
L_03cd:
        mov    ebx, dword ptr [ecx + 0x24]
        and    ebx, 7
        cmp    bl, 5
        je    L_0351
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xa
        pop    ebx
        pop    ecx
        ret    
L_03e7:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    
        nop    
        // jump-table data @ 0x006E03F0 (56 relocated pointers)
        __emit 0x1D
        __emit 0x00
        __emit 0x6E
        __emit 0x00
        __emit 0x48
        __emit 0x00
        __emit 0x6E
        __emit 0x00
        __emit 0x74
        __emit 0x00
        __emit 0x6E
        __emit 0x00
        __emit 0xA0
        __emit 0x00
        __emit 0x6E
        __emit 0x00
        __emit 0xE7
        __emit 0x03
        __emit 0x6E
        __emit 0x00
        __emit 0x00
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x02
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x03
        __emit 0x90
        __emit 0x90
        __emit 0x90
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
