/*
 * FUN_0064742f (extent 0x64742f-0x6474d2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00647910(void);
extern void __cdecl FUN_00647940(void);
extern void __cdecl FUN_00647e30(void);

__declspec(naked) void FUN_0064742f(void)
{
    __asm {
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
        sub    esp, 0x14
        mov    eax, dword ptr [esp + 0x18]
        push    esi
        mov    esi, ecx
        push    eax
        lea    ecx, [esi + 0x24]
        call    FUN_004179b0
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    edx, [esp + 0xc]
        add    esi, 0xc
        push    edx
        mov    ecx, esi
        call    FUN_00647e30
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 4], eax
        je    L_748a
        cmp    ecx, dword ptr [eax + 0x10]
        jae    L_74c4
L_748a:
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x18], ecx
        lea    edx, [esp + 0xc]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x20], 0
        call    FUN_00647940
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    FUN_00647910
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x20]
        mov    dword ptr [eax + 0x14], ecx
        pop    esi
        add    esp, 0x14
        ret    8
L_74c4:
        mov    edx, dword ptr [esp + 0x20]
        mov    dword ptr [eax + 0x14], edx
        pop    esi
        add    esp, 0x14
        ret    8
    }
}
