/*
 * FUN_0060e41b (extent 0x60e41b-0x60e599) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007f27e0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_006fb7c0(void);

__declspec(naked) void FUN_0060e41b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_e4aa
        lea    ecx, [esi + 0x30]
        call    FUN_0041fd80
        test    eax, eax
        je    L_e4aa
        mov    ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je    L_e446
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_e446:
        push    1
        lea    ecx, [esp + 8]
        push    ecx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esi + 4], 0
        mov    word ptr [esp + 0xc], 6
        mov    word ptr [esp + 0xe], 1
        call    FUN_004d1f80
        mov    ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov    dl, byte ptr [eax]
        mov    byte ptr [esp + 8], dl
        mov    ax, word ptr [eax + 2]
        push    1
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        mov    word ptr [esp + 0x16], ax
        call    FUN_004d9910
        mov    edx, dword ptr [esi]
        add    esp, 0xc
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        lea    ecx, [esp + 0xc]
        call    FUN_004d21c0
L_e4aa:
        mov    eax, 1
        pop    esi
        add    esp, 0x4c
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
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        push    edi
        je    L_e590
        lea    ebx, [esi + 0x30]
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_e590
        mov    ecx, dword ptr [g_007f27e0]
        push    0
        call    FUN_004c3d50
        mov    ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je    L_e503
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [esi + 4], 0
L_e503:
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ecx, dword ptr [eax + 0x10]
        mov    edi, dword ptr [ecx + 0xc]
        test    edi, edi
        je    L_e517
        inc    byte ptr [edi - 1]
L_e517:
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_e52a
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_e52a:
        push    edi
        call    FUN_006fb7c0
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x3c]
        test    eax, eax
        mov    dword ptr [esi + 0x38], eax
        jne    L_e577
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    ebx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esi + 0x40]
        xor    edx, ebx
        mov    eax, dword ptr [edx + 0xc]
        xor    eax, 0x85739531
        test    ecx, ecx
        jne    L_e577
        push    0x76b768
        lea    ecx, [eax + 0xc8]
        mov    dword ptr [eax + 0xc4], 0
        call    FUN_00412780
L_e577:
        test    edi, edi
        je    L_e590
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e590
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e590:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        ret    
    }
}
