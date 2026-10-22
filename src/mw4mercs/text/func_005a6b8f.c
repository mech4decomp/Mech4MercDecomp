/*
 * FUN_005a6b8f (extent 0x5a6b8f-0x5a6c21) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_005a6b8f(void)
{
    __asm {
        nop    
        xor    al, al
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
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        lea    esi, [edi + 0x184]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_6be4
        mov    ecx, esi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xe0]
        mov    edx, dword ptr [eax]
        push    0
        push    5
        mov    ecx, eax
        call    dword ptr [edx + 4]
        mov    ecx, esi
        call    FUN_0041fcb0
L_6be4:
        lea    esi, [edi + 0x18c]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_6c14
        mov    ecx, esi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xe0]
        mov    edx, dword ptr [eax]
        push    0
        push    5
        mov    ecx, eax
        call    dword ptr [edx + 4]
        mov    ecx, esi
        call    FUN_0041fcb0
L_6c14:
        pop    edi
        pop    esi
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
        ret    
    }
}
