/*
 * FUN_0058b5f7 (extent 0x58b5f7-0x58b6b8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00603d70(void);

__declspec(naked) void FUN_0058b5f7(void)
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
        mov    ecx, dword ptr [ecx + 0x2f4]
        mov    al, byte ptr [ecx + 0x1d]
        test    al, al
        jne    L_b61a
        cmp    dword ptr [ecx + 0x14], 0x25
        jne    L_b616
        mov    al, 1
        ret    
L_b616:
        test    al, al
        je    L_b627
L_b61a:
        call    FUN_00603d70
        cmp    eax, 0x25
        jne    L_b627
        mov    al, 1
        ret    
L_b627:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        push    esi
        mov    esi, dword ptr [eax + 0x99c]
        test    esi, esi
        jne    L_b641
        xor    al, al
        pop    esi
        ret    
L_b641:
        mov    ecx, dword ptr [eax + 0x2f4]
        mov    edx, dword ptr [ecx + 0x14]
        cmp    edx, 0x1e
        jl    L_b658
        cmp    edx, 0x24
        jg    L_b658
        xor    al, al
        pop    esi
        ret    
L_b658:
        mov    eax, dword ptr [eax + 0xe0]
        cmp    dword ptr [eax + 0x14], 0xf
        jne    L_b668
        xor    al, al
        pop    esi
        ret    
L_b668:
        mov    al, byte ptr [ecx + 0x1d]
        test    al, al
        je    L_b67d
        call    FUN_00603d70
        cmp    eax, 0x26
        je    L_b67d
        xor    al, al
        pop    esi
        ret    
L_b67d:
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    6
        call    dword ptr [edx + 4]
        mov    al, 1
        pop    esi
        ret    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx + 0x9b4], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 0x9b8], edx
        mov    dword ptr [ecx + 0x9bc], eax
        mov    byte ptr [ecx + 0x9b0], 1
        ret    4
    }
}
