/*
 * FUN_004bc374 (extent 0x4bc374-0x4bc504) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00770120;
extern float  g_00771338;
extern float  g_0077133c;
extern int    g_007daa0c;
extern int    g_007daac0;
extern int    g_007daac4;
extern int    g_007daac8;
extern char   g_007daacc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004bc374(void)
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
        fld    dword ptr [g_007daac8]
        fcomp    dword ptr [g_00771338]
        fnstsw  ax
        test    ah, 0x40
        je    L_c399
        mov    eax, 1
        ret    
L_c399:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007daac8]
        fcomp    dword ptr [g_0077133c]
        fnstsw  ax
        test    ah, 0x40
        je    L_c3b9
        mov    eax, 1
        ret    
L_c3b9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007daac8]
        fcomp    dword ptr [g_00770120]
        fnstsw  ax
        test    ah, 0x40
        je    L_c3d9
        mov    eax, 1
        ret    
L_c3d9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007daac8]
        mov    dword ptr [g_007daac8], 0
        fcomp    dword ptr [g_00771338]
        fnstsw  ax
        test    ah, 0x40
        jne    L_c407
        mov    dword ptr [g_007daac8], 0x441c4000
L_c407:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007daac8]
        mov    dword ptr [g_007daac8], 0
        fcomp    dword ptr [g_0077133c]
        fnstsw  ax
        test    ah, 0x40
        jne    L_c437
        mov    dword ptr [g_007daac8], 0x451c4000
L_c437:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007daac8]
        mov    dword ptr [g_007daac8], 0
        fcomp    dword ptr [g_00770120]
        fnstsw  ax
        test    ah, 0x40
        jne    L_c467
        mov    dword ptr [g_007daac8], 0x461c4000
L_c467:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007daacc]
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
        mov    al, byte ptr [g_007daacc]
        test    al, al
        sete    al
        test    al, al
        mov    byte ptr [g_007daacc], al
        je    L_c49d
        mov    dword ptr [g_007daa0c], 1
L_c49d:
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_c4c5
        push    0x76d9ec
        call    FUN_0040eda0
        mov    ecx, dword ptr [g_007daac8]
        push    ecx
        push    0x771334
        mov    ecx, eax
        call    FUN_00411dc0
L_c4c5:
        push    esi
        mov    esi, dword ptr [g_007daac4]
        test    esi, esi
        je    L_c4e0
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_c4e0:
        mov    edx, dword ptr [g_007daac0]
        push    1
        push    edx
        mov    dword ptr [g_007daac4], 0
        call    FUN_006f4850
        mov    dword ptr [g_007daac0], 0
        pop    esi
        ret    
    }
}
