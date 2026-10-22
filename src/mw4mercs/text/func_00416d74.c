/*
 * FUN_00416d74 (extent 0x416d74-0x416dde) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00416d74(void)
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
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_6d92
        int 3    
L_6d92:
        xor    eax, eax
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
        cmp    dword ptr [esp + 4], 1
        jne    L_6db5
        mov    eax, dword ptr [esp + 8]
        cmp    eax, dword ptr [ecx + 0x10]
        jne    L_6db5
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
L_6db5:
        ret    8
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
        call    FUN_00416c60
        test    byte ptr [esp + 8], 1
        je    L_6dd8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6dd8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
