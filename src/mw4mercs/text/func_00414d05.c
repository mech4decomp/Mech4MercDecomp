/*
 * FUN_00414d05 (extent 0x414d05-0x414f08) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d3c8;
extern float  g_0076d3cc;
extern float  g_0076d3d0;
extern int    g_007b2208;
extern int    g_007b87f4;
extern int    g_007b8810;
extern int    g_007b8814;
extern int    g_00858988;
extern int    g_0085898c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412520(void);
extern void __cdecl FUN_00412ea0(void);
extern void __cdecl FUN_00414f40(void);
extern void __cdecl FUN_00415140(void);
extern void __cdecl FUN_00415340(void);
extern void __cdecl FUN_00417400(void);
extern void __cdecl FUN_00417860(void);
extern void __cdecl FUN_0041af60(void);
extern void __cdecl FUN_0041de00(void);
extern void __cdecl FUN_0041e660(void);
extern void __cdecl FUN_0041fbf0(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_00414d05(void)
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
        mov    ecx, dword ptr [g_007b2208]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b2208]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b2208]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b2208]
        xor    eax, eax
        cmp    ecx, 3
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b2208]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b2208], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b2208], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b2208], 2
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b2208], 3
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b2208], 4
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, 1
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
        fld    dword ptr [g_00858988]
        fcomp    dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 0x40
        je    L_4dd9
        mov    eax, 1
        ret    
L_4dd9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_00858988]
        fcomp    dword ptr [g_0076d3cc]
        fnstsw  ax
        test    ah, 0x40
        je    L_4df9
        mov    eax, 1
        ret    
L_4df9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_00858988]
        fcomp    dword ptr [g_0076d3d0]
        fnstsw  ax
        test    ah, 0x40
        je    L_4e19
        mov    eax, 1
        ret    
L_4e19:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_0085898c], 0x3e800000
        mov    dword ptr [g_00858988], 0x3e800000
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
        mov    dword ptr [g_0085898c], 0x3ccccccd
        mov    dword ptr [g_00858988], 0x3ccccccd
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
        mov    dword ptr [g_0085898c], 0x3b23d70a
        mov    dword ptr [g_00858988], 0x3b23d70a
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
        push    esi
        call    FUN_0041af60
        call    FUN_0041de00
        call    FUN_0041e660
        call    FUN_00414f40
        mov    esi, dword ptr [g_007b87f4]
        test    esi, esi
        je    L_4eaf
        mov    ecx, esi
        call    FUN_00412ea0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_4eaf:
        mov    dword ptr [g_007b87f4], 0
        call    FUN_00417400
        call    FUN_00417860
        call    FUN_0041fbf0
        call    FUN_00415340
        call    FUN_00415140
        call    FUN_00412520
        mov    eax, dword ptr [g_007b8810]
        push    1
        push    eax
        call    FUN_006f4850
        mov    ecx, dword ptr [g_007b8814]
        push    1
        push    ecx
        mov    dword ptr [g_007b8810], 0
        call    FUN_006f4850
        mov    dword ptr [g_007b8814], 0
        pop    esi
        ret    
    }
}
