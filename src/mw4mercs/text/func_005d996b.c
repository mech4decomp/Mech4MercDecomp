/*
 * FUN_005d996b (extent 0x5d996b-0x5d9bd2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2440;
extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005d92a0(void);
extern void __cdecl FUN_005d9330(void);
extern void __cdecl FUN_005d93b0(void);
extern void __cdecl FUN_005d93e0(void);
extern void __cdecl FUN_005d9cb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d996b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [ecx + 0x10]
        mov    eax, esi
        test    eax, eax
        push    edi
        mov    dword ptr [esp + 8], 0
        je    L_998f
L_9984:
        inc    dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x20]
        test    eax, eax
        jne    L_9984
L_998f:
        mov    edi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        test    esi, esi
        je    L_99b3
L_99a5:
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx]
        mov    esi, dword ptr [esi + 0x20]
        test    esi, esi
        jne    L_99a5
L_99b3:
        pop    edi
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        mov    eax, dword ptr [ebx]
        push    ebp
        push    edi
        mov    ebp, ecx
        push    4
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [g_007f2464]
        push    edx
        call    FUN_006f4950
        mov    eax, dword ptr [esp + 0x10]
        xor    edi, edi
        test    eax, eax
        jle    L_9a2a
        push    esi
L_99ee:
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9a0e
        mov    ecx, dword ptr [g_007f2440]
        push    ecx
        mov    ecx, eax
        call    FUN_005d93b0
        mov    esi, eax
        jmp    L_9a10
L_9a0e:
        xor    esi, esi
L_9a10:
        mov    edx, dword ptr [esi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 4]
        push    esi
        mov    ecx, ebp
        call    FUN_005d9cb0
        mov    eax, dword ptr [esp + 0x14]
        inc    edi
        cmp    edi, eax
        jl    L_99ee
        pop    esi
L_9a2a:
        call    FUN_006f49a0
        pop    edi
        pop    ebp
        pop    ebx
        ret    4
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
        je    L_9aa2
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        mov    edx, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        mov    edx, dword ptr [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        mov    edx, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_005d92a0
        mov    esi, eax
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x20
L_9aa2:
        xor    esi, esi
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x20
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
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_9b38
        mov    ecx, dword ptr [esp + 0x38]
        mov    edx, dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        sub    esp, 0xc
        lea    edx, [esp + 0x3c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [esp + 0x3c]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, dword ptr [esp + 0x38]
        mov    edx, dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x30]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005d9330
        mov    esi, eax
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        mov    eax, esi
        pop    edi
        pop    esi
        ret    0x30
L_9b38:
        xor    esi, esi
        call    FUN_006f49a0
        push    esi
        mov    ecx, edi
        call    FUN_005d9cb0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x30
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
    }
}
