/*
 * FUN_004f05b5 (extent 0x4f05b5-0x4f0696) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007dc828;
extern int    g_007dc82a;
extern int    g_007dc82c;
extern int    g_007dc830;
extern int    g_007dc83c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416280(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f05b5(void)
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_05eb
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x774d10
        pop    esi
        ret    
L_05eb:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        /* __emit: MSVC6 collapses near-jmp E9 0B 00 00 00 to short EB 0B; force 5-byte form */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_0600:
        mov    word ptr [g_007dc828], 0xffff
        mov    word ptr [g_007dc82a], 0
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0651
        mov    ecx, dword ptr [g_007dc83c]
        push    0
        push    0
        push    ecx
        push    0x774d54
        push    0x21e
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc82c], eax
        jmp    L_065b
L_0651:
        mov    dword ptr [g_007dc82c], 0
L_065b:
        push    esi
        push    0x14
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_068a
        push    1
        push    0
        push    0x1003
        mov    ecx, esi
        call    FUN_00416280
        mov    dword ptr [esi], 0x774d2c
        mov    dword ptr [g_007dc830], esi
        pop    esi
        ret    
L_068a:
        mov    dword ptr [g_007dc830], 0
        pop    esi
        ret    
    }
}
