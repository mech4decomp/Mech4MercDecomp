/*
 * FUN_0041756a (extent 0x41756a-0x41763a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c1c;
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00417430(void);

__declspec(naked) void FUN_0041756a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 8]
        test    eax, eax
        je    L_7591
        push    esi
L_7578:
        mov    esi, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0xc]
        test    eax, eax
        je    L_758a
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_758a:
        test    esi, esi
        mov    eax, esi
        jne    L_7578
        pop    esi
L_7591:
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
        mov    ecx, dword ptr [ecx + 8]
        xor    eax, eax
        test    ecx, ecx
        je    L_75b1
L_75a9:
        mov    ecx, dword ptr [ecx + 0x10]
        inc    eax
        test    ecx, ecx
        jne    L_75a9
L_75b1:
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
        mov    eax, dword ptr [ecx + 8]
        xor    edx, edx
        test    eax, eax
        je    L_75d9
        mov    ecx, dword ptr [esp + 4]
L_75cd:
        cmp    edx, ecx
        je    L_75de
        mov    eax, dword ptr [eax + 0x10]
        inc    edx
        test    eax, eax
        jne    L_75cd
L_75d9:
        xor    eax, eax
        ret    4
L_75de:
        mov    eax, dword ptr [eax + 0xc]
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
        mov    edx, dword ptr [ecx + 8]
        xor    eax, eax
        test    edx, edx
        sete    al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [g_007b8c1c]
        push    edi
        call    FUN_00416110
        test    eax, eax
        mov    edi, dword ptr [esp + 0x10]
        je    L_762b
        mov    ecx, dword ptr [edi + 0x14]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_00417430
        jmp    L_762d
L_762b:
        xor    eax, eax
L_762d:
        cmp    dword ptr [esi + 8], edi
        jne    L_7635
        mov    dword ptr [esi + 8], eax
L_7635:
        pop    edi
        pop    esi
        ret    8
    }
}
