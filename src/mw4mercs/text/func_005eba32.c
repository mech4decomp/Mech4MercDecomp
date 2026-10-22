/*
 * FUN_005eba32 (extent 0x5eba32-0x5ebb1d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2588;
extern int    g_007f258c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416c80(void);
extern void __cdecl FUN_00416d40(void);
extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_005eba90(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005eba32(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x168
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ba82
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2588]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005eba90
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_ba82:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        mov    eax, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x24]
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0x28]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_004d9940
        mov    ecx, dword ptr [g_007f258c]
        push    ecx
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esi], 0x789a7c
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x789a3c
        call    FUN_00415cc0
        cmp    eax, 0x32
        jb    L_baef
        lea    ecx, [esp + 0xc]
        call    FUN_00416c80
        lea    ecx, [esp + 0xc]
        call    FUN_00416d40
L_baef:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 4]
        mov    ecx, dword ptr [g_007f258c]
        lea    edx, [esp + 4]
        push    edx
        push    esi
        call    FUN_00416a90
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        mov    eax, esi
        pop    esi
        add    esp, 0x1c
        ret    0x10
    }
}
