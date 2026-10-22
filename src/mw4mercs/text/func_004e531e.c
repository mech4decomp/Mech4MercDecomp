/*
 * FUN_004e531e (extent 0x4e531e-0x4e53db) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007dc740;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004e4d30(void);
extern void __cdecl FUN_004e4d70(void);
extern void __cdecl FUN_004e4e00(void);
extern void __cdecl FUN_004e50b0(void);

__declspec(naked) void FUN_004e531e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004e4e00
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004e50b0
        ret    4
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        mov    eax, dword ptr [esp + 0x50]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004e4d30
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esi], 0x773fd4
        mov    dword ptr [esp + 0x10], 0xbf800000
        mov    dword ptr [esp + 0xc], 0xbf800000
        mov    dword ptr [esp + 8], 0xbf800000
        call    FUN_004e50b0
        fld    dword ptr [esp + 0x48]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5397
        lea    edx, [esp + 4]
        push    edx
        mov    ecx, esi
        call    FUN_004e4e00
L_5397:
        mov    eax, esi
        pop    esi
        add    esp, 0x4c
        ret    4
        push    esi
        mov    esi, ecx
        call    FUN_004e4d70
        test    byte ptr [esp + 8], 1
        je    L_53b8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_53b8:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        __emit 0xE9  // jmp L_53d0 (rel32; MSVC6 emits eb rel8 for this short target)
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
L_53d0:
        mov    dword ptr [g_007dc740], 0x7da968
        ret    
    }
}
