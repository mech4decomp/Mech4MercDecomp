/*
 * FUN_005e95c0 (684 B) — __thiscall (ECX = this), RET 0x1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_00766cb0(void *a, void *b);
extern void __stdcall FUN_0040c410(void *param);
extern void __stdcall FUN_00421100(void *param);
extern void __stdcall FUN_0040ca40(void *a, void *b);
extern void __stdcall FUN_0040cbb0(void *a, void *b);
extern int __stdcall FUN_004e27b0(void *param);
extern void __stdcall FUN_00502ef0(void *a, void *b, int c);
extern void __stdcall FUN_004d1f80(void *a, int b);
extern void *__stdcall FUN_004da920(void *param);
extern void __stdcall FUN_0041fde0(void *a, int b, int c, int d);
extern void __stdcall FUN_005347f0(int a, int b, int c, void *d, int e, void *f, void *g, int h, int i, int j, int k);
extern void __stdcall FUN_00767400(void *param);
extern void __stdcall FUN_0041e690(void *a, void *b, int c);
extern void *__stdcall FUN_004cec10(void);
extern void *__stdcall FUN_004d9910(void *a, void *b, int c);
extern void __stdcall FUN_006fab90(void *param);
extern void __stdcall FUN_0041e710(void *param);
extern void __stdcall FUN_004d21c0(void *param);

__declspec(naked) void __stdcall FUN_005e95c0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076c5b0;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x178
        mov     eax, dword ptr [ecx + 0x78]
        mov     dword ptr [ebp - 0x1c], ecx
        push    ebx
        add     ecx, 0x78
        push    esi
        call    dword ptr [eax + 0x4]
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov     esi, eax
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x1c]
        xor     eax, 0x85739531
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x2c], 0x0
        mov     dword ptr [ebp - 0x28], 0x3f800000
        mov     dword ptr [ebp - 0x24], 0x0
        mov     ecx, dword ptr [eax + 0x34]
        lea     edx, [ebp - 0xc]
        push    edx
        lea     eax, [ebp - 0x2c]
        mov     dword ptr [ebp - 0x20], ecx
        push    eax
        lea     ecx, [ebp + 0x8]
        call    FUN_00766cb0
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0xc]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_9864
        fld     dword ptr [ebp - 0x4]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_9864
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ebp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jz      L_9864
        lea     ecx, [ebp + 0x8]
        push    ecx
        lea     ecx, [ebp - 0x48]
        call    FUN_0040c410
        lea     edx, [ebp + 0x14]
        push    edx
        lea     ecx, [ebp - 0x3c]
        call    FUN_00421100
        fld     dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x4]
        push    ecx
        lea     ecx, [ebp - 0x3c]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [ebp - 0x30], eax
        call    FUN_0040ca40
        lea     edx, [ebp - 0x54]
        push    edx
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0x18]
        call    FUN_0040cbb0
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x1c]
        lea     edx, [ebp - 0x18]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004e27b0
        cmp     eax, -0x1
        jz      L_9864
        mov ecx, dword ptr [DAT_007db0ac]
        cmp     word ptr [esi + 0x1c], cx
        mov dx, word ptr [DAT_007db0ae]
        lea     eax, [esi + 0x1c]
        mov     word ptr [ebp - 0x4], cx
        mov     word ptr [ebp - 0x2], dx
        jnz     L_96EC
        cmp     word ptr [eax + 0x2], dx
        jz      L_9708
L_96EC:
        push    0x2
        push    eax
        lea     eax, [ebp - 0x4]
        push    eax
        call    FUN_00502ef0
        mov ecx, dword ptr [DAT_007db0ac]
        mov dx, word ptr [DAT_007db0ae]
        add     esp, 0xc
L_9708:
        cmp     word ptr [ebp - 0x4], cx
        jnz     L_9718
        cmp     word ptr [ebp - 0x2], dx
        jz      L_9864
L_9718:
        push    edi
        push    0x1
        lea     ecx, [ebp - 0x4]
        push    ecx
        lea     ecx, [ebp - 0xe8]
        call    FUN_004d1f80
        lea     edx, [ebp - 0x4]
        push    edx
        call    FUN_004da920
        add     esp, 0x4
        push    0x2
        push    0x0
        mov     ebx, eax
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [ebp - 0x84]
        push    0x1
        lea     eax, [ebp - 0x2c]
        rep     movsd
        push    eax
        lea     ecx, [ebp - 0x84]
        call    FUN_0041fde0
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x10]
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        mov     dword ptr [ebp - 0x78], ecx
        lea     ecx, [ebp - 0x84]
        push    ecx
        mov     dword ptr [ebp - 0x68], edx
        lea     edx, [ebp - 0x4]
        push    edx
        push    0x2
        push    ebx
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [ebp - 0x178]
        mov     dword ptr [ebp - 0x58], eax
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [ebp - 0x118]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [ebp - 0x100]
        call    FUN_00767400
        mov     eax, dword ptr [ebp - 0x178]
        push    0x0
        push    eax
        lea     ecx, [ebp - 0x178]
        push    ecx
        lea     ecx, [ebp - 0xa4]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [ebp - 0x8], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [ebp - 0x8]
        push    ecx
        lea     edx, [ebp - 0xa4]
        push    edx
        mov     word ptr [ebp - 0x6], ax
        call    FUN_004d9910
        add     esp, 0xc
        mov     esi, eax
        test    esi, esi
        pop     edi
        jnz     L_981C
        push    0x78984c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_981C
        int     3
L_981C:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dword ptr [ecx + 0x168], 0x1
        lea     ecx, [ebp - 0xa4]
        call    FUN_0041e710
        lea     ecx, [ebp - 0xe8]
        call    FUN_004d21c0
L_9864:
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    }


}
