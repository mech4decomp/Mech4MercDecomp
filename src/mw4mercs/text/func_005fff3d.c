/*
 * FUN_005fff3d (extent 0x5fff3d-0x5fff9f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004f8900(void);
extern void __cdecl FUN_004f8b30(void);

__declspec(naked) void FUN_005fff3d(void)
{
    __asm {
        nop    
        nop    
        nop    
        jmp    FUN_004f8900
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
        jmp    FUN_004f8b30
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
        push    edi
        lea    edi, [ecx + 0x2a4]
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, edi
        call    FUN_00416b60
        mov    esi, eax
        test    esi, esi
        je    L_ff89
        push    esi
        mov    ecx, edi
        call    FUN_00415ca0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
L_ff89:
        mov    ecx, dword ptr [esp + 0xc]
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, edi
        call    FUN_00416a90
        pop    edi
        pop    esi
        ret    8
    }
}
