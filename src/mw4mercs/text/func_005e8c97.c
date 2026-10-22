/*
 * FUN_005e8c97 (extent 0x5e8c97-0x5e8f91) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dc694;
extern int    g_007dc696;
extern int    g_007dd234;
extern int    g_007f257c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_004d62e0(void);
extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_005e8d30(void);
extern void __cdecl FUN_005e8ff0(void);
extern void __cdecl FUN_005e91e0(void);
extern void __cdecl FUN_00621fd0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005e8c97(void)
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
        je    L_8ced
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        mov    ecx, eax
        mov    esi, eax
        call    FUN_005e8ff0
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_8ced:
        push    0x1c8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8d20
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [g_007f257c]
        push    0
        push    edx
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_005e8d30
        mov    esi, eax
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_8d20:
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
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebp
        push    edx
        mov    ecx, esi
        call    FUN_004d9940
        lea    ebx, [esi + 0x174]
        push    0
        mov    ecx, ebx
        call    FUN_0041fc80
        lea    edi, [esi + 0x194]
        push    0
        mov    ecx, edi
        mov    dword ptr [ebx], 0x775540
        call    FUN_0041fc80
        mov    al, byte ptr [ebp + 0x60]
        mov    cx, word ptr [ebp + 0x62]
        mov    edx, dword ptr [g_007dab44]
        mov    dword ptr [edi], 0x773328
        lea    edi, [esi + 0x1b0]
        mov    byte ptr [edi], 0
        mov    word ptr [edi + 2], 0
        mov    dword ptr [esi], 0x7897a8
        mov    word ptr [edi + 2], cx
        mov    ecx, dword ptr [g_007dab40]
        mov    byte ptr [edi], al
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        cmp    byte ptr [ecx + 0x17], 1
        jne    L_8dd5
        mov    edx, dword ptr [eax + 0x20]
        push    1
        push    edi
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x225c]
        push    0x18
        call    FUN_00621fd0
L_8dd5:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        push    edi
        mov    ecx, eax
        call    FUN_004ceeb0
        lea    edx, [ebp + 0x64]
        mov    edi, eax
        push    edx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esi + 0x1b4], edi
        call    FUN_00412570
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [edi + 0x28c]
        call    FUN_00416b60
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_8e41
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8e41
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8e41:
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
        mov    ecx, dword ptr [g_007b8d88]
        mov    eax, dword ptr [g_007b8d90]
        mov    edx, dword ptr [g_007b8d8c]
        lea    edi, [esi + 0x188]
        lea    ebx, [ebp + 0xf0]
        mov    dword ptr [edi], ecx
        mov    cl, byte ptr [ebx]
        mov    dword ptr [edi + 8], eax
        cmp    cl, byte ptr [g_007dc694]
        mov    dword ptr [edi + 4], edx
        jne    L_8e85
        mov    dx, word ptr [ebx + 2]
        cmp    dx, word ptr [g_007dc696]
        je    L_8ee6
L_8e85:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        xor    ecx, ecx
        mov    cl, byte ptr [ebx]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        je    L_8ee6
        push    ebx
        mov    ecx, eax
        call    FUN_004ceeb0
        test    eax, eax
        je    L_8ee6
        lea    ebx, [esi + 0x194]
        push    eax
        mov    ecx, ebx
        call    FUN_0041fcd0
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    edx, [ebp + 0xe4]
        push    edx
        mov    ecx, edi
        call    FUN_0041c830
L_8ee6:
        mov    ecx, dword ptr [ebp + 0xe8]
        mov    eax, dword ptr [ebp + 0xe4]
        mov    edx, dword ptr [ebp + 0xec]
        mov    dword ptr [esi + 0x180], ecx
        mov    ecx, dword ptr [ebp + 0xf8]
        mov    dword ptr [esi + 0x17c], eax
        mov    eax, dword ptr [ebp + 0xf4]
        mov    dword ptr [esi + 0x1a0], ecx
        mov    cl, byte ptr [ebp + 0x104]
        mov    dword ptr [esi + 0x184], edx
        mov    edx, dword ptr [ebp + 0xfc]
        mov    dword ptr [esi + 0x19c], eax
        mov    eax, dword ptr [ebp + 0x100]
        mov    byte ptr [esi + 0x1b8], cl
        mov    ecx, dword ptr [ebp + 0x110]
        mov    dword ptr [esi + 0x1a4], edx
        mov    edx, dword ptr [ebp + 0x108]
        mov    dword ptr [esi + 0x1a8], eax
        mov    eax, dword ptr [ebp + 0x10c]
        mov    dword ptr [esi + 0x1c0], ecx
        mov    ecx, esi
        mov    dword ptr [esi + 0x1ac], edx
        mov    dword ptr [esi + 0x1bc], eax
        mov    dword ptr [esi + 0x168], 0
        call    FUN_005e91e0
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x10
    }
}
