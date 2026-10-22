/*
 * FUN_004aca04 (extent 0x4aca04-0x4acbac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004add70(void);
extern void __cdecl FUN_004addb0(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004ae560(void);

__declspec(naked) void FUN_004aca04(void)
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
        mov    eax, dword ptr [ecx]
        cmp    eax, 4
        je    L_ca3d
        cmp    eax, 5
        je    L_ca3d
        cmp    eax, 6
        je    L_ca3d
        cmp    eax, 7
        je    L_ca3d
        cmp    eax, 8
        je    L_ca3d
        cmp    eax, 9
        je    L_ca3d
        cmp    eax, 0xb
        je    L_ca3d
        cmp    eax, 0xa
        je    L_ca3d
        xor    eax, eax
        ret    
L_ca3d:
        mov    eax, 1
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        add    eax, -4
        cmp    eax, 7
        push    edi
        ja    L_cba4
        jmp    dword ptr [eax*4 + 0x4acbac]
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004ae560
        push    edi
        lea    ecx, [esi + 0x10]
        call    FUN_004addb0
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x1c
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        pop    edi
        pop    esi
        ret    4
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004ae560
        push    edi
        lea    ecx, [esi + 0x10]
        call    FUN_004ae560
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x1c
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004ae560
        push    edi
        lea    ecx, [esi + 0x10]
        call    FUN_004adf40
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x24
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        pop    edi
        pop    esi
        ret    4
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004add70
        push    edi
        lea    ecx, [esi + 0xc]
        call    FUN_004ae560
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x18
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004add70
        push    edi
        lea    ecx, [esi + 0xc]
        call    FUN_004addb0
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x18
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        pop    edi
        pop    esi
        ret    4
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004add70
        push    edi
        lea    ecx, [esi + 0xc]
        call    FUN_004adf40
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x20
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004adf40
        push    edi
        lea    ecx, [esi + 0x18]
        call    FUN_004addb0
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x24
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        pop    edi
        pop    esi
        ret    4
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004adf40
        push    edi
        lea    ecx, [esi + 0x18]
        call    FUN_004adf40
        mov    edx, dword ptr [edi]
        push    1
        add    esi, 0x2c
        push    esi
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
L_cba4:
        pop    edi
        pop    esi
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x004ACBAC (0 relocated pointers)
    }
}
