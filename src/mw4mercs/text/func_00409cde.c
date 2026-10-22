/*
 * FUN_00409cde (extent 0x409cde-0x409df4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b87c8;
extern int    g_007b87cc;
extern int    g_007b8810;
extern int    g_007b8c14;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416320(void);
extern void __cdecl FUN_00416990(void);

__declspec(naked) void FUN_00409cde(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b87cc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b87cc], eax
        jne    L_9d36
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_9d2c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ce98
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b87c8], esi
        jmp    L_9d36
L_9d2c:
        mov    dword ptr [g_007b87c8], 0
L_9d36:
        mov    ecx, dword ptr [g_007b87c8]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_9d61
        xor    ecx, ecx
        mov    cl, byte ptr [edi + 8]
        push    ecx
        push    0
        mov    ecx, esi
        call    FUN_00416990
        pop    edi
        mov    dword ptr [esi], 0x76ce6c
        mov    eax, esi
        pop    esi
        ret    
L_9d61:
        pop    edi
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax]
        xor    edx, edx
        div    dword ptr [ecx + 0x10]
        mov    eax, edx
        ret    4
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0x18
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_9dbd
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [eax], 0x76ce2c
        pop    esi
        ret    
L_9dbd:
        xor    eax, eax
        pop    esi
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
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x76ce04
        call    FUN_00416320
        test    byte ptr [esp + 8], 1
        je    L_9dee
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9dee:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
