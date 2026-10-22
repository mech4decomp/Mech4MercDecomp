/*
 * FUN_004e44be (extent 0x4e44be-0x4e454e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004e2ee0(void);

__declspec(naked) void FUN_004e44be(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    esi
        push    edi
        push    eax
        push    edx
        call    FUN_004e2ee0
        lea    ecx, [eax + 0x15c]
        lea    esi, [eax + 0x154]
        call    FUN_00417a40
        mov    ecx, esi
        mov    edi, eax
        call    FUN_00417a40
        add    eax, edi
        pop    edi
        pop    esi
        ret    8
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_452b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x773ef8
        pop    esi
        ret    
L_452b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_4548
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_4548:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
