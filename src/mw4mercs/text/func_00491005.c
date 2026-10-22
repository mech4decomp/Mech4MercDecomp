/*
 * FUN_00491005 (extent 0x491005-0x4911d5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00713cc0(void);

__declspec(naked) void FUN_00491005(void)
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
L_1026:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_104e
        test    cl, cl
        je    L_104a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_104e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1026
L_104a:
        xor    eax, eax
        jmp    L_1053
L_104e:
        sbb    eax, eax
        sbb    eax, -1
L_1053:
        test    eax, eax
        jne    L_105e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_105e:
        mov    esi, edi
        mov    eax, ebp
L_1062:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_108a
        test    cl, cl
        je    L_1086
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_108a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1062
L_1086:
        xor    eax, eax
        jmp    L_108f
L_108a:
        sbb    eax, eax
        sbb    eax, -1
L_108f:
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
L_10c5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_10ed
        test    cl, cl
        je    L_10e9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_10ed
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_10c5
L_10e9:
        xor    eax, eax
        jmp    L_10f2
L_10ed:
        sbb    eax, eax
        sbb    eax, -1
L_10f2:
        test    eax, eax
        jne    L_10fd
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_10fd:
        mov    esi, edi
        mov    eax, ebp
L_1101:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_1129
        test    cl, cl
        je    L_1125
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_1129
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_1101
L_1125:
        xor    eax, eax
        jmp    L_112e
L_1129:
        sbb    eax, eax
        sbb    eax, -1
L_112e:
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
        push    0
        push    1
        call    FUN_00713cc0
        push    1
        push    0xd
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    1
        push    6
        call    FUN_00713cc0
        push    3
        push    4
        call    FUN_00713cc0
        push    1
        push    5
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    2
        push    0xf
        call    FUN_00713cc0
        push    3
        push    0x10
        call    FUN_00713cc0
        push    0
        push    7
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0
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
        mov    eax, ecx
        ret    8
    }
}
