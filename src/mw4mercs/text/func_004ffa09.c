/*
 * FUN_004ffa09 (extent 0x4ffa09-0x4ffa74) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ffa90(void);
extern void __cdecl FUN_004ffb90(void);
extern void __cdecl FUN_004ffd30(void);
extern void __cdecl FUN_005003e0(void);
extern void __cdecl FUN_0050d6c0(void);

__declspec(naked) void FUN_004ffa09(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    FUN_005003e0
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x18], eax
        lea    eax, [esp + 0x18]
        push    eax
        push    edx
        call    FUN_0050d6c0
        add    esp, 0x14
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        cmp    eax, 3
        ja    L_fa70
        jmp    dword ptr [eax*4 + 0x4ffa74]
        push    ecx
        call    FUN_004ffb90
        add    esp, 4
        ret    
        push    ecx
        call    FUN_004ffa90
        add    esp, 4
        ret    
        push    ecx
        call    FUN_004ffd30
        add    esp, 4
        ret    
L_fa70:
        xor    eax, eax
        ret    
        nop    
        // jump-table data @ 0x004FFA74 (0 relocated pointers)
    }
}
