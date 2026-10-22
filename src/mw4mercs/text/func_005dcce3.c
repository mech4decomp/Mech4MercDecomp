/*
 * FUN_005dcce3 (extent 0x5dcce3-0x5dcd40) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f24cc;
extern void __cdecl FUN_00416130(void);

__declspec(naked) void FUN_005dcce3(void)
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
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        je    L_cd3c
        cmp    byte ptr [esi], 0
        je    L_cd27
        mov    eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0xac]
        mov    ecx, dword ptr [g_007f24cc]
        push    esi
        call    FUN_00416130
        pop    esi
        ret    4
L_cd27:
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0xb0]
        mov    ecx, dword ptr [g_007f24cc]
        push    esi
        call    FUN_00416130
L_cd3c:
        pop    esi
        ret    4
    }
}
