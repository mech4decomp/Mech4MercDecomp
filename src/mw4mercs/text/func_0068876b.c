/*
 * FUN_0068876b (extent 0x68876b-0x688826) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00689010(void);
extern void __cdecl FUN_006b0460(void);
extern void __cdecl FUN_006b0710(void);

__declspec(naked) void FUN_0068876b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b0460
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b0460
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_006b0710
        xor    eax, eax
        mov    dword ptr [esi + 0x2c], eax
        mov    dword ptr [esi], 0x798d08
        mov    dword ptr [esi + 0x3c], eax
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [esi + 0x24], eax
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 8], 5
        mov    eax, esi
        pop    esi
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
        sub    esp, 0x10
        lea    eax, [esp + 3]
        push    eax
        lea    edx, [esp + 8]
        push    edx
        call    FUN_00689010
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 4], edx
        mov    eax, ecx
        add    esp, 0x10
        ret    8
        nop    
        nop    
        mov    eax, 1
        ret    
    }
}
