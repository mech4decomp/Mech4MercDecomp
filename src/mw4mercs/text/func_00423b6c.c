/*
 * FUN_00423b6c (extent 0x423b6c-0x423bc9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00423b6c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        cmp    edi, eax
        je    L_3bc4
        test    edi, edi
        mov    eax, dword ptr [esi]
        jbe    L_3bb5
        test    eax, eax
        je    L_3ba2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3ba2:
        push    edi
        mov    dword ptr [esi + 4], edi
        call    FUN_004084d0
        add    esp, 4
        pop    edi
        mov    dword ptr [esi], eax
        pop    esi
        ret    4
L_3bb5:
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], 0
L_3bc4:
        pop    edi
        pop    esi
        ret    4
    }
}
