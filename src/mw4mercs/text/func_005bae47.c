/*
 * FUN_005bae47 (extent 0x5bae47-0x5baf0d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc8c4;
extern int    g_007f214c;
extern int    g_007f26b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005bae47(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        push    esi
        mov    esi, ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [g_007f26b0]
        push    ecx
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 4]
        call    FUN_00415230
        test    al, al
        je    L_ae9f
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        add    ecx, 0x2a4
        call    FUN_00415ca0
L_ae9f:
        pop    esi
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
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_af01
        mov    eax, dword ptr [g_007dc8c4]
        push    0x5052a0
        push    0x5baf40
        push    0x786f90
        push    1
        push    eax
        push    0x786fb0
        push    0x481
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f214c], esi
        pop    esi
        ret    
L_af01:
        mov    dword ptr [g_007f214c], 0
        pop    esi
        ret    
    }
}
