/* FUN_006d6f30 - 3632 bytes, __thiscall, RET 0x14 */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006d3fc0(void);
extern void __cdecl FUN_006dcb90(void);
extern void __cdecl FUN_006dcd00(void);
extern void __cdecl FUN_006dce70(void);
extern void __cdecl FUN_006dcfe0(void);
extern void __cdecl FUN_006dd990(void);
extern void __cdecl FUN_006ddc60(void);
extern void __cdecl FUN_006ddf30(void);
extern void __cdecl FUN_006de4c0(void);
extern void __cdecl FUN_006de1f0(void);
extern void __cdecl FUN_006de780(void);
extern void __cdecl FUN_006dea50(void);
extern void __cdecl FUN_006ded10(void);
extern void __cdecl FUN_006defd0(void);
extern void __cdecl FUN_006df040(void);
extern void __cdecl FUN_006dd150(void);
extern void __cdecl FUN_006dd580(void);
extern void __cdecl FUN_006df0b0(void);
extern void __cdecl FUN_006df350(void);
extern void __cdecl FUN_006df5f0(void);
extern void __cdecl FUN_006df890(void);
extern void __cdecl FUN_006dfed0(void);
extern void __cdecl FUN_006dff10(void);
extern void __cdecl FUN_006dff50(void);
extern void __cdecl FUN_006dff90(void);
extern void __cdecl FUN_006dfb30(void);
extern void __cdecl FUN_006d82f0(void);
extern void __cdecl FUN_006d8550(void);
extern void __cdecl FUN_006d87c0(void);
extern void __cdecl FUN_006d8a00(void);
extern void __cdecl FUN_006d94e0(void);
extern void __cdecl FUN_006d98b0(void);
extern void __cdecl FUN_006d9c90(void);
extern void __cdecl FUN_006da460(void);
extern void __cdecl FUN_006da070(void);
extern void __cdecl FUN_006da830(void);
extern void __cdecl FUN_006dac00(void);
extern void __cdecl FUN_006dafd0(void);
extern void __cdecl FUN_006db380(void);
extern void __cdecl FUN_006db470(void);
extern void __cdecl FUN_006d8c60(void);
extern void __cdecl FUN_006d9090(void);
extern void __cdecl FUN_006db560(void);
extern void __cdecl FUN_006db8f0(void);
extern void __cdecl FUN_006dbc90(void);
extern void __cdecl FUN_006dc010(void);
extern void __cdecl FUN_006dc790(void);
extern void __cdecl FUN_006dc890(void);
extern void __cdecl FUN_006dc990(void);
extern void __cdecl FUN_006dca90(void);
extern void __cdecl FUN_006dc3b0(void);

extern char g_840050;
extern char g_83f608;
extern char g_7b68d0;
extern char g_7b68d1;
extern char g_7b68d2;
extern char g_jt_6d7d60;
extern char g_jt_6d7d80;
extern char g_jt_6d7e44;
extern char g_jt_6d7e64;
extern char g_jt_6d7eb4;
extern char g_jt_6d7ed4;
extern char g_jt_6d7f84;
extern char g_jt_6d7fa4;
extern char g_jt_6d8028;
extern char g_jt_6d8048;
extern char g_jt_6d810c;
extern char g_jt_6d812c;
extern char g_jt_6d817c;
extern char g_jt_6d819c;
extern char g_jt_6d824c;
extern char g_jt_6d826c;

__declspec(naked) unsigned int FUN_006d6f30(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x3c]
        xor     ebx, ebx
        cmp     edi, ebx
        mov     ebp, ecx
        mov     dword ptr [esp + 0x1c], ebp
        jl      L_7d54
        cmp     edi, dword ptr [ebp + 0x8]
        jge     L_7d54
        mov     esi, dword ptr [esp + 0x40]
        cmp     esi, ebx
        jl      L_7d54
        mov     eax, dword ptr [ebp + 0xc]
        cmp     esi, eax
        jge     L_7d54
        mov     ecx, dword ptr [ebp + 0x4]
        imul    eax, edi
        mov     edx, esi
        shl     edx, cl
        add     eax, esi
        mov     dword ptr [esp + 0x40], edx
        mov     edx, edi
        shl     edx, cl
        mov     ecx, dword ptr [ebp + 0x124]
        mov     dword ptr [esp + 0x24], edx
        cmp     dword ptr [ecx + eax*0x8 + 0x4], ebx
        jz      L_7d54
        mov     ecx, dword ptr [esp + 0x48]
        mov     ebp, dword ptr [esp + 0x44]
        mov     edx, 0x1
        shl     edx, cl
        mov     ecx, dword ptr [ebp + 0x10]
        dec     edx
        cmp     ecx, -0x1
        mov     dword ptr [esp + 0x30], edx
        jnz     L_6fc5
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [edx + 0x128]
        mov     eax, dword ptr [ecx + eax*0x4]
        mov     dword ptr [ebp + 0x18], eax
        mov     dword ptr [ebp + 0x1c], eax
        mov     dword ptr [ebp + 0x10], ebx
    L_6fc5:
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        add     eax, edx
        cmp     eax, ecx
        jle     L_6fd9
        mov     eax, ecx
    L_6fd9:
        cmp     edx, eax
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x18], edx
        jge     L_7d3d
    L_6fe9:
        cmp     dword ptr [ebp + 0x1c], ebx
        jz      L_7084
    L_6ff2:
        mov     esi, dword ptr [ebp + 0x1c]
        cmp     dword ptr [esi + 0x8], edx
        jnz     L_7084
        push    0x10
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_701b
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0xc], ebx
        mov     edx, eax
        jmp     L_701d
    L_701b:
        xor     edx, edx
    L_701d:
        mov     eax, dword ptr [esi + 0xc]
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [ebp + 0x20]
        cmp     eax, ebx
        mov     dword ptr [edx], esi
        jz      L_706f
        mov     ecx, dword ptr [eax + 0x8]
        cmp     ecx, ebx
        jz      L_7052
        mov     edi, dword ptr [esi + 0x10]
        mov     edi, dword ptr [edi + 0x18]
    L_7039:
        mov     ebx, dword ptr [ecx]
        mov     ebx, dword ptr [ebx + 0x10]
        cmp     dword ptr [ebx + 0x18], edi
        jge     L_7050
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x8]
        xor     ebx, ebx
        cmp     ecx, ebx
        jnz     L_7039
        jmp     L_7052
    L_7050:
        xor     ebx, ebx
    L_7052:
        mov     ecx, dword ptr [eax + 0x8]
        cmp     ecx, ebx
        jnz     L_7061
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [edx + 0xc], eax
        jmp     L_7072
    L_7061:
        mov     dword ptr [edx + 0x8], ecx
        mov     dword ptr [ecx + 0xc], edx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [edx + 0xc], eax
        jmp     L_7072
    L_706f:
        mov     dword ptr [ebp + 0x20], edx
    L_7072:
        mov     eax, dword ptr [esi + 0x18]
        cmp     eax, ebx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x1c], eax
        jnz     L_6ff2
    L_7084:
        mov     ecx, dword ptr [esp + 0x30]
        /* __emit: MSVC6 swaps test operands (85 CA); ref needs 85 D1 (test ecx,edx) */
        __emit  0x85
        __emit  0xD1
        jnz     L_7cbc
        mov     ecx, dword ptr [ebp + 0x20]
        xor     eax, eax
        cmp     ecx, ebx
        jnz     L_70c2
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [edx]
        shl     ecx, 0x2
        cmp     ecx, ebx
        jle     L_7c85
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, 0x840050
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
        jmp     L_7c85
    L_70c2:
        cmp     ecx, ebx
        mov     dword ptr [ebp + 0x24], ecx
        jz      L_7c85
        jmp     L_70d3
    L_70cf:
        mov     eax, dword ptr [esp + 0x20]
    L_70d3:
        mov     ecx, dword ptr [ebp + 0x24]
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edi, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x28], ebx
        sar     ebx, cl
        mov     ecx, dword ptr [esp + 0x4c]
        inc     eax
        sub     ecx, 0x0
        mov     dword ptr [esp + 0x20], eax
        lea     esi, [ebx*0x4 + g_840050]
        jz      L_76d4
        dec     ecx
        jz      L_7697
        dec     ecx
        jnz     L_7c70
        mov     edx, dword ptr [edx + 0x10]
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x3c], ecx
        call    dword ptr [edx + 0x4]
        test    eax, eax
        jz      L_7c70
        mov     eax, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [eax + 0x40]
        mov     ebp, dword ptr [esp + 0x48]
        lea     ecx, [eax + eax*0x2]
        mov     edx, dword ptr [ecx*0x4 + g_83f608]
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x18]
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [esp + 0x48]
        add     eax, edx
        push    eax
        call    FUN_006d3fc0
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [ecx + 0x24]
        mov     eax, dword ptr [edx]
        mov     edx, dword ptr [eax + 0x10]
        mov     eax, dword ptr [edx + 0x1c]
        mov     ecx, ebp
        sar     edi, cl
        mov     ecx, dword ptr [esp + 0x34]
        shl     ebp, 0x18
        or      ebp, ecx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [ecx + 0x30]
        and     ecx, 0x3fd5
        cmp     ecx, 0x151
        mov     dword ptr [esp + 0x14], edx
        jg      L_7528
        jz      L_7519
        cmp     ecx, 0x101
        jg      L_7492
        jz      L_7483
        add     ecx, -0x40
        cmp     ecx, 0xc0
        ja      L_7c70
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_jt_6d7d80]
        jmp     dword ptr [edx*0x4 + g_jt_6d7d60]
    L_71d5:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x24]
        mov     ebp, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [edx + 0x20]
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx + 0x20]
        imul    ebp, edx
        cmp     ebx, edi
        jge     L_7c70
        sub     edi, ebx
    L_7206:
        mov     bl, byte ptr [eax]
        shl     bl, 0x3
        mov     byte ptr [esi], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x2
        and     bl, 0xf8
        mov     byte ptr [esi + 0x1], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x7
        mov     byte ptr [esi + 0x2], bl
        add     esi, 0x4
        add     eax, edx
        dec     ecx
        test    ecx, ecx
        jg      L_722e
        sub     eax, ebp
        mov     ecx, ebp
    L_722e:
        dec     edi
        jnz     L_7206
        jmp     L_7c70
    L_7236:
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [edx + 0x24]
        mov     edx, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x24]
        mov     ebp, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x48]
        sar     ebp, cl
        mov     ecx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ecx + 0x20]
        imul    ebp, edx
        cmp     ebx, edi
        jge     L_7c70
        sub     edi, ebx
    L_7267:
        mov     bl, byte ptr [eax]
        shl     bl, 0x3
        mov     byte ptr [esi], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x2
        and     bl, 0xf8
        mov     byte ptr [esi + 0x1], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x7
        mov     byte ptr [esi + 0x2], bl
        add     esi, 0x4
        sub     eax, edx
        dec     ecx
        test    ecx, ecx
        jg      L_728f
        add     eax, ebp
        mov     ecx, ebp
    L_728f:
        dec     edi
        jnz     L_7267
        jmp     L_7c70
    L_7297:
        sub     edi, ebx
        test    edi, edi
        jle     L_7c70
        mov     ebp, eax
        xor     ecx, ecx
    L_72a3:
        mov     cx, word ptr [ebp]
        xor     eax, eax
        mov     al, byte ptr [esi]
        mov     edx, ecx
        and     edx, 0x1f
        lea     edx, [eax + edx*0x8]
        test    edx, 0xffffff00
        jz      L_72c2
        mov     edx, 0xff
    L_72c2:
        mov     byte ptr [esi], dl
        xor     eax, eax
        mov     al, byte ptr [esi + 0x1]
        mov     edx, ecx
        shr     edx, 0x2
        and     edx, 0xf8
        add     edx, eax
        test    edx, 0xffffff00
        jz      L_72e3
        mov     edx, 0xff
    L_72e3:
        mov     byte ptr [esi + 0x1], dl
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x2]
        shr     ecx, 0x7
        and     ecx, 0xf8
        add     ecx, edx
        test    ecx, 0xffffff00
        jz      L_7303
        mov     ecx, 0xff
    L_7303:
        mov     byte ptr [esi + 0x2], cl
        add     esi, 0x4
        add     ebp, 0x2
        dec     edi
        /* __emit: MSVC6 miscomputes backward jnz rel (75 96); ref needs 75 94 */
        __emit  0x75
        __emit  0x94
        jmp     L_7c70
    L_7314:
        cmp     ebx, edi
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx + 0x24]
        mov     edx, dword ptr [edx + 0x20]
        jge     L_7c70
        sub     edi, ebx
        xor     ecx, ecx
    L_7328:
        mov     cl, byte ptr [eax]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        and     ecx, 0x1f
        lea     ecx, [ebx + ecx*0x8]
        test    ecx, 0xffffff00
        jz      L_7343
        mov     ecx, 0xff
    L_7343:
        mov     ebp, dword ptr [eax]
        mov     byte ptr [esi], cl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x1]
        mov     ecx, ebp
        sar     ecx, 0x2
        and     ecx, 0xf8
        add     ecx, ebx
        test    ecx, 0xffffff00
        jz      L_7366
        mov     ecx, 0xff
    L_7366:
        mov     byte ptr [esi + 0x1], cl
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x2]
        sar     ebp, 0x7
        and     ebp, 0xf8
        add     ebp, ecx
        test    ebp, 0xffffff00
        mov     ecx, 0xff
        jnz     L_7388
        mov     ecx, ebp
    L_7388:
        mov     byte ptr [esi + 0x2], cl
        add     esi, 0x4
        sub     eax, edx
        dec     edi
        /* __emit: MSVC6 miscomputes backward jnz rel (75 97); ref needs 75 95 */
        __emit  0x75
        __emit  0x95
        jmp     L_7c70
    L_7398:
        cmp     ebx, edi
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ecx + 0x20]
        jge     L_7c70
        sub     edi, ebx
        xor     edx, edx
    L_73ac:
        mov     dl, byte ptr [eax]
        mov     ebp, dword ptr [eax]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        add     esi, 0x4
        add     eax, ecx
        and     edx, 0x1f
        shl     edx, 0x3
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x4], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x3]
        mov     edx, ebp
        sar     edx, 0x2
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x3], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x2]
        mov     edx, ebp
        sar     edx, 0x7
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        dec     edi
        mov     byte ptr [esi + -0x2], dl
        /* __emit: MSVC6 miscomputes backward jnz rel (75 AF); ref needs 75 AD */
        __emit  0x75
        __emit  0xAD
        jmp     L_7c70
    L_7404:
        cmp     ebx, edi
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [edx + 0x20]
        jge     L_7c70
        sub     edi, ebx
        xor     edx, edx
    L_7418:
        mov     dl, byte ptr [eax]
        mov     ebp, dword ptr [eax]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        add     esi, 0x4
        sub     eax, ecx
        and     edx, 0x1f
        shl     edx, 0x3
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x4], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x3]
        mov     edx, ebp
        sar     edx, 0x2
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x3], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x2]
        mov     edx, ebp
        sar     edx, 0x7
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        dec     edi
        mov     byte ptr [esi + -0x2], dl
        /* __emit: MSVC6 miscomputes backward jnz rel (75 AF); ref needs 75 AD */
        __emit  0x75
        __emit  0xAD
        jmp     L_7c70
    L_7470:
        mov     eax, dword ptr [esp + 0x14]
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    eax
        call    FUN_006dcb90
        jmp     L_7c6d
    L_7483:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dcd00
        jmp     L_7c6d
    L_7492:
        lea     eax, [ecx + 0xfffffefc]
        cmp     eax, 0x4c
        ja      L_7c70
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_jt_6d7e64]
        jmp     dword ptr [ecx*0x4 + g_jt_6d7e44]
    L_74b0:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dce70
        jmp     L_7c6d
    L_74bf:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dcfe0
        jmp     L_7c6d
    L_74ce:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dd990
        jmp     L_7c6d
    L_74dd:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006ddc60
        jmp     L_7c6d
    L_74ec:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006ddf30
        jmp     L_7c6d
    L_74fb:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006de4c0
        jmp     L_7c6d
    L_750a:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006de1f0
        jmp     L_7c6d
    L_7519:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006de780
        jmp     L_7c6d
    L_7528:
        cmp     ecx, 0x201
        jg      L_75f0
        jz      L_75d2
        lea     eax, [ecx + 0xfffffeac]
        cmp     eax, 0xac
        ja      L_7c70
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_jt_6d7ed4]
        jmp     dword ptr [ecx*0x4 + g_jt_6d7eb4]
    L_755a:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dea50
        jmp     L_7c6d
    L_7569:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006ded10
        jmp     L_7c6d
    L_7578:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006defd0
        jmp     L_7c6d
    L_7587:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006df040
        jmp     L_7c6d
    L_7596:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dd150
        jmp     L_7c6d
    L_75a5:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dd580
        jmp     L_7c6d
    L_75b4:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x40]
        push    ebp
        push    edi
        push    ebx
        push    eax
        add     ebx, ecx
        push    ebx
        push    esi
        push    edx
        call    FUN_006df0b0
        add     esp, 0x1c
        jmp     L_7c70
    L_75d2:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x40]
        push    ebp
        push    edi
        push    ebx
        push    eax
        add     ebx, ecx
        push    ebx
        push    esi
        push    edx
        call    FUN_006df350
        add     esp, 0x1c
        jmp     L_7c70
    L_75f0:
        lea     eax, [ecx + 0xfffffdfc]
        cmp     eax, 0x81
        ja      L_7c70
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_jt_6d7fa4]
        jmp     dword ptr [ecx*0x4 + g_jt_6d7f84]
    L_7610:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x40]
        push    ebp
        push    edi
        push    ebx
        push    eax
        add     ebx, ecx
        push    ebx
        push    esi
        push    edx
        call    FUN_006df5f0
        add     esp, 0x1c
        jmp     L_7c70
    L_762e:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x40]
        push    ebp
        push    edi
        push    ebx
        push    eax
        add     ebx, ecx
        push    ebx
        push    esi
        push    edx
        call    FUN_006df890
        add     esp, 0x1c
        jmp     L_7c70
    L_764c:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dfed0
        jmp     L_7c6d
    L_765b:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dff10
        jmp     L_7c6d
    L_766a:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dff50
        jmp     L_7c6d
    L_7679:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dff90
        jmp     L_7c6d
    L_7688:
        push    ebp
        push    edi
        push    ebx
        push    esi
        push    edx
        call    FUN_006dfb30
        jmp     L_7c6d
    L_7697:
        mov     ecx, dword ptr [esp + 0x48]
        sar     edi, cl
        inc     eax
        mov     dword ptr [esp + 0x20], eax
        cmp     ebx, edi
        jge     L_7c70
        mov     cl, byte ptr [eax + eax*0x2 + g_7b68d2]
        mov     dl, byte ptr [eax + eax*0x2 + g_7b68d1]
        mov     al, byte ptr [eax + eax*0x2 + g_7b68d0]
        sub     edi, ebx
    L_76c1:
        mov     byte ptr [esi], cl
        mov     byte ptr [esi + 0x1], dl
        mov     byte ptr [esi + 0x2], al
        add     esi, 0x4
        dec     edi
        jnz     L_76c1
        jmp     L_7c70
    L_76d4:
        mov     ecx, dword ptr [edx + 0x10]
        mov     edx, dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [esp + 0x24]
        add     eax, edx
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    eax
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [esp + 0x48]
        add     edx, eax
        push    edx
        call    FUN_006d3fc0
        mov     eax, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     ebp, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [ebp + 0x1c]
        sar     edi, cl
        mov     ecx, dword ptr [edx + 0x30]
        and     ecx, 0x3fd5
        cmp     ecx, 0x151
        jg      L_7ad9
        jz      L_7ac6
        cmp     ecx, 0x101
        jg      L_7a23
        jz      L_7a10
        add     ecx, -0x40
        cmp     ecx, 0xc0
        ja      L_7c70
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_jt_6d8048]
        jmp     dword ptr [edx*0x4 + g_jt_6d8028]
    L_7762:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [edx + 0x20]
        mov     edx, dword ptr [ebp + 0x4]
        mov     ebp, dword ptr [ebp + 0x20]
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, dword ptr [edx + 0x24]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x48]
        sar     edx, cl
        mov     ecx, dword ptr [esp + 0x3c]
        imul    edx, ecx
        cmp     ebx, edi
        jge     L_7c70
        sub     edi, ebx
    L_7793:
        mov     bl, byte ptr [eax]
        shl     bl, 0x3
        mov     byte ptr [esi], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x2
        and     bl, 0xf8
        mov     byte ptr [esi + 0x1], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x7
        mov     byte ptr [esi + 0x2], bl
        add     esi, 0x4
        add     eax, ecx
        dec     ebp
        test    ebp, ebp
        jg      L_77bb
        sub     eax, edx
        mov     ebp, edx
    L_77bb:
        dec     edi
        jnz     L_7793
        jmp     L_7c70
    L_77c3:
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [edx + 0x24]
        mov     edx, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [ebp + 0x4]
        mov     ebp, dword ptr [ebp + 0x20]
        mov     dword ptr [esp + 0x3c], edx
        mov     edx, dword ptr [ecx + 0x24]
        mov     edx, dword ptr [edx + 0x10]
        mov     ecx, dword ptr [esp + 0x48]
        sar     edx, cl
        mov     ecx, dword ptr [esp + 0x3c]
        imul    edx, ecx
        cmp     ebx, edi
        jge     L_7c70
        sub     edi, ebx
    L_77f4:
        mov     bl, byte ptr [eax]
        shl     bl, 0x3
        mov     byte ptr [esi], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x2
        and     bl, 0xf8
        mov     byte ptr [esi + 0x1], bl
        mov     ebx, dword ptr [eax]
        sar     ebx, 0x7
        mov     byte ptr [esi + 0x2], bl
        add     esi, 0x4
        sub     eax, ecx
        dec     ebp
        test    ebp, ebp
        jg      L_781c
        add     eax, edx
        mov     ebp, edx
    L_781c:
        dec     edi
        jnz     L_77f4
        jmp     L_7c70
    L_7824:
        sub     edi, ebx
        test    edi, edi
        jle     L_7c70
        mov     ebp, eax
        xor     ecx, ecx
    L_7830:
        mov     cx, word ptr [ebp]
        xor     edx, edx
        mov     dl, byte ptr [esi]
        mov     eax, ecx
        and     eax, 0x1f
        lea     edx, [edx + eax*0x8]
        test    edx, 0xffffff00
        jz      L_784f
        mov     edx, 0xff
    L_784f:
        mov     byte ptr [esi], dl
        xor     eax, eax
        mov     al, byte ptr [esi + 0x1]
        mov     edx, ecx
        shr     edx, 0x2
        and     edx, 0xf8
        add     edx, eax
        test    edx, 0xffffff00
        jz      L_7870
        mov     edx, 0xff
    L_7870:
        mov     byte ptr [esi + 0x1], dl
        xor     edx, edx
        mov     dl, byte ptr [esi + 0x2]
        shr     ecx, 0x7
        and     ecx, 0xf8
        add     ecx, edx
        test    ecx, 0xffffff00
        jz      L_7890
        mov     ecx, 0xff
    L_7890:
        mov     byte ptr [esi + 0x2], cl
        add     esi, 0x4
        add     ebp, 0x2
        dec     edi
        /* __emit: MSVC6 miscomputes backward jnz rel (75 96); ref needs 75 94 */
        __emit  0x75
        __emit  0x94
        jmp     L_7c70
    L_78a1:
        cmp     ebx, edi
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx + 0x24]
        mov     edx, dword ptr [edx + 0x20]
        jge     L_7c70
        sub     edi, ebx
        xor     ecx, ecx
    L_78b5:
        mov     cl, byte ptr [eax]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        and     ecx, 0x1f
        lea     ecx, [ebx + ecx*0x8]
        test    ecx, 0xffffff00
        jz      L_78d0
        mov     ecx, 0xff
    L_78d0:
        mov     ebp, dword ptr [eax]
        mov     byte ptr [esi], cl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + 0x1]
        mov     ecx, ebp
        sar     ecx, 0x2
        and     ecx, 0xf8
        add     ecx, ebx
        test    ecx, 0xffffff00
        jz      L_78f3
        mov     ecx, 0xff
    L_78f3:
        mov     byte ptr [esi + 0x1], cl
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x2]
        sar     ebp, 0x7
        and     ebp, 0xf8
        add     ebp, ecx
        test    ebp, 0xffffff00
        mov     ecx, 0xff
        jnz     L_7915
        mov     ecx, ebp
    L_7915:
        mov     byte ptr [esi + 0x2], cl
        add     esi, 0x4
        sub     eax, edx
        dec     edi
        /* __emit: MSVC6 miscomputes backward jnz rel (75 97); ref needs 75 95 */
        __emit  0x75
        __emit  0x95
        jmp     L_7c70
    L_7925:
        cmp     ebx, edi
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ecx + 0x20]
        jge     L_7c70
        sub     edi, ebx
        xor     edx, edx
    L_7939:
        mov     dl, byte ptr [eax]
        mov     ebp, dword ptr [eax]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        add     esi, 0x4
        add     eax, ecx
        and     edx, 0x1f
        shl     edx, 0x3
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x4], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x3]
        mov     edx, ebp
        sar     edx, 0x2
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x3], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x2]
        mov     edx, ebp
        sar     edx, 0x7
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        dec     edi
        mov     byte ptr [esi + -0x2], dl
        /* __emit: MSVC6 miscomputes backward jnz rel (75 AF); ref needs 75 AD */
        __emit  0x75
        __emit  0xAD
        jmp     L_7c70
    L_7991:
        cmp     ebx, edi
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [edx + 0x20]
        jge     L_7c70
        sub     edi, ebx
        xor     edx, edx
    L_79a5:
        mov     dl, byte ptr [eax]
        mov     ebp, dword ptr [eax]
        xor     ebx, ebx
        mov     bl, byte ptr [esi]
        add     esi, 0x4
        sub     eax, ecx
        and     edx, 0x1f
        shl     edx, 0x3
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x4], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x3]
        mov     edx, ebp
        sar     edx, 0x2
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        mov     byte ptr [esi + -0x3], dl
        xor     ebx, ebx
        mov     bl, byte ptr [esi + -0x2]
        mov     edx, ebp
        sar     edx, 0x7
        and     edx, 0xf8
        imul    edx, ebx
        sar     edx, 0x8
        dec     edi
        mov     byte ptr [esi + -0x2], dl
        /* __emit: MSVC6 miscomputes backward jnz rel (75 AF); ref needs 75 AD */
        __emit  0x75
        __emit  0xAD
        jmp     L_7c70
    L_79fd:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d82f0
        jmp     L_7c6d
    L_7a10:
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d8550
        jmp     L_7c6d
    L_7a23:
        lea     eax, [ecx + 0xfffffefc]
        cmp     eax, 0x4c
        ja      L_7c70
        xor     edx, edx
        mov     dl, byte ptr [eax + g_jt_6d812c]
        jmp     dword ptr [edx*0x4 + g_jt_6d810c]
    L_7a41:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d87c0
        jmp     L_7c6d
    L_7a54:
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d8a00
        jmp     L_7c6d
    L_7a67:
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d94e0
        jmp     L_7c6d
    L_7a7a:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d98b0
        jmp     L_7c6d
    L_7a8d:
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d9c90
        jmp     L_7c6d
    L_7aa0:
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006da460
        jmp     L_7c6d
    L_7ab3:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006da070
        jmp     L_7c6d
    L_7ac6:
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006da830
        jmp     L_7c6d
    L_7ad9:
        cmp     ecx, 0x201
        jg      L_7bc1
        jz      L_7b9f
        lea     eax, [ecx + 0xfffffeac]
        cmp     eax, 0xac
        ja      L_7c70
        xor     edx, edx
        mov     dl, byte ptr [eax + g_jt_6d819c]
        jmp     dword ptr [edx*0x4 + g_jt_6d817c]
    L_7b0b:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dac00
        jmp     L_7c6d
    L_7b1e:
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dafd0
        jmp     L_7c6d
    L_7b31:
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006db380
        jmp     L_7c6d
    L_7b44:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006db470
        jmp     L_7c6d
    L_7b57:
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d8c60
        jmp     L_7c6d
    L_7b6a:
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006d9090
        jmp     L_7c6d
    L_7b7d:
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x40]
        push    eax
        push    edi
        push    ebx
        push    ecx
        add     ebx, edx
        push    ebx
        push    esi
        push    ebp
        call    FUN_006db560
        add     esp, 0x1c
        jmp     L_7c70
    L_7b9f:
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x40]
        push    eax
        push    edi
        push    ebx
        push    ecx
        add     ebx, edx
        push    ebx
        push    esi
        push    ebp
        call    FUN_006db8f0
        add     esp, 0x1c
        jmp     L_7c70
    L_7bc1:
        lea     eax, [ecx + 0xfffffdfc]
        cmp     eax, 0x81
        ja      L_7c70
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_jt_6d826c]
        jmp     dword ptr [ecx*0x4 + g_jt_6d824c]
    L_7be1:
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x40]
        push    edx
        push    edi
        push    ebx
        push    eax
        add     ebx, ecx
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dbc90
        add     esp, 0x1c
        jmp     L_7c70
    L_7c00:
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x40]
        push    edx
        push    edi
        push    ebx
        push    eax
        add     ebx, ecx
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dc010
        add     esp, 0x1c
        jmp     L_7c70
    L_7c1f:
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dc790
        jmp     L_7c6d
    L_7c2f:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dc890
        jmp     L_7c6d
    L_7c3f:
        mov     ecx, dword ptr [esp + 0x48]
        push    ecx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dc990
        jmp     L_7c6d
    L_7c4f:
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dca90
        jmp     L_7c6d
    L_7c5f:
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_006dc3b0
    L_7c6d:
        add     esp, 0x14
    L_7c70:
        mov     ebp, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [ebp + 0x24]
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        mov     dword ptr [ebp + 0x24], eax
        jnz     L_70cf
    L_7c85:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edi, dword ptr [ebp + 0x2c]
        sar     eax, cl
        mov     esi, 0x840050
        shl     eax, 0x2
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     eax, dword ptr [ebp + 0x30]
        mov     ecx, dword ptr [ebp + 0x2c]
        shl     eax, 0x2
        add     ecx, eax
        mov     dword ptr [ebp + 0x2c], ecx
        xor     ebx, ebx
    L_7cbc:
        mov     eax, dword ptr [ebp + 0x20]
        cmp     eax, ebx
        jz      L_7d28
        mov     dword ptr [ebp + 0x24], eax
    L_7cc6:
        mov     eax, dword ptr [ebp + 0x24]
        dec     dword ptr [eax + 0x4]
        cmp     dword ptr [eax + 0x4], ebx
        jg      L_7d1d
        cmp     eax, dword ptr [ebp + 0x20]
        jnz     L_7ce3
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, ebx
        mov     dword ptr [ebp + 0x20], eax
        jz      L_7ce3
        mov     dword ptr [eax + 0xc], ebx
    L_7ce3:
        mov     eax, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [eax + 0xc]
        cmp     ecx, ebx
        jz      L_7cf3
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], edx
    L_7cf3:
        mov     eax, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [eax + 0x8]
        cmp     ecx, ebx
        jz      L_7d03
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0xc], eax
    L_7d03:
        mov     eax, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [eax + 0x8]
        push    eax
        mov     dword ptr [ebp + 0x28], ecx
        call    FUN_004084e0
        mov     edx, dword ptr [ebp + 0x28]
        add     esp, 0x4
        mov     dword ptr [ebp + 0x24], edx
        jmp     L_7d23
    L_7d1d:
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ebp + 0x24], eax
    L_7d23:
        cmp     dword ptr [ebp + 0x24], ebx
        jnz     L_7cc6
    L_7d28:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x2c]
        inc     edx
        cmp     edx, eax
        mov     dword ptr [esp + 0x18], edx
        jl      L_6fe9
    L_7d3d:
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 0x14]
        pop     edi
        add     eax, ecx
        pop     esi
        mov     dword ptr [ebp + 0x10], eax
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x28
        ret     0x14
    L_7d54:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x28
        ret     0x14
    }
}
