/*
 * FUN_005fbc43 (extent 0x5fbc43-0x5fbcac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005fcc50(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_005fbc43(void)
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
        mov    ecx, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [ecx + 0x8c]
        mov    eax, dword ptr [esp + 4]
        add    ecx, 0x80
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [ecx + 0x2c]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        push    0x76d414
        mov    esi, ecx
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_bc98
        int 3    
L_bc98:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005fcc50
        pop    esi
        pop    ebp
        ret    8
    }
}
