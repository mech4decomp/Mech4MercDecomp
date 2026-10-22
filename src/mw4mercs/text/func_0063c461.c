/*
 * FUN_0063c461 (extent 0x63c461-0x63c4cf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void FUN_0063c461(void)
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
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    dword ptr [ecx + 0x17c], eax
        mov    word ptr [ecx + 0x180], ax
        add    ecx, 0x144
        jmp    FUN_0041fcb0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        push    edi
        lea    edi, [esi + 0x15c]
        mov    ecx, edi
        call    FUN_0041fcb0
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, edi
        call    FUN_0041fcd0
        lea    edi, [esi + 0x154]
        mov    esi, dword ptr [edi]
L_c4b5:
        test    esi, esi
        je    L_c4ca
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_c4ca
        push    edi
        call    FUN_004154d0
        jmp    L_c4b5
L_c4ca:
        pop    edi
        pop    esi
        ret    4
    }
}
