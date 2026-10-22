/*
 * FUN_0055e3af (extent 0x55e3af-0x55e414) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00500950(void);

__declspec(naked) void FUN_0055e3af(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x1c]
        fld    dword ptr [ecx + eax]
        add    ecx, eax
        mov    eax, dword ptr [esp + 0xc]
        fsub    dword ptr [eax]
        fabs    
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_e3dc
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [edx], ecx
        mov    al, 1
        ret    0x10
L_e3dc:
        xor    al, al
        ret    0x10
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x77cabc
        call    FUN_00500950
        test    byte ptr [esp + 8], 1
        je    L_e40e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_e40e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
