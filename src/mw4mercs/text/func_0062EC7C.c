/*
 * FUN_0062EC7C (794 B) - in-.text data block transcription. Reads a
 * descriptor object, calls a virtual method, and builds two string
 * results (via 0x411bf0 format calls) into a buffer at esi+0x10/0x12
 * and esi+0x294/0x296, with a shared cleanup path.
 *
 * CFLAGS: /O1
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;
extern int g_007db0b0;

extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412bf0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041dec0(void);

__declspec(naked) void FUN_0062EC7C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub     esp, 0xb8
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc8]
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov     edi, dword ptr [edi + 4]
        push    0x7723e8
        mov     ecx, edi
        mov     esi, eax
        call    FUN_0040ed60
        mov     cx, word ptr [g_007db0ac]
        mov     dx, word ptr [g_007db0ae]
        mov     ebx, eax
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        mov     word ptr [esi + 0x10], cx
        push    0x776478
        mov     ecx, ebx
        mov     word ptr [esi + 0x12], dx
        call    FUN_00411bf0
        test    al, al
        je      L_ee15
        mov     ecx, dword ptr [esp + 0x14]
        push    0
        push    ecx
        lea     ecx, [esp + 0x64]
        call    FUN_0041de80
        mov     edx, dword ptr [edi]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0xc]
        push    0x78d274
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_ed2f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_ed2f
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ed2f:
        mov     ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        je      L_ed7b
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        jbe     L_ed7b
        lea     ecx, [esp + 0x18]
        call    FUN_004d24f0
        test    al, al
        je      L_ed7b
        lea     ecx, [esp + 0x18]
        call    FUN_004d2630
        test    al, al
        jne     L_edd6
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004d2840
        jmp     L_edd6
L_ed7b:
        lea     ecx, [esp + 0x8c]
        call    FUN_00412b30
        lea     eax, [esp + 0x5c]
        push    eax
        lea     ecx, [esp + 0x90]
        call    FUN_00412bf0
        lea     ecx, [esp + 0x8c]
        push    ecx
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004d2680
        lea     ecx, [esp + 0x18]
        call    FUN_004d2630
        test    al, al
        jne     L_edca
        mov     eax, dword ptr [g_007db0b0]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004d2840
L_edca:
        lea     ecx, [esp + 0x8c]
        call    FUN_00412b60
L_edd6:
        mov     cx, word ptr [esp + 0x58]
        mov     dx, word ptr [esp + 0x5a]
        mov     word ptr [esi + 0x10], cx
        lea     ecx, [esp + 0x18]
        mov     word ptr [esi + 0x12], dx
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_ee0c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_ee0c
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ee0c:
        lea     ecx, [esp + 0x5c]
        call    FUN_0041dec0
L_ee15:
        mov     cx, word ptr [g_007db0ae]
        mov     ax, word ptr [g_007db0ac]
        push    0
        lea     edx, [esp + 0x18]
        push    edx
        mov     word ptr [esi + 0x296], cx
        push    0x78d264
        mov     ecx, ebx
        mov     word ptr [esi + 0x294], ax
        call    FUN_00411bf0
        test    al, al
        je      L_ef8c
        mov     eax, dword ptr [esp + 0x14]
        push    0
        push    eax
        lea     ecx, [esp + 0x64]
        call    FUN_0041de80
        mov     ecx, dword ptr [edi]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     edx, dword ptr [esp + 0xc]
        push    0x78d250
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_ee9f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_ee9f
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ee9f:
        mov     eax, dword ptr [esp + 0xc]
        push    0
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        je      L_eeeb
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        jbe     L_eeeb
        lea     ecx, [esp + 0x18]
        call    FUN_004d24f0
        test    al, al
        je      L_eeeb
        lea     ecx, [esp + 0x18]
        call    FUN_004d2630
        test    al, al
        jne     L_ef47
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004d2840
        jmp     L_ef47
L_eeeb:
        lea     ecx, [esp + 0x8c]
        call    FUN_00412b30
        lea     edx, [esp + 0x5c]
        push    edx
        lea     ecx, [esp + 0x90]
        call    FUN_00412bf0
        lea     eax, [esp + 0x8c]
        push    eax
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004d2680
        lea     ecx, [esp + 0x18]
        call    FUN_004d2630
        test    al, al
        jne     L_ef3b
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004d2840
L_ef3b:
        lea     ecx, [esp + 0x8c]
        call    FUN_00412b60
L_ef47:
        mov     cx, word ptr [esp + 0x5a]
        mov     ax, word ptr [esp + 0x58]
        mov     word ptr [esi + 0x296], cx
        lea     ecx, [esp + 0x18]
        mov     word ptr [esi + 0x294], ax
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_ef83
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_ef83
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_ef83:
        lea     ecx, [esp + 0x5c]
        call    FUN_0041dec0
L_ef8c:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xb8
        ret
    }
}
