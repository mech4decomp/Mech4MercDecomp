/*
 * FUN_004df9d8 (extent 0x4df9d8-0x4dfbac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004dd540(void);
extern void __cdecl FUN_004dd680(void);
extern void __cdecl FUN_004dd8b0(void);

__declspec(naked) void FUN_004df9d8(void)
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
        push    esi
        push    edi
        push    0x28
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fa29
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [esp + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004dd540
        mov    esi, eax
        push    esi
        lea    ecx, [edi + 0x10]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x18
L_fa29:
        xor    esi, esi
        push    esi
        lea    ecx, [edi + 0x10]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x18
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x24
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_fa8c
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [g_007dc6a8]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dd680
        push    esi
        lea    ecx, [edi + 0x10]
        mov    dword ptr [esi], 0x773958
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
L_fa8c:
        xor    esi, esi
        push    esi
        lea    ecx, [edi + 0x10]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
        nop    
        nop    
        fld    dword ptr [ecx + 0x18]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x40
        jne    L_fac0
        mov    eax, dword ptr [edx]
        mov    dword ptr [ecx + 0x18], eax
        mov    eax, dword ptr [esp + 8]
        push    eax
        push    edx
        call    FUN_004dd8b0
L_fac0:
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
        push    esi
        push    edi
        push    0x28
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fb19
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [esp + 0x1c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [esp + 0x1c]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004dd540
        mov    esi, eax
        push    esi
        lea    ecx, [edi + 0x10]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x18
L_fb19:
        xor    esi, esi
        push    esi
        lea    ecx, [edi + 0x10]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x18
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x24
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_fb7c
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [g_007dc6a8]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dd680
        push    esi
        lea    ecx, [edi + 0x10]
        mov    dword ptr [esi], 0x773960
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
L_fb7c:
        xor    esi, esi
        push    esi
        lea    ecx, [edi + 0x10]
        call    FUN_004179b0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [edx]
        cmp    dword ptr [ecx + 0x18], eax
        je    L_fba9
        mov    dword ptr [ecx + 0x18], eax
        mov    eax, dword ptr [esp + 8]
        push    eax
        push    edx
        call    FUN_004dd8b0
L_fba9:
        ret    8
    }
}
