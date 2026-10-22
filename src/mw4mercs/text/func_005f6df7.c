/*
 * FUN_005f6df7 (extent 0x5f6df7-0x5f6eda) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f25c8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_004fca80(void);
extern void __cdecl FUN_004fd360(void);
extern void __cdecl FUN_005f6e30(void);

__declspec(naked) void FUN_005f6df7(void)
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
        push    0x17c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6e2c
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f25c8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005f6e30
        ret    
L_6e2c:
        xor    eax, eax
        ret    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_004d9940
        mov    ecx, dword ptr [esi + 0xe0]
        test    ecx, ecx
        mov    ebx, 1
        mov    dword ptr [esi], 0x78a85c
        mov    byte ptr [esi + 0x168], bl
        mov    dword ptr [esi + 0x178], 9
        je    L_6e79
        mov    edx, dword ptr [ecx]
        push    ebx
        call    dword ptr [edx]
L_6e79:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        cmp    dword ptr [ecx + 0x5c], ebx
        mov    dword ptr [esi + 0xe0], 0
        je    L_6ed3
        mov    edx, dword ptr [esi + 0x2c]
        push    edi
        mov    edi, dword ptr [eax + 0x10]
        lea    ebx, [esi + 0x2c]
        xor    edi, 0x85739531
        push    edx
        mov    ecx, edi
        call    FUN_004fca80
        push    0
        push    eax
        mov    ecx, edi
        call    FUN_004fd360
        push    0
        mov    ecx, ebx
        call    FUN_00412780
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
L_6ed3:
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0x10
    }
}
