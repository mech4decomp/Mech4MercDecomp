/*
 * FUN_00501B70 (541 B) — method with virtual calls and many external
 * data/function references.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0050de50(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00502e50(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0100(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_00411f70(void);
extern void __cdecl FUN_00412020(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_005052a0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_00411d60(void);

extern int g_7db0a0;
extern short g_7db0ac;
extern short g_7db0ae;
extern int g_7b8d88;
extern int g_7b8d8c;
extern int g_7b8d90;
extern int g_7b8ce8;
extern int g_7b8cec;
extern int g_7b8cf0;

__declspec(naked) void func_00501b70(void)
{
    __asm {
        sub     esp, 0xb8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xcc]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x60
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_0050de50
        mov     edx, dword ptr [esi]
        add     esp, 4
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edi, dword ptr [edi + 4]
        mov     ecx, dword ptr [g_7db0a0]
        mov     esi, eax
        mov     eax, dword ptr [edi + 0x10]
        push    eax
        mov     dword ptr [esi], 0x60
        call    FUN_004cfbd0
        push    0
        lea     ecx, [esp + 0x17]
        push    ecx
        push    0x776434
        mov     ecx, edi
        mov     byte ptr [esp + 0x1f], 0
        call    FUN_00411ec0
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      l_skip_or
        or      dword ptr [esi + 0x14], 0x400
    l_skip_or:
        xor     ebx, ebx
        push    ebx
        lea     edx, [esp + 0x28]
        push    edx
        push    0x776428
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      l_skip_2e50
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        call    FUN_00502e50
        add     esp, 4
        mov     ebx, eax
    l_skip_2e50:
        push    1
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x772408
        mov     ecx, edi
        mov     dword ptr [esi + 0x58], ebx
        call    FUN_00411bf0
        lea     ecx, [esp + 0x40]
        call    FUN_004d1f10
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [g_7db0a0]
        push    edx
        lea     eax, [esp + 0x44]
        push    eax
        call    FUN_004d0100
        mov     cx, word ptr [esp + 0x80]
        mov     dx, word ptr [esp + 0x82]
        lea     ebx, [esi + 0x54]
        mov     word ptr [ebx], cx
        lea     ecx, [esp + 0x40]
        mov     ebp, eax
        mov     word ptr [ebx + 2], dx
        call    FUN_004d21c0
        mov     eax, dword ptr [esi + 0x14]
        test    ah, 0xf0
        jz      l_skip_1f10
        lea     ecx, [esp + 0x84]
        call    FUN_004d1f10
        lea     eax, [esp + 0x84]
        push    ebx
        push    eax
        call    FUN_004da8d0
        mov     eax, dword ptr [esp + 0xa0]
        mov     cx, word ptr [eax + 0x10]
        add     esp, 8
        cmp     cx, word ptr [g_7db0ac]
        jnz     l_skip_cmp
        mov     dx, word ptr [eax + 0x12]
        cmp     dx, word ptr [g_7db0ae]
        jnz     l_skip_cmp
        and     dword ptr [esi + 0x14], 0xffff0fff
    l_skip_cmp:
        lea     ecx, [esp + 0x84]
        call    FUN_004d21c0
    l_skip_1f10:
        mov     eax, dword ptr [g_7b8d88]
        mov     ecx, dword ptr [g_7b8d8c]
        mov     edx, dword ptr [g_7b8d90]
        mov     dword ptr [esp + 0x14], eax
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        mov     dword ptr [esp + 0x20], ecx
        push    0x77544c
        mov     ecx, edi
        mov     dword ptr [esp + 0x28], edx
        call    FUN_00411f70
        mov     ecx, dword ptr [g_7b8cec]
        mov     edx, dword ptr [g_7b8ce8]
        mov     eax, dword ptr [g_7b8cf0]
        mov     dword ptr [esp + 0x2c], ecx
        push    0
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    0x775430
        mov     ecx, edi
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_00412020
        mov     edx, dword ptr [esp + 0x14]
        lea     ecx, [esi + 0x1c]
        mov     dword ptr [ecx + 0xc], edx
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ecx + 0x1c], eax
        mov     edx, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x28]
        push    eax
        mov     dword ptr [ecx + 0x2c], edx
        call    FUN_0041a070
        mov     ecx, dword ptr [ebp + 0x28]
        lea     edx, [esp + 0x34]
        mov     dword ptr [esp + 0x34], ecx
        push    edx
        lea     ecx, [esi + 0x4c]
        mov     dword ptr [esp + 0x3c], edi
        mov     dword ptr [esp + 0x40], 0x773250
        call    FUN_005052a0
        mov     ecx, dword ptr [g_7db0a0]
        call    FUN_004cfc90
        lea     eax, [esi + 0x50]
        push    0
        push    eax
        push    0x776424
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_00411d60
        pop     edi
        mov     dword ptr [esi + 0x5c], 0xffffffff
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xb8
        ret
    }
}
