/*
 * FUN_005e9870 (466 B) — __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

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

__declspec(naked) void __stdcall FUN_005e9870(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x130
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        push    esi
        lea     ecx, [ebx + 0x78]
        push    edi
        call    dword ptr [eax + 0x4]
        mov edi, dword ptr [DAT_007db0ac]
        mov dx, word ptr [DAT_007db0ae]
        mov     esi, eax
        lea     ecx, [esi + 0x1c]
        mov     word ptr [ebp - 0x4], di
        mov     word ptr [ebp - 0x2], dx
        cmp     word ptr [ecx], di
        jnz     L_98AC
        cmp     word ptr [ecx + 0x2], dx
        jz      L_98D5
L_98AC:
        xor     eax, eax
        mov     al, byte ptr [ebx + 0x1b8]
        cmp     al, 0x18
        jnc     L_98D5
        push    eax
        push    ecx
        lea     ecx, [ebp - 0x4]
        push    ecx
        call    FUN_00502ef0
        mov edi, dword ptr [DAT_007db0ac]
        mov dx, word ptr [DAT_007db0ae]
        add     esp, 0xc
        jmp     L_98E5
L_98D5:
        mov     ax, word ptr [esi + 0x20]
        mov     word ptr [ebp - 0x4], ax
        mov     cx, word ptr [esi + 0x22]
        mov     word ptr [ebp - 0x2], cx
L_98E5:
        cmp     word ptr [ebp - 0x4], di
        jnz     L_98F5
        cmp     word ptr [ebp - 0x2], dx
        jz      L_9A3B
L_98F5:
        push    0x1
        lea     edx, [ebp - 0x4]
        push    edx
        lea     ecx, [ebp - 0xa0]
        call    FUN_004d1f80
        lea     eax, [ebp - 0x4]
        push    eax
        call    FUN_004da920
        add     esp, 0x4
        push    0x2
        push    0x0
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [ebp - 0x3c]
        rep     movsd
        push    0x1
        lea     ecx, [ebx + 0x19c]
        push    ecx
        lea     ecx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0xc], eax
        call    FUN_0041fde0
        mov     edx, dword ptr [ebx + 0x17c]
        mov     eax, dword ptr [ebx + 0x180]
        mov     ecx, dword ptr [ebx + 0x184]
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        mov     dword ptr [ebp - 0x30], edx
        lea     edx, [ebp - 0x3c]
        push    edx
        mov     dword ptr [ebp - 0x20], eax
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x2
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, dword ptr [ebp - 0xc]
        push    ecx
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [ebp - 0x130]
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [ebp - 0xd0]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [ebp - 0xb8]
        call    FUN_00767400
        mov     edx, dword ptr [ebp - 0x130]
        push    0x0
        push    edx
        lea     eax, [ebp - 0x130]
        push    eax
        lea     ecx, [ebp - 0x5c]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [ebp - 0x8], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [ebp - 0x8]
        push    eax
        lea     ecx, [ebp - 0x5c]
        push    ecx
        mov     word ptr [ebp - 0x6], dx
        call    FUN_004d9910
        mov     esi, eax
        add     esp, 0xc
        test    esi, esi
        jnz     L_99F8
        push    0x78984c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_99F8
        int     3
L_99F8:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        lea     ecx, [ebp - 0x5c]
        mov     dword ptr [ebx + 0x168], 0x1
        call    FUN_0041e710
        lea     ecx, [ebp - 0xa0]
        call    FUN_004d21c0
L_9A3B:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
