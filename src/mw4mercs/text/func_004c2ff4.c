/*
 * FUN_004c2ff4 (extent 0x4c2ff4-0x4c306e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daaf4;
extern char   g_007daaf8;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_00415200(void);

__declspec(naked) void FUN_004c2ff4(void)
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
        mov    al, byte ptr [g_007daaf8]
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
        mov    al, byte ptr [g_007daaf8]
        test    al, al
        sete    al
        mov    byte ptr [g_007daaf8], al
        ret    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_3047
        push    0x76d9ec
        call    FUN_0040eda0
        xor    ecx, ecx
        mov    cl, byte ptr [g_007daaf8]
        push    ecx
        push    0x77161c
        mov    ecx, eax
        call    FUN_00411f20
L_3047:
        push    esi
        mov    esi, dword ptr [g_007daaf4]
        test    esi, esi
        je    L_3062
        mov    ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3062:
        mov    dword ptr [g_007daaf4], 0
        pop    esi
        ret    
    }
}
