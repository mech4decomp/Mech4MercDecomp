/*
 * FUN_005b90ee (extent 0x5b90ee-0x5b92c3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2138;
extern int    g_007f2140;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_005b8eb0(void);
extern void __cdecl FUN_005b9140(void);
extern void __cdecl FUN_005ba7f0(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005b90ee(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x2f0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9132
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2140]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005b9140
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_9132:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005f0740
        xor    ebx, ebx
        lea    edi, [esi + 0x198]
        push    ebx
        mov    ecx, edi
        mov    dword ptr [esi + 0x194], ebx
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x773328
        lea    edi, [esi + 0x1a4]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    edx, [esp + 0x24]
        mov    dword ptr [edi], 0x773328
        push    edx
        lea    ecx, [esi + 0x2dc]
        mov    dword ptr [esi + 0x1b0], ebx
        mov    dword ptr [esi + 0x1b4], ebx
        mov    dword ptr [esi + 0x1b8], ebx
        mov    dword ptr [esi + 0x1bc], ebx
        mov    dword ptr [esi + 0x1c0], ebx
        mov    dword ptr [esi + 0x1c4], ebx
        mov    dword ptr [esi + 0x2d4], ebx
        mov    dword ptr [esi + 0x2d8], ebx
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_005ba7f0
        mov    al, byte ptr [esp + 0x20]
        mov    ecx, dword ptr [g_007f2138]
        mov    dword ptr [esi + 0x2e0], ebx
        mov    byte ptr [esi + 0x2e8], al
        mov    dword ptr [esi + 0x2e8], ebx
        push    ecx
        mov    dword ptr [esi + 0x2e4], ebx
        mov    byte ptr [esi + 0x2ec], bl
        mov    dword ptr [esi], 0x786d14
        mov    dword ptr [esi + 0x17c], ebx
        mov    dword ptr [esi + 0x180], ebx
        mov    dword ptr [esi + 0x190], 0x40000000
        call    FUN_006f4950
        lea    edi, [esi + 0x1d4]
        mov    ebp, 0x20
L_922f:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_9246
        mov    ecx, eax
        call    FUN_005b8eb0
        jmp    L_9248
L_9246:
        xor    eax, eax
L_9248:
        mov    dword ptr [edi], eax
        add    edi, 4
        dec    ebp
        jne    L_922f
        lea    edi, [esi + 0x254]
        mov    ebp, 0x20
L_925b:
        push    0x24
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_9272
        mov    ecx, eax
        call    FUN_005b8eb0
        jmp    L_9274
L_9272:
        xor    eax, eax
L_9274:
        mov    dword ptr [edi], eax
        add    edi, 4
        dec    ebp
        jne    L_925b
        call    FUN_006f49a0
        call    FUN_00415020
        fadd    st(0), st(0)
        pop    edi
        mov    dword ptr [esi + 0x188], 0x447a0000
        fstp    dword ptr [esi + 0x18c]
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
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
        mov    eax, dword ptr [ecx + 0x184]
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
        xor    al, al
        ret    
    }
}
