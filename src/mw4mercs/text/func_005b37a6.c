/*
 * FUN_005b37a6 (extent 0x5b37a6-0x5b3868) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005b0060(void);
extern void __cdecl FUN_005b15b0(void);

__declspec(naked) void FUN_005b37a6(void)
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
        mov    ecx, dword ptr [ecx + 0x35c]
        mov    eax, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, 1
        jne    L_37d9
L_37c4:
        fild    dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        push    ecx
        __emit 0xD9  // fstp dword ptr [esp] (no-disp D9 1C 24 form)
__emit 0x1C
__emit 0x24
        call    dword ptr [edx + 0x168]
L_37d4:
        xor    al, al
        ret    4
L_37d9:
        cmp    eax, 2
        jne    L_37f3
        fild    dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    ecx
        __emit 0xD9  // fstp dword ptr [esp] (no-disp D9 1C 24 form)
__emit 0x1C
__emit 0x24
        call    dword ptr [eax + 0x168]
        xor    al, al
        ret    4
L_37f3:
        cmp    eax, 0x13
        je    L_37c4
        cmp    eax, 9
        jne    L_37d4
        mov    al, 1
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
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov    ecx, dword ptr [esi + 0x35c]
        mov    edx, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [edx + 0x14]
        cmp    eax, 1
        pop    esi
        jne    L_3833
        mov    al, al
        ret    
L_3833:
        cmp    eax, 2
        jne    L_383b
        mov    al, 1
        ret    
L_383b:
        cmp    eax, 0x13
        jne    L_3843
        mov    al, 1
        ret    
L_3843:
        cmp    eax, 9
        jne    L_384d
        call    FUN_005b15b0
L_384d:
        xor    al, al
        ret    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov    ecx, dword ptr [esi + 0x35c]
        call    FUN_005b0060
        pop    esi
        ret    
    }
}
