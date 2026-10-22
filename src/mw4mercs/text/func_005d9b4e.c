/*
 * FUN_005d9b4e (extent 0x5d9b4e-0x5d9c62) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005d93e0(void);
extern void __cdecl FUN_005d9470(void);
extern void __cdecl FUN_005d9cb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d9b4e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007f2464]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9bbc
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_005d93e0
        mov    esi, eax
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x28
L_9bbc:
        xor    esi, esi
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x28
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
        mov    eax, dword ptr [g_007f2464]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9c4c
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_005d9470
        mov    esi, eax
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x28
L_9c4c:
        xor    esi, esi
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x28
    }
}
