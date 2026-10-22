/*
 * FUN_005ece57 (extent 0x5ece57-0x5ed083) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dd234;
extern int    g_007f25a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_004d62e0(void);
extern void __cdecl FUN_004fa6d0(void);
extern void __cdecl FUN_005ecef0(void);
extern void __cdecl FUN_005ed0e0(void);
extern void __cdecl FUN_005ee4c0(void);
extern void __cdecl FUN_00621fd0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005ece57(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edi, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        lea    edx, [edi + 0x54]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004d62e0
        test    eax, eax
        je    L_cead
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        mov    ecx, eax
        mov    esi, eax
        call    FUN_005ed0e0
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_cead:
        push    0x258
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_cee0
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f25a0]
        push    0
        push    edx
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_005ecef0
        mov    esi, eax
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_cee0:
        xor    esi, esi
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov    ecx, esi
        call    FUN_004fa6d0
        lea    ebp, [esi + 0x210]
        xor    ebx, ebx
        push    ebx
        mov    ecx, ebp
        call    FUN_0041fc80
        mov    eax, dword ptr [edi + 0x90]
        mov    edx, dword ptr [edi + 0x9c]
        mov    dword ptr [esi + 0x228], eax
        mov    eax, dword ptr [edi + 0x94]
        mov    dword ptr [esi + 0x22c], edx
        mov    edx, dword ptr [edi + 0xb0]
        mov    dword ptr [esi + 0x224], eax
        mov    eax, dword ptr [esi + 0xd8]
        mov    dword ptr [ebp], 0x77ceac
        add    eax, 0x20
        mov    dword ptr [esi + 0x238], edx
        mov    edx, dword ptr [eax + 0xc]
        lea    ecx, [esi + 0x230]
        mov    byte ptr [ecx], bl
        mov    word ptr [ecx + 2], bx
        mov    dword ptr [esi + 0x23c], ebx
        mov    dword ptr [esi], 0x789d0c
        mov    dword ptr [esi + 0x218], edx
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        lea    ebp, [edi + 0x98]
        mov    dword ptr [esi + 0x240], ebx
        mov    dword ptr [esi + 0x21c], edx
        mov    dl, byte ptr [ebp]
        mov    dword ptr [esi + 0x220], eax
        mov    ax, word ptr [ebp + 2]
        mov    byte ptr [ecx], dl
        mov    edx, dword ptr [g_007dab44]
        mov    word ptr [ecx + 2], ax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        cmp    byte ptr [edx + 0x17], 1
        jne    L_cfe2
        mov    eax, dword ptr [eax + 0x20]
        push    1
        push    ecx
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x225c]
        push    0x18
        call    FUN_00621fd0
L_cfe2:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ebp]
        xor    ecx, 0x85739531
        push    edx
        call    FUN_004cdfa0
        push    ebp
        mov    ecx, eax
        call    FUN_004ceeb0
        lea    ecx, [esi + 0x78]
        mov    dword ptr [esi + 0x234], eax
        mov    dword ptr [esi + 0x13c], eax
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    cx, word ptr [eax + 0x68]
        add    eax, 0x68
        cmp    cx, word ptr [g_007db0ac]
        jne    L_d03d
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_d044
L_d03d:
        mov    ecx, esi
        call    FUN_005ee4c0
L_d044:
        mov    eax, dword ptr [edi + 0xa0]
        mov    ecx, dword ptr [edi + 0xa4]
        mov    edx, dword ptr [edi + 0xa8]
        mov    dword ptr [esi + 0x248], eax
        mov    eax, dword ptr [edi + 0xac]
        pop    edi
        mov    dword ptr [esi + 0x254], eax
        mov    dword ptr [esi + 0x244], ebx
        mov    dword ptr [esi + 0x24c], ecx
        mov    dword ptr [esi + 0x250], edx
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
    }
}
