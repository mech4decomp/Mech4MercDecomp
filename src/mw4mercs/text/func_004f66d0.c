/*
 * FUN_004f66d0 (1010 B) — __thiscall MLR/Adept object builder. Constructs a
 * render object (ESI) from a source (EDI) + two stack args, computing
 * bounding-box/offset data via several helper calls and virtual dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern unsigned char g_007dc694;
extern unsigned short g_007dc696;
extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_004fc600(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041ef60(void);

__declspec(naked) void FUN_004f66d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x180
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x84
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_004d9400
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [edi + 0x17c]
        mov     dx, word ptr [edi + 0x17e]
        mov     esi, eax
        mov     ax, word ptr [edi + 0x17a]
        mov     dword ptr [esi], 0x84
        mov     word ptr [esi + 0x68], ax
        mov     ax, word ptr [edi + 0x180]
        mov     word ptr [esi + 0x6a], cx
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x180]
        mov     word ptr [esi + 0x6c], dx
        mov     word ptr [esi + 0x6e], ax
        call    FUN_004d2000
        push    0x0
        lea     ecx, [ebp - 0xb4]
        call    FUN_0041ee70
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0x0
        lea     edx, [ebp - 0xb4]
        push    edx
        call    dword ptr [eax + 0xc]
        mov     cl, byte ptr [eax + 0x18]
        add     eax, 0x18
        mov     byte ptr [ebp - 0x8], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [ebp - 0xb4]
        push    eax
        lea     ecx, [ebp - 0x180]
        mov     word ptr [ebp - 0x6], dx
        call    FUN_004d2680
        push    0x7723bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L67AB
        int     3
L67AB:
        mov     cx, word ptr [ebp - 0x140]
        mov     word ptr [esi + 0x74], cx
        mov     dx, word ptr [ebp - 0x13e]
        mov     cl, byte ptr [esi + 0x18]
        mov     word ptr [esi + 0x76], dx
        mov     al, byte ptr [ebp - 0x8]
        add     cl, al
        mov     byte ptr [esi + 0x18], cl
        mov     cx, word ptr [ebp - 0x6]
        add     word ptr [esi + 0x1a], cx
        push    0x2
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041ee70
        mov     eax, dword ptr [ebp - 0x3c]
        push    0x2
        lea     edx, [ebp + 0x8]
        push    edx
        lea     ecx, [ebp - 0x3c]
        mov     dword ptr [ebp + 0x8], 0x0
        call    dword ptr [eax + 0x24]
        mov     cl, byte ptr [g_007dc694]
        mov     dx, word ptr [g_007dc696]
        mov     eax, dword ptr [g_007dab44]
        mov     byte ptr [ebp - 0x8], cl
        mov     word ptr [ebp - 0x6], dx
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        add     eax, 0xbc
        mov     dword ptr [ebp - 0x10], eax
        mov     edx, dword ptr [eax]
        lea     ecx, [ebp - 0x14]
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x14], 0x772d80
        call    FUN_0040c0e0
        test    eax, eax
        jz      L6887
L683D:
        mov     ecx, dword ptr [eax + 0x10]
        and     ecx, 0x18
        cmp     cl, 0x8
        jnz     L687B
        mov     edx, dword ptr [eax]
        push    0x0
        lea     ecx, [ebp - 0x3c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        jz      L687B
        mov     dl, byte ptr [eax + 0x18]
        add     byte ptr [ebp - 0x8], dl
        mov     cx, word ptr [eax + 0x1a]
        add     word ptr [ebp - 0x6], cx
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x24]
        add     ecx, edx
        cmp     ecx, eax
        mov     dword ptr [ebp - 0x28], ecx
        jbe     L687B
        mov     dword ptr [ebp - 0x24], ecx
L687B:
        lea     ecx, [ebp - 0x14]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L683D
L6887:
        mov     edx, dword ptr [ebp - 0x28]
        sub     edx, dword ptr [ebp - 0x2c]
        cmp     edx, 0x2
        jbe     L6909
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0xf8]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x3c]
        push    0x0
        lea     ecx, [ebp - 0x3c]
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [ebp - 0x3c]
        push    0x2
        lea     ecx, [ebp - 0x6]
        push    ecx
        lea     ecx, [ebp - 0x3c]
        mov     dword ptr [ebp - 0x34], 0xffffffec
        call    dword ptr [edx + 0x24]
        push    0x0
        lea     eax, [ebp - 0x3c]
        push    eax
        lea     ecx, [ebp - 0xf8]
        call    FUN_004d2680
        mov     cx, word ptr [ebp - 0xb8]
        mov     dx, word ptr [ebp - 0xb6]
        mov     word ptr [esi + 0x70], cx
        mov     cl, byte ptr [esi + 0x18]
        mov     word ptr [esi + 0x72], dx
        mov     al, byte ptr [ebp - 0x8]
        add     cl, al
        mov     byte ptr [esi + 0x18], cl
        mov     cx, word ptr [ebp - 0x6]
        add     word ptr [esi + 0x1a], cx
        lea     ecx, [ebp - 0xf8]
        call    FUN_004d21c0
        jmp     L691E
L6909:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x70], dx
        mov     word ptr [esi + 0x72], ax
L691E:
        push    0x2
        lea     ecx, [ebp - 0x64]
        call    FUN_0041ee70
        mov     edx, dword ptr [ebp - 0x64]
        push    0x2
        lea     ecx, [ebp + 0x8]
        push    ecx
        lea     ecx, [ebp - 0x64]
        mov     dword ptr [ebp + 0x8], 0x0
        call    dword ptr [edx + 0x24]
        mov     cx, word ptr [g_007dc696]
        mov     edx, dword ptr [ebp - 0x50]
        mov     al, byte ptr [g_007dc694]
        mov     word ptr [ebp - 0x6], cx
        sub     edx, dword ptr [ebp - 0x54]
        cmp     edx, 0x2
        mov     byte ptr [ebp - 0x8], al
        jbe     L69D3
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0xf8]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x64]
        push    0x0
        lea     ecx, [ebp - 0x64]
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [ebp - 0x64]
        push    0x2
        lea     ecx, [ebp - 0x6]
        push    ecx
        lea     ecx, [ebp - 0x64]
        mov     dword ptr [ebp - 0x5c], 0xffffffec
        call    dword ptr [edx + 0x24]
        push    0x0
        lea     eax, [ebp - 0x64]
        push    eax
        lea     ecx, [ebp - 0xf8]
        call    FUN_004d2680
        mov     cx, word ptr [ebp - 0xb8]
        mov     dx, word ptr [ebp - 0xb6]
        mov     word ptr [esi + 0x60], cx
        mov     cl, byte ptr [esi + 0x18]
        mov     word ptr [esi + 0x62], dx
        mov     al, byte ptr [ebp - 0x8]
        add     cl, al
        mov     byte ptr [esi + 0x18], cl
        mov     cx, word ptr [ebp - 0x6]
        add     word ptr [esi + 0x1a], cx
        lea     ecx, [ebp - 0xf8]
        call    FUN_004d21c0
        jmp     L69E8
L69D3:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x60], dx
        mov     word ptr [esi + 0x62], ax
L69E8:
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x13c]
        call    FUN_004d2000
        push    0x0
        lea     ecx, [ebp - 0x8c]
        call    FUN_0041ee70
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        lea     ecx, [ebp - 0x8c]
        push    ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fc600
        mov     ecx, dword ptr [ebp - 0x78]
        sub     ecx, dword ptr [ebp - 0x7c]
        jz      L6A5B
        push    0x0
        lea     edx, [ebp - 0x8c]
        push    edx
        lea     ecx, [ebp - 0x13c]
        call    FUN_004d2680
        mov     ax, word ptr [ebp - 0xfc]
        mov     word ptr [esi + 0x64], ax
        mov     cx, word ptr [ebp - 0xfa]
        mov     word ptr [esi + 0x66], cx
        jmp     L6A70
L6A5B:
        mov     dx, word ptr [g_007db0ac]
        mov     ax, word ptr [g_007db0ae]
        mov     word ptr [esi + 0x64], dx
        mov     word ptr [esi + 0x66], ax
L6A70:
        mov     cl, byte ptr [edi + 0x169]
        mov     byte ptr [esi + 0x80], cl
        lea     ecx, [ebp - 0x8c]
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x13c]
        call    FUN_004d21c0
        lea     ecx, [ebp - 0x64]
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x3c]
        call    FUN_0041ef60
        lea     ecx, [ebp - 0xb4]
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x180]
        call    FUN_004d21c0
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
