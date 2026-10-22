/*
 * FUN_004e0112 (extent 0x4e0112-0x4e01e3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dc130;
extern int    g_007dc6c0;
extern int    g_007dc6c4;
extern int    g_007dc6c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004e0112(void)
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
        nop    
        push    0x7739f4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0132
        int 3    
L_0132:
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
        push    0x773a24
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0152
        int 3    
L_0152:
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
        push    edi
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        xor    edi, edi
        add    esp, 4
        cmp    esi, edi
        je    L_019a
        mov    eax, dword ptr [g_007dc130]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        push    0x773a64
        push    ecx
        push    edx
        push    0x24
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc6c4], esi
        jmp    L_01a0
L_019a:
        mov    dword ptr [g_007dc6c4], edi
L_01a0:
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_01d4
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773a54
        push    0x1c2
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc6c0], edi
        pop    edi
        mov    dword ptr [g_007dc6c8], eax
        pop    esi
        ret    
L_01d4:
        mov    dword ptr [g_007dc6c8], edi
        mov    dword ptr [g_007dc6c0], edi
        pop    edi
        pop    esi
        ret    
    }
}
