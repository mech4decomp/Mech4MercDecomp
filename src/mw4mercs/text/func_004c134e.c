/*
 * FUN_004c134e (extent 0x4c134e-0x4c1464) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b37f8;
extern char   g_007daae8;
extern char   g_007daae9;
extern int    g_007daaec;
extern int    g_007daaf0;
extern int    g_007dab1c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_004c134e(void)
{
    __asm {
        nop    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 4
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 2
        setne    al
        dec    eax
        and    eax, 6
        add    eax, 2
        mov    dword ptr [g_007b37f8], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b37f8]
        xor    eax, eax
        cmp    ecx, 4
        setne    al
        dec    eax
        and    eax, 4
        add    eax, 4
        mov    dword ptr [g_007b37f8], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007dab1c]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    al, byte ptr [g_007daae8]
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
        mov    al, byte ptr [g_007daae8]
        test    al, al
        sete    al
        mov    byte ptr [g_007daae8], al
        ret    
        mov    al, byte ptr [g_007daae9]
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
        mov    al, byte ptr [g_007daae9]
        test    al, al
        sete    al
        mov    byte ptr [g_007daae9], al
        ret    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_1425
        push    0x76d9ec
        call    FUN_0040eda0
        mov    ecx, dword ptr [g_007b37f8]
        push    ecx
        push    0x7714d4
        mov    ecx, eax
        call    FUN_00411d10
L_1425:
        push    esi
        mov    esi, dword ptr [g_007daaf0]
        test    esi, esi
        je    L_1440
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1440:
        mov    edx, dword ptr [g_007daaec]
        push    1
        push    edx
        mov    dword ptr [g_007daaf0], 0
        call    FUN_006f4850
        mov    dword ptr [g_007daaec], 0
        pop    esi
        ret    
    }
}
