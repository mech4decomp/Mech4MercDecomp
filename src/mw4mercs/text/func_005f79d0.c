/*
 * FUN_005f79d0 (985 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Complex object-construction/update routine: builds a sub-object via
 * virtual calls, iterates a list, and copies fields into ESI.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005fc4e0(void);
extern void __stdcall FUN_0041ee70(void);
extern void __stdcall FUN_0040c0e0(void);
extern void __stdcall FUN_004125e0(void);
extern void __stdcall FUN_00412740(void);
extern void __stdcall FUN_0040d9b0(void);
extern void __stdcall FUN_004d2110(void);
extern void __stdcall FUN_004d2680(void);
extern void __stdcall FUN_004d21c0(void);
extern void __stdcall FUN_004084e0(void);
extern void __stdcall FUN_00416bc0(void);
extern void __stdcall FUN_00415cc0(void);
extern void __stdcall FUN_00416cc0(void);
extern void __stdcall FUN_00416c60(void);
extern void __stdcall FUN_0041ef60(void);

extern unsigned char  g_7dc694;
extern unsigned short g_7dc696;
extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;

__declspec(naked) void __stdcall FUN_005f79d0(void *p1, void *p2)
{
    __asm {
        sub     esp, 0xF4
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x100]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x134
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ebx, dword ptr [esp + 0x108]
        push    ebx
        push    esi
        mov     ecx, edi
        call    FUN_005fc4e0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     esi, eax
        push    0x2
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esi], 0x134
        call    FUN_0041ee70
        mov     edx, dword ptr [esp + 0x1c]
        push    0x2
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x24]
        mov     al, byte ptr [g_7dc694]
        mov     cx, word ptr [g_7dc696]
        mov     edx, dword ptr [edi + 0x34c]
        mov     byte ptr [esp + 0x10], al
        lea     eax, [edi + 0x34c]
        mov     word ptr [esp + 0x12], cx
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x48], eax
        mov     dword ptr [esp + 0x4c], edx
        mov     dword ptr [esp + 0x44], 0x782234
        call    FUN_0040c0e0
        test    eax, eax
        jz      loc_7ab6
loc_7a70:
        mov     edx, dword ptr [eax]
        push    ebx
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        jz      loc_7aa9
        mov     dl, byte ptr [eax + 0x18]
        add     byte ptr [esp + 0x10], dl
        mov     cx, word ptr [eax + 0x1a]
        add     word ptr [esp + 0x12], cx
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x34]
        add     ecx, edx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x30], ecx
        jbe     loc_7aa9
        mov     dword ptr [esp + 0x34], ecx
loc_7aa9:
        lea     ecx, [esp + 0x44]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     loc_7a70
loc_7ab6:
        mov     edx, dword ptr [esp + 0x30]
        sub     edx, dword ptr [esp + 0x2c]
        cmp     edx, 0x2
        jbe     loc_7ba2
        mov     eax, dword ptr [esp + 0x1c]
        push    0
        lea     ecx, [esp + 0x20]
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [esp + 0x1c]
        push    0x2
        lea     ecx, [esp + 0x16]
        push    ecx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x2c], 0xffffffec
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        mov     dword ptr [esp + 0xc], eax
        jz      loc_7b00
        inc     byte ptr [eax - 0x1]
        mov     eax, dword ptr [esp + 0xc]
loc_7b00:
        push    0x78aa64
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0xc]
        push    0
        push    ebx
        push    eax
        lea     ecx, [esp + 0x84]
        call    FUN_004d2110
        push    0
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x80]
        call    FUN_004d2680
        mov     dx, word ptr [esp + 0xb8]
        mov     ax, word ptr [esp + 0xba]
        mov     word ptr [esi + 0x11c], dx
        mov     dl, byte ptr [esi + 0x18]
        mov     word ptr [esi + 0x11e], ax
        mov     cl, byte ptr [esp + 0x10]
        add     dl, cl
        mov     byte ptr [esi + 0x18], dl
        mov     dx, word ptr [esp + 0x12]
        add     word ptr [esi + 0x1a], dx
        lea     ecx, [esp + 0x78]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      loc_7bbd
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_7bbd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     loc_7bbd
loc_7ba2:
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [esi + 0x11c], ax
        mov     word ptr [esi + 0x11e], cx
loc_7bbd:
        mov     ax, word ptr [edi + 0x3aa]
        mov     dx, word ptr [edi + 0x3a8]
        mov     word ptr [esi + 0x11a], ax
        mov     al, byte ptr [edi + 0x33c]
        test    al, al
        mov     word ptr [esi + 0x118], dx
        jz      loc_7d56
        mov     al, byte ptr [edi + 0x3b4]
        test    al, al
        jnz     loc_7d56
        push    0
        lea     ecx, [esp + 0x7c]
        call    FUN_0041ee70
        lea     ecx, [edi + 0x370]
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x64], 0x783ec4
        call    FUN_00415cc0
        push    0x4
        lea     edx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x7c]
        push    edx
        lea     ecx, [esp + 0x80]
        call    dword ptr [eax + 0x24]
        lea     ecx, [esp + 0x64]
        call    FUN_00416cc0
        test    eax, eax
        jz      loc_7c60
loc_7c47:
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xc]
        lea     ecx, [esp + 0x64]
        call    FUN_00416cc0
        test    eax, eax
        jnz     loc_7c47
loc_7c60:
        lea     edx, [edi + 0x384]
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x50]
        mov     dword ptr [esp + 0x50], 0x783f04
        call    FUN_00415cc0
        mov     edx, dword ptr [esp + 0x78]
        mov     dword ptr [esp + 0x18], eax
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x80]
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x50]
        call    FUN_00416cc0
        test    eax, eax
        jz      loc_7cc0
loc_7ca7:
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
        lea     ecx, [esp + 0x50]
        call    FUN_00416cc0
        test    eax, eax
        jnz     loc_7ca7
loc_7cc0:
        mov     edx, dword ptr [esp + 0x8c]
        sub     edx, dword ptr [esp + 0x88]
        jz      loc_7d20
        push    0
        push    ebx
        push    0
        lea     ecx, [esp + 0xc8]
        call    FUN_004d2110
        push    0
        lea     eax, [esp + 0x7c]
        push    eax
        lea     ecx, [esp + 0xc4]
        call    FUN_004d2680
        mov     cx, word ptr [esp + 0xfc]
        mov     dx, word ptr [esp + 0xfe]
        mov     word ptr [esi + 0x118], cx
        lea     ecx, [esp + 0xbc]
        mov     word ptr [esi + 0x11a], dx
        call    FUN_004d21c0
        jmp     loc_7d3b
loc_7d20:
        mov     ax, word ptr [g_7db0ac]
        mov     cx, word ptr [g_7db0ae]
        mov     word ptr [esi + 0x118], ax
        mov     word ptr [esi + 0x11a], cx
loc_7d3b:
        lea     ecx, [esp + 0x50]
        call    FUN_00416c60
        lea     ecx, [esp + 0x64]
        call    FUN_00416c60
        lea     ecx, [esp + 0x78]
        call    FUN_0041ef60
loc_7d56:
        mov     eax, dword ptr [edi + 0x27c]
        mov     dl, byte ptr [edi + 0x274]
        mov     ecx, dword ptr [edi + 0x278]
        mov     byte ptr [esi + 0x120], dl
        mov     edx, dword ptr [edi + 0x3f4]
        mov     dword ptr [esi + 0x124], eax
        mov     al, byte ptr [edi + 0x3f1]
        mov     dword ptr [esi + 0x128], ecx
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esi + 0x12c], edx
        mov     byte ptr [esi + 0x130], al
        call    FUN_0041ef60
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0xF4
        ret     0x8
    }
}
