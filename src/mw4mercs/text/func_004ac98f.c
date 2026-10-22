/*
 * FUN_004ac98f (extent 0x4ac98f-0x4aca43) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_004ae5a0(void);

__declspec(naked) void FUN_004ac98f(void)
{
    __asm {
        nop    
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
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        lea    eax, [edi + 4]
        push    eax
        lea    ecx, [esi + 4]
        call    FUN_004ae4c0
        mov    al, byte ptr [edi + 0x1c]
        mov    ecx, dword ptr [edi + 0x18]
        mov    edx, dword ptr [edi + 0x14]
        mov    byte ptr [esi + 0x1c], al
        pop    edi
        mov    dword ptr [esi + 0x18], ecx
        mov    dword ptr [esi + 0x14], edx
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, ecx
        push    ebx
        push    edi
        lea    ecx, [esi + 4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea    ecx, [esi + 0x10]
        call    FUN_004addd0
        mov    eax, dword ptr [edi]
        push    1
        add    esi, 0x1c
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        pop    edi
        pop    esi
        pop    ebx
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
    }
}
