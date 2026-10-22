/*
 * FUN_006cb0bc (extent 0x6cb0bc-0x6cb123) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006c8950(void);
extern void __cdecl FUN_006cb160(void);

__declspec(naked) void FUN_006cb0bc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x28]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x2c]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        push    1
        mov    esi, ecx
        push    eax
        call    FUN_006c8950
        mov    ecx, dword ptr [esp + 0xc]
        mov    al, byte ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x28], ecx
        xor    cl, cl
        cmp    al, cl
        mov    dword ptr [esi], 0x79e29c
        mov    dword ptr [esi + 0x2c], edx
        mov    byte ptr [esi + 0x38], cl
        mov    byte ptr [esi + 0x39], cl
        mov    byte ptr [esi + 0x3a], al
        je    L_b11d
        mov    ecx, esi
        call    FUN_006cb160
L_b11d:
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
