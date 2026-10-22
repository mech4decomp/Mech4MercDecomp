/*
 * FUN_004e063c (extent 0x4e063c-0x4e0813) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6c4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004e0240(void);
extern void __cdecl FUN_004e03c0(void);
extern void __cdecl FUN_004e0590(void);
extern void __cdecl FUN_004e0820(void);

__declspec(naked) void FUN_004e063c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_0685
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    ecx, [eax + eax*4]
        dec    eax
        lea    esi, [esi + ecx*8]
        js    L_066f
        push    edi
        lea    edi, [eax + 1]
L_0661:
        sub    esi, 0x28
        mov    ecx, esi
        call    FUN_004e0590
        dec    edi
        jne    L_0661
        pop    edi
L_066f:
        test    bl, 1
        je    L_067d
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_067d:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_0685:
        mov    ecx, esi
        call    FUN_004e0590
        test    bl, 1
        je    L_069a
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_069a:
        mov    eax, esi
        pop    esi
        pop    ebx
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
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [g_007dc6c4]
        call    FUN_00416110
        test    eax, eax
        je    L_06ef
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004e0240
        mov    esi, eax
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
L_06ef:
        xor    esi, esi
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
        push    esi
        push    edi
        push    0x28
        mov    edi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0745
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    0
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004e03c0
        mov    esi, eax
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x14
L_0745:
        xor    esi, esi
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x14
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
        je    L_07a2
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    1
        push    edx
        push    0
        mov    ecx, eax
        call    FUN_004e03c0
        mov    esi, eax
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
L_07a2:
        xor    esi, esi
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
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
        je    L_0802
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x14]
        push    ecx
        push    2
        push    edx
        push    0
        mov    ecx, eax
        call    FUN_004e03c0
        mov    esi, eax
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
L_0802:
        xor    esi, esi
        push    esi
        mov    ecx, edi
        call    FUN_004e0820
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
