/*
 * FUN_006a2b68 (extent 0x6a2b68-0x6a2c2f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00799d40;
extern void __cdecl FUN_00663900(void);
extern void __cdecl FUN_006651d0(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a4b30(void);
extern void __cdecl FUN_006a4b70(void);
extern void __cdecl FUN_006a4da0(void);

__declspec(naked) void FUN_006a2b68(void)
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
        mov    eax, dword ptr [esp + 4]
        push    0
        push    0x41a00000
        push    eax
        call    FUN_006a4da0
        fcomp    dword ptr [g_00799d40]
        add    esp, 0xc
        fnstsw  ax
        test    ah, 1
        jne    L_2b99
        mov    eax, 1
        ret    4
L_2b99:
        xor    eax, eax
        ret    4
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        push    0x43960000
        push    esi
        mov    edi, ecx
        call    FUN_006a4b70
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 0x41
        jne    L_2bc9
        mov    byte ptr [edi + 4], 1
        jmp    L_2bcd
L_2bc9:
        mov    byte ptr [edi + 4], 0
L_2bcd:
        push    esi
        call    FUN_006a22f0
        add    esp, 4
        cmp    al, 1
        jne    L_2c21
        push    0x40c00000
        push    esi
        call    FUN_006a4b30
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_2c13
        push    1
        push    0x42c80000
        push    esi
        call    FUN_00663900
        mov    eax, dword ptr [edi + 8]
        add    esp, 0xc
        lea    ecx, [edi + 8]
        push    esi
        call    dword ptr [eax]
        pop    edi
        pop    esi
        ret    4
L_2c13:
        push    0x41000000
        push    esi
        call    FUN_006651d0
        add    esp, 8
L_2c21:
        mov    eax, dword ptr [edi + 8]
        lea    ecx, [edi + 8]
        push    esi
        call    dword ptr [eax]
        pop    edi
        pop    esi
        ret    4
    }
}
