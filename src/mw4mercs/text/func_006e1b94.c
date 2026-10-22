/*
 * FUN_006e1b94 (extent 0x6e1b94-0x6e1c65) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00840850;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_006e21d0(void);
extern void __cdecl FUN_006e2470(void);
extern void __cdecl FUN_006e2460(void);

__declspec(naked) void FUN_006e1b94(void)
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
        mov    eax, dword ptr [ecx + 0x38]
        push    eax
        call    FUN_00412ab0
        add    esp, 4
        ret    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x79ecf8
        mov    eax, dword ptr [esi + 0x38]
        test    eax, eax
        je    L_1bd3
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1bd3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_1bd3:
        test    byte ptr [esp + 8], 1
        mov    dword ptr [esi], 0x79ecec
        je    L_1be9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1be9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        mov    ecx, dword ptr [g_00840850]
        test    ecx, ecx
        je    L_1c04
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006e21d0
L_1c04:
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
        mov    ecx, dword ptr [g_00840850]
        test    ecx, ecx
        je    L_1c1f
        jmp    FUN_006e2460
L_1c1f:
        xor    eax, eax
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
        nop    
        mov    ecx, dword ptr [g_00840850]
        test    ecx, ecx
        je    L_1c49
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006e2470
L_1c49:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        xor    eax, eax
        ret    4
    }
}
