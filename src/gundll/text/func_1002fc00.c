/*
 * FUN_1002fc00 (1047 B) - __stdcall, RET 0xC. SEH-guarded message dispatch
 * with a jump table (0x10030018) and byte table (0x1003002c).
 *
 * CFLAGS: /O1
 */

extern int g_10030018[];
extern char g_1003002c[];

extern void FUN_10033230(void);
extern void FUN_100337b0(void);
extern void FUN_10001d50(void);
extern void FUN_10034340(void);
extern void FUN_10001d60(void);
extern void FUN_100333f0(void);

__declspec(naked) void __stdcall FUN_1002fc00(void)
{
    __asm {
        push    -0x1
        push    0x10048931
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        mov     eax, dword ptr [ebp + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        xor     ebx, ebx
        cmp     eax, 0xc350
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        jnz     L_1002fd19
        mov     edi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x34], eax
        mov     cx, word ptr [edi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [eax]
        push    ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x3c]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x10]
        mov     edx, dword ptr [esp + 0x34]
        mov     bl, al
        cmp     edx, dword ptr [edi + 0xc]
        jz      L_1002fc7e
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x3c]
    L_1002fc7e:
        test    bl, bl
        jz      L_1002fced
        mov     ecx, dword ptr [esp + 0x14]
        xor     ebp, ebp
        test    cx, cx
        mov     dword ptr [esp + 0x18], ebp
        jbe     L_1002fce9
        lea     ebx, [esi + 0x3c]
    L_1002fc94:
        mov     edx, dword ptr [esp + 0x34]
        xor     eax, eax
        mov     ax, bp
        add     eax, edx
        cmp     word ptr [eax], 0x3e7
        ja      L_1002fcb4
        mov     ecx, dword ptr [edi + 0x4]
        push    ecx
        push    ebx
        push    esi
        push    eax
        call    FUN_10033230
        jmp     L_1002fcda
    L_1002fcb4:
        mov     ebp, dword ptr [edi + 0x4]
        mov     edx, dword ptr [esi + 0x14]
        mov     ebx, dword ptr [edx]
        push    ebp
        mov     ebp, dword ptr [esp + 0x40]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        sub     ecx, ebp
        push    ecx
        mov     dword ptr [esp + 0x24], ebx
        lea     ebx, [esi + 0x3c]
        push    ebx
        push    esi
        push    eax
        mov     eax, dword ptr [esp + 0x30]
        push    edx
        call    dword ptr [eax]
    L_1002fcda:
        mov     ecx, dword ptr [esp + 0x14]
        add     ebp, eax
        cmp     bp, cx
        mov     dword ptr [esp + 0x18], ebp
        jc      L_1002fc94
    L_1002fce9:
        mov     ebp, dword ptr [esp + 0x38]
    L_1002fced:
        mov     ecx, dword ptr [esp + 0x34]
        cmp     ecx, dword ptr [edi + 0xc]
        jz      L_1002fd05
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        jmp     L_1002fdec
    L_1002fd05:
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x3c]
        jmp     L_1002fdec
    L_1002fd19:
        cmp     eax, 0xc351
        jnz     L_1003000a
        mov     eax, dword ptr [ebp + 0x8]
        add     eax, 0xfffb
        cmp     eax, 0x11
        ja      L_1002fdec
        movzx   eax, byte ptr [eax + g_1003002c]
        jmp     dword ptr [eax*0x4 + g_10030018]
    L_1002fd43:
        mov     ebp, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jnz     L_1002fd53
        mov     dword ptr [esp + 0x34], eax
        jmp     L_1002fd62
    L_1002fd53:
        xor     ecx, ecx
        cmp     eax, 0x80158260
        setz    cl
        inc     ecx
        mov     dword ptr [esp + 0x34], ecx
    L_1002fd62:
        mov     edx, dword ptr [ebp]
        push    edx
        lea     ebx, [esi + 0x3c]
        push    ebx
        push    esi
        lea     edi, [ebp + 0x14]
        lea     eax, [ebp + 0x10]
        push    edi
        push    eax
        call    FUN_100337b0
        cmp     dword ptr [edi], 0
        jbe     L_1002fdc1
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x18], eax
        test    eax, eax
        mov     dword ptr [esp + 0x2c], 0x0
        jz      L_1002fdb3
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ebp + 0x10]
        push    esi
        push    ebx
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_10034340
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     edi, eax
        jmp     L_1002fdc3
    L_1002fdb3:
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     edi, eax
        jmp     L_1002fdc3
    L_1002fdc1:
        xor     edi, edi
    L_1002fdc3:
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x38]
        push    edi
        push    edx
        mov     edx, dword ptr [ebp + 0x4]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x4]
        test    edi, edi
        jz      L_1002fde8
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_1002fde8:
        mov     ebp, dword ptr [esp + 0x38]
    L_1002fdec:
        cmp     dword ptr [ebp], 0x4
        jnz     L_1002fdff
        mov     eax, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi]
        push    eax
        push    esi
        call    dword ptr [edx + 0x14]
    L_1002fdff:
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x20
        ret     0xc
    L_1002fe18:
        mov     edi, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [edi + 0x4]
        lea     eax, [esp + 0x1c]
        push    eax
        push    ecx
        call    FUN_100333f0
        mov     dword ptr [esp + 0x10], eax
        cmp     dword ptr [edi + 0x14], ebx
        jbe     L_1002fe7e
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x34], eax
        cmp     eax, ebx
        mov     dword ptr [esp + 0x2c], 0x1
        jz      L_1002fe6e
        mov     ecx, dword ptr [edi + 0x14]
        push    esi
        lea     edx, [esi + 0x3c]
        push    edx
        mov     edx, dword ptr [edi + 0x10]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_10034340
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     dword ptr [esp + 0x34], eax
        jmp     L_1002fe82
    L_1002fe6e:
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     dword ptr [esp + 0x34], eax
        jmp     L_1002fe82
    L_1002fe7e:
        mov     dword ptr [esp + 0x34], ebx
    L_1002fe82:
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 0xc]
        push    edx
        mov     edx, dword ptr [edi + 0x1c]
        push    edx
        sub     esp, 0x10
        lea     edx, [eax + 0x18]
        mov     ebp, dword ptr [edx]
        mov     ebx, esp
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], edx
        mov     ecx, dword ptr [esi + 0x14]
        lea     edx, [eax + 0x8]
        mov     ebp, dword ptr [edx]
        mov     eax, dword ptr [eax + 0x30]
        sub     esp, 0x10
        mov     ebx, esp
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], edx
        mov     ebx, dword ptr [esp + 0x5c]
        mov     edx, dword ptr [edi + 0x18]
        push    eax
        push    ebx
        push    edx
        mov     edx, dword ptr [esp + 0x50]
        sub     esp, 0x8
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     dx, word ptr [esp + 0x5c]
        mov     word ptr [eax + 0x4], dx
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        call    dword ptr [ecx + 0x8]
        test    ebx, ebx
        jz      L_1002ff04
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_1002ff04:
        mov     edi, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x8]
        jmp     L_1002fde8
    L_1002ff12:
        mov     edi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        cmp     eax, ebx
        jnz     L_1002ff20
        xor     ecx, ecx
        jmp     L_1002ff3b
    L_1002ff20:
        cmp     eax, 0x80158630
        jnz     L_1002ff2e
        mov     ecx, 0x1
        jmp     L_1002ff3b
    L_1002ff2e:
        xor     ecx, ecx
        cmp     eax, 0x80158650
        setz    cl
        add     ecx, 0x2
    L_1002ff3b:
        mov     ebx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [edi + 0x8]
        mov     ebx, dword ptr [ebx + 0x4]
        push    ebx
        mov     ebx, dword ptr [edi + 0x10]
        push    ebx
        mov     ebx, dword ptr [edi + 0x4]
        push    ebx
        push    ecx
        push    eax
        call    dword ptr [edx + 0x18]
        mov     edx, dword ptr [edi + 0x8]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        jmp     L_1002fdec
    L_1002ff6b:
        mov     edi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, 0x80158480
        jz      L_1002ff93
        cmp     eax, 0x80158270
        jnz     L_1002ff86
        mov     ebx, 0x1
        jmp     L_1002ff93
    L_1002ff86:
        xor     ebx, ebx
        cmp     eax, 0x80158650
        setnz   bl
        add     ebx, 0x2
    L_1002ff93:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        jbe     L_1002ffe2
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x38], eax
        test    eax, eax
        mov     dword ptr [esp + 0x2c], 0x2
        jz      L_1002ffd4
        mov     edx, dword ptr [edi + 0xc]
        push    esi
        lea     ecx, [esi + 0x3c]
        push    ecx
        mov     ecx, dword ptr [edi + 0x8]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_10034340
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     edi, eax
        jmp     L_1002ffe4
    L_1002ffd4:
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     edi, eax
        jmp     L_1002ffe4
    L_1002ffe2:
        xor     edi, edi
    L_1002ffe4:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [eax]
        push    ecx
        push    edi
        push    ebx
        push    eax
        call    dword ptr [edx + 0x1c]
        test    edi, edi
        jz      L_1002fdec
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
        jmp     L_1002fdec
    L_1003000a:
        mov     dword ptr [esp + 0x10], 0x80070057
        jmp     L_1002fdec
    }
}
