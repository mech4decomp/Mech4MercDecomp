/*
 * FUN_10035460 (1224 B) - __stdcall, RET 0x10. SEH-guarded message dispatch
 * with jump tables at 0x10035928 / 0x1003595c and byte table 0x10035948
 * (all just past the function end).
 *
 * CFLAGS: /O1
 */

extern int g_10035928[];
extern int g_1003595c[];
extern char g_10035948[];

extern void FUN_10033230(void);
extern void FUN_100337b0(void);
extern void FUN_10001d50(void);
extern void FUN_10034340(void);
extern void FUN_10001d60(void);
extern void FUN_100333f0(void);
extern void FUN_100349e0(void);

__declspec(naked) void __stdcall FUN_10035460(void)
{
    __asm {
        push    -0x1
        push    0x10048be1
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        cmp     ecx, 0xc350
        mov     dword ptr [esp + 0x14], edi
        jnz     L_10035580
        mov     esi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [esp + 0x3c]
        xor     edx, edx
        mov     dword ptr [esp + 0x38], ecx
        mov     dx, word ptr [esi + 0x10]
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [esp + 0x40]
        push    edx
        lea     edx, [esp + 0x14]
        push    edx
        lea     edx, [esp + 0x40]
        push    edx
        push    eax
        push    ebp
        call    dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [esi + 0xc]
        mov     ebx, dword ptr [esp + 0x34]
        mov     byte ptr [esp + 0x3c], al
        mov     eax, dword ptr [esp + 0x38]
        cmp     eax, ecx
        jz      L_100354ec
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [eax]
        push    edi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x6c]
    L_100354ec:
        mov     al, byte ptr [esp + 0x3c]
        test    al, al
        jz      L_10035554
        mov     ecx, dword ptr [esp + 0x10]
        test    cx, cx
        jbe     L_10035554
        add     ebx, 0x4c
    L_10035500:
        mov     edx, dword ptr [esp + 0x38]
        xor     eax, eax
        mov     ax, di
        add     eax, edx
        cmp     word ptr [eax], 0x3e7
        ja      L_10035525
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    ebx
        push    edx
        push    eax
        call    FUN_10033230
        jmp     L_10035545
    L_10035525:
        mov     ebx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [ebp]
        push    ebx
        mov     ebx, dword ptr [esp + 0x44]
        push    ebx
        sub     ecx, edi
        push    ecx
        mov     ecx, dword ptr [esp + 0x40]
        lea     ebx, [ecx + 0x4c]
        mov     ecx, dword ptr [esp + 0x24]
        push    ebx
        push    ecx
        push    eax
        push    ebp
        call    dword ptr [edx]
    L_10035545:
        mov     ecx, dword ptr [esp + 0x10]
        add     edi, eax
        cmp     di, cx
        jc      L_10035500
        mov     ebx, dword ptr [esp + 0x34]
    L_10035554:
        mov     eax, dword ptr [esp + 0x38]
        cmp     eax, dword ptr [esi + 0xc]
        jz      L_1003556c
        mov     ebx, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ebx
        call    dword ptr [edx + 0x14]
        jmp     L_1003590f
    L_1003556c:
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [eax]
        push    0x0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x6c]
        jmp     L_1003590f
    L_10035580:
        cmp     ecx, 0xc351
        jnz     L_10035907
        mov     ecx, dword ptr [eax + 0x8]
        add     ecx, 0xfffb
        cmp     ecx, 0x11
        ja      L_1003590f
        movzx   ecx, byte ptr [ecx + g_10035948]
        jmp     dword ptr [ecx*0x4 + g_10035928]
    L_100355ac:
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax + 0xc]
        cmp     ecx, edi
        jnz     L_100355ba
        xor     edx, edx
        jmp     L_100355d7
    L_100355ba:
        cmp     ecx, 0x80158630
        jnz     L_100355c9
        mov     edx, 0x1
        jmp     L_100355d7
    L_100355c9:
        xor     edx, edx
        cmp     ecx, 0x80158650
        setz    dl
        add     edx, 0x2
    L_100355d7:
        mov     esi, dword ptr [eax + 0x8]
        mov     ebx, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edi, dword ptr [ecx]
        push    ebx
        mov     ebx, dword ptr [esi + 0x4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x4]
        push    ebx
        push    eax
        push    edx
        mov     edx, dword ptr [esi]
        push    edx
        push    ecx
        call    dword ptr [edi + 0x4]
        mov     eax, dword ptr [esp + 0x34]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x14]
        jmp     L_1003590f
    L_1003560c:
        mov     edx, dword ptr [eax + 0x10]
        mov     esi, dword ptr [edx + 0x8]
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [esp + 0x40]
        push    edx
        lea     edx, [esp + 0x38]
        push    edx
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [esi + 0xc], eax
        jmp     L_1003590f
    L_1003563d:
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0xc]
        dec     eax
        cmp     eax, 0x3
        mov     ecx, 0x2
        ja      L_1003566f
        jmp     dword ptr [eax*0x4 + g_1003595c]
    L_10035658:
        xor     ecx, ecx
        jmp     L_1003566f
    L_1003565c:
        mov     ecx, 0x2
        jmp     L_1003566f
    L_10035663:
        mov     ecx, 0x3
        jmp     L_1003566f
    L_1003566a:
        mov     ecx, 0x1
    L_1003566f:
        mov     ebx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [eax]
        push    ebx
        push    ecx
        push    esi
        push    eax
        call    dword ptr [edx + 0x14]
        cmp     esi, edi
        jz      L_1003590f
        lea     ecx, [esi + 0x4]
        call    FUN_100349e0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
        jmp     L_1003590f
    L_1003569e:
        mov     edi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x38], edi
        jnz     L_100356b2
        mov     dword ptr [esp + 0x18], eax
        jmp     L_100356c1
    L_100356b2:
        xor     ecx, ecx
        cmp     eax, 0x80158260
        setz    cl
        inc     ecx
        mov     dword ptr [esp + 0x18], ecx
    L_100356c1:
        mov     esi, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esi + 0x20]
        mov     edx, dword ptr [esi]
        push    eax
        push    esi
        call    dword ptr [edx + 0x44]
        mov     ecx, dword ptr [esp + 0x38]
        push    esi
        mov     ebx, eax
        lea     ebp, [esi + 0x4c]
        push    ebp
        push    ebx
        add     edi, 0x14
        lea     eax, [ecx + 0x10]
        push    edi
        push    eax
        call    FUN_100337b0
        mov     eax, dword ptr [edi]
        xor     esi, esi
        cmp     eax, esi
        jbe     L_1003572a
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x34], eax
        cmp     eax, esi
        mov     dword ptr [esp + 0x2c], esi
        jz      L_1003571e
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x38]
        push    ebx
        push    ebp
        push    edx
        lea     edx, [ecx + 0x10]
        mov     edx, dword ptr [edx]
        push    edx
        mov     ecx, eax
        call    FUN_10034340
        jmp     L_10035720
    L_1003571e:
        xor     eax, eax
    L_10035720:
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     esi, eax
    L_1003572a:
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [eax]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    esi
        push    edx
        mov     edx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [edx + 0x4]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
    L_10035747:
        test    esi, esi
        jz      L_1003590f
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
        jmp     L_1003590f
    L_1003575d:
        mov     esi, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [esi + 0x4]
        lea     eax, [esp + 0x1c]
        push    eax
        push    ecx
        call    FUN_100333f0
        mov     dword ptr [esp + 0x14], eax
        cmp     dword ptr [esi + 0x14], edi
        jbe     L_100357b7
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x38], eax
        cmp     eax, edi
        mov     dword ptr [esp + 0x2c], 0x1
        jz      L_100357ab
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esi + 0x14]
        push    edi
        add     edx, 0x4c
        push    edx
        mov     edx, dword ptr [esi + 0x10]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_10034340
        jmp     L_100357ad
    L_100357ab:
        xor     eax, eax
    L_100357ad:
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     edi, eax
    L_100357b7:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, dword ptr [esi + 0x1c]
        push    ecx
        sub     esp, 0x10
        lea     ecx, [eax + 0x18]
        mov     ebp, dword ptr [ecx]
        mov     ebx, esp
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], ecx
        lea     ecx, [eax + 0x8]
        mov     ebp, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x30]
        sub     esp, 0x10
        mov     ebx, esp
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [ebx + 0x4], ebp
        mov     ebp, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        push    eax
        mov     dword ptr [ebx + 0x8], ebp
        mov     dword ptr [ebx + 0xc], ecx
        mov     ecx, dword ptr [esi + 0x18]
        push    edi
        push    ecx
        mov     ecx, dword ptr [esp + 0x50]
        sub     esp, 0x8
        mov     eax, esp
        mov     dword ptr [eax], ecx
        mov     cx, word ptr [esp + 0x5c]
        mov     word ptr [eax + 0x4], cx
        mov     eax, dword ptr [esp + 0x78]
        push    eax
        call    dword ptr [edx + 0x1c]
        test    edi, edi
        jz      L_10035837
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_10035837:
        mov     esi, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 0x8]
        jmp     L_1003590f
    L_10035845:
        mov     esi, dword ptr [eax + 0x10]
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, 0x80158480
        jnz     L_10035856
        xor     ebp, ebp
        jmp     L_10035873
    L_10035856:
        cmp     eax, 0x80158270
        jnz     L_10035864
        mov     ebp, 0x1
        jmp     L_10035873
    L_10035864:
        xor     edx, edx
        cmp     eax, 0x80158650
        setnz   dl
        add     edx, 0x2
        mov     ebp, edx
    L_10035873:
        mov     edi, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [edi + 0x20]
        mov     eax, dword ptr [edi]
        push    ecx
        push    edi
        call    dword ptr [eax + 0x44]
        mov     ebx, eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jbe     L_100358d2
        push    0x14
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x34], eax
        test    eax, eax
        mov     dword ptr [esp + 0x2c], 0x2
        jz      L_100358c4
        mov     edx, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x8]
        push    ebx
        add     edi, 0x4c
        push    edi
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_10034340
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     esi, eax
        jmp     L_100358d4
    L_100358c4:
        xor     eax, eax
        mov     dword ptr [esp + 0x2c], 0xffffffff
        mov     esi, eax
        jmp     L_100358d4
    L_100358d2:
        xor     esi, esi
    L_100358d4:
        mov     ecx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [eax]
        push    ecx
        push    esi
        push    ebp
        push    eax
        call    dword ptr [edx + 0x20]
        jmp     L_10035747
    L_100358ea:
        mov     eax, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [ecx + 0x20], edx
        mov     eax, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ecx
        call    dword ptr [edx + 0x24]
        jmp     L_1003590f
    L_10035907:
        mov     dword ptr [esp + 0x14], 0x80070057
    L_1003590f:
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x20
        ret     0x10
    }
}
