/*
 * FUN_00417519 (extent 0x417519-0x4175fb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c1c;
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00417430(void);
extern void __cdecl FUN_00415bd0(void);

__declspec(naked) void FUN_00417519(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        jmp    FUN_00415bd0
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
        mov    ecx, dword ptr [g_007b8c1c]
        call    FUN_00416110
        test    eax, eax
        je    L_7557
        mov    ecx, dword ptr [esi + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    0
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_00417430
        jmp    L_7559
L_7557:
        xor    eax, eax
L_7559:
        mov    ecx, dword ptr [esi + 8]
        test    ecx, ecx
        mov    dword ptr [esi + 0xc], eax
        jne    L_7566
        mov    dword ptr [esi + 8], eax
L_7566:
        pop    esi
        ret    4
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
    }
}
