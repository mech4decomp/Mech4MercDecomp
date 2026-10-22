/*
 * FUN_006a290e (extent 0x6a290e-0x6a29ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_007704c4;
extern float  g_00799d40;
extern int    g_00799d44;
extern void __cdecl FUN_00663670(void);
extern void __cdecl FUN_00664b20(void);
extern void __cdecl FUN_00664b50(void);
extern void __cdecl FUN_006a49e0(void);
extern void __cdecl FUN_006a55e0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_006a290e(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 8
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    0x41200000
        push    edi
        mov    esi, ecx
        call    FUN_006a55e0
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_2940
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 8]
L_2940:
        fld    dword ptr [esi + 8]
        push    0
        fadd    dword ptr [g_007704c4]
        fstp    qword ptr [esp + 0xc]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_297c
        mov    eax, dword ptr [g_00799d44]
        push    eax
        push    edi
        call    FUN_00663670
        fld    dword ptr [g_0076d064]
        add    esp, 8
        pop    edi
        pop    esi
        add    esp, 8
        ret    4
L_297c:
        fld    dword ptr [g_0076c5b0]
        pop    edi
        pop    esi
        add    esp, 8
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    esi
        call    FUN_006a49e0
        fcomp    dword ptr [g_00799d40]
        add    esp, 4
        fnstsw  ax
        test    ah, 1
        jne    L_29c4
        push    esi
        call    FUN_00664b50
        push    esi
        call    FUN_00664b20
        fld    dword ptr [g_0076d064]
        add    esp, 8
        pop    esi
        ret    4
L_29c4:
        fld    dword ptr [g_0076c5b0]
        pop    esi
        ret    4
    }
}
