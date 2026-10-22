/*
 * FUN_00412f85 (extent 0x412f85-0x41304e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87f8;
extern int    g_007b87fc;
extern int    g_007b8810;
extern int    g_007b8c14;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415560(void);
extern void __cdecl FUN_004155f0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);

__declspec(naked) void FUN_00412f85(void)
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
        mov    eax, dword ptr [g_007b87fc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87fc], eax
        jne    L_2fe6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_2fdc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cde8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87f8], esi
        jmp    L_2fe6
L_2fdc:
        mov    dword ptr [g_007b87f8], 0
L_2fe6:
        mov    ecx, dword ptr [g_007b87f8]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_3024
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00415560
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x1c]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d224
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_3024:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004155f0
        test    byte ptr [esp + 8], 1
        je    L_3048
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3048:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
