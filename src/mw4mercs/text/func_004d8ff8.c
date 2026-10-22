/*
 * FUN_004d8ff8 (extent 0x4d8ff8-0x4d904e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_004d8ff8(void)
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
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9027
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x7730ec
        mov    eax, esi
        pop    esi
        ret    
L_9027:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp + 8], 1
        je    L_9048
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9048:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
