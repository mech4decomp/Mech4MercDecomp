/*
 * FUN_004eac0d (extent 0x4eac0d-0x4ead82) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076d3c8;
extern float  g_00774600;
extern char   g_007dc7b0;
extern int    g_007dc7b4;
extern int    g_007dc7b8;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_004d5d20(void);

__declspec(naked) void FUN_004eac0d(void)
{
    __asm {
        nop    
        nop    
        nop    
        fld    dword ptr [g_007dc7b4]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x40
        je    L_ac29
        mov    eax, 1
        ret    
L_ac29:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007dc7b4]
        fcomp    dword ptr [g_00774600]
        fnstsw  ax
        test    ah, 0x40
        je    L_ac49
        mov    eax, 1
        ret    
L_ac49:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007dc7b4]
        fcomp    dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 0x40
        je    L_ac69
        mov    eax, 1
        ret    
L_ac69:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007dc7b0]
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
        fld    dword ptr [g_007dc7b4]
        mov    dword ptr [g_007dc7b4], 0x3f800000
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x40
        jne    L_aca7
        mov    dword ptr [g_007dc7b4], 0x3f000000
L_aca7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007dc7b4]
        mov    dword ptr [g_007dc7b4], 0x3f800000
        fcomp    dword ptr [g_00774600]
        fnstsw  ax
        test    ah, 0x40
        jne    L_acd7
        mov    dword ptr [g_007dc7b4], 0x3ea8f5c3
L_acd7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007dc7b4]
        mov    dword ptr [g_007dc7b4], 0x3f800000
        fcomp    dword ptr [g_0076d3c8]
        fnstsw  ax
        test    ah, 0x40
        jne    L_ad07
        mov    dword ptr [g_007dc7b4], 0x3e800000
L_ad07:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007dc7b0]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc7b0], al
        ret    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        push    esi
        je    L_ad5c
        push    0x774554
        call    FUN_0040eda0
        mov    esi, eax
        xor    eax, eax
        mov    al, byte ptr [g_007dc7b0]
        mov    ecx, esi
        push    eax
        push    0x774548
        call    FUN_00411f20
        mov    ecx, dword ptr [g_007dc7b4]
        push    ecx
        push    0x774540
        mov    ecx, esi
        call    FUN_00411dc0
L_ad5c:
        mov    esi, dword ptr [g_007dc7b8]
        test    esi, esi
        je    L_ad76
        mov    ecx, esi
        call    FUN_004d5d20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_ad76:
        mov    dword ptr [g_007dc7b8], 0
        pop    esi
        ret    
    }
}
