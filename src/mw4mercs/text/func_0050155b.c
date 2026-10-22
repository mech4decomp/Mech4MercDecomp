/*
 * FUN_0050155b (extent 0x50155b-0x5015ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005013f0(void);
extern void __cdecl FUN_005015d0(void);

__declspec(naked) void FUN_0050155b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], edx
        ret    8
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005013f0
        mov    dword ptr [esi], 0x7763a0
        mov    eax, esi
        pop    esi
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_005015d0
        test    byte ptr [esp + 8], 1
        je    L_15c8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_15c8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
