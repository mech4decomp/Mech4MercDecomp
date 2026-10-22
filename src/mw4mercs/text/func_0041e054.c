/*
 * FUN_0041e054 (extent 0x41e054-0x41e122) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041e720(void);
extern void __cdecl FUN_006fc640(void);

__declspec(naked) void FUN_0041e054(void)
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
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx + 0x10]
        add    eax, edx
        cmp    eax, dword ptr [ecx + 0x18]
        mov    dword ptr [ecx + 0x14], eax
        jbe    L_e074
        mov    dword ptr [ecx + 0x18], eax
L_e074:
        cmp    dword ptr [ecx + 0x20], 1
        jne    L_e086
        push    eax
        mov    eax, dword ptr [ecx + 0x28]
        push    0
        push    eax
        call    FUN_006fc640
L_e086:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    edx, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [esi + 0x18]
        add    edx, eax
        mov    eax, edx
        cmp    eax, ecx
        mov    dword ptr [esi + 0x14], edx
        jbe    L_e0ab
        mov    dword ptr [esi + 0x18], eax
L_e0ab:
        cmp    dword ptr [esi + 0x20], 1
        jne    L_e0bd
        mov    ecx, dword ptr [esi + 0x28]
        push    eax
        push    0
        push    ecx
        call    FUN_006fc640
L_e0bd:
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    edx, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [esi + 0x18]
        sub    edx, eax
        mov    eax, edx
        cmp    eax, ecx
        mov    dword ptr [esi + 0x14], edx
        jbe    L_e0eb
        mov    dword ptr [esi + 0x18], eax
L_e0eb:
        cmp    dword ptr [esi + 0x20], 1
        jne    L_e0fd
        mov    ecx, dword ptr [esi + 0x28]
        push    eax
        push    0
        push    ecx
        call    FUN_006fc640
L_e0fd:
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_0041e720
        ret    8
    }
}
