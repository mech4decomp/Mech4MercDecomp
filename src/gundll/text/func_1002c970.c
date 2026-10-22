/*
 * FUN_1002c970 (1169 B) - __stdcall, RET 0xC. SEH-guarded object/collection
 * builder with hash-list maintenance.
 *
 * CFLAGS: /O1
 */

extern int g_10055050;

extern void FUN_10001d50(void);
extern void FUN_100063b0(void);
extern void FUN_10037bf0(void);
extern void FUN_10006170(void);
extern void FUN_1001b280(void);
extern void FUN_1000c410(void);
extern void FUN_1000c4c0(void);
extern void FUN_10005d70(void);
extern void FUN_10006480(void);
extern void FUN_10001d60(void);
extern void FUN_10006320(void);
extern void FUN_1001aee0(void);
extern void FUN_100064e0(void);

__declspec(naked) void __stdcall FUN_1002c970(void)
{
    __asm {
        push    -0x1
        push    0x100487ce
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        push    0x3c
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], edi
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x2c], esi
        cmp     esi, edi
        mov     dword ptr [esp + 0x40], edi
        jz      L_1002c9e0
        push    0x10
        push    0x8
        push    edi
        push    0x10004b20
        push    0x10004b10
        mov     ecx, esi
        call    FUN_100063b0
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x38], edi
        mov     edi, esi
        mov     dword ptr [esi + 0x2c], 0x10004b10
        mov     dword ptr [esi + 0x30], 0x10004b20
        mov     dword ptr [esp + 0x10], edi
        jmp     L_1002c9e4
    L_1002c9e0:
        mov     dword ptr [esp + 0x10], edi
    L_1002c9e4:
        mov     edx, dword ptr [esp + 0x4c]
        mov     ebx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x4c], 0xffffffff
        mov     dword ptr [esp + 0x38], edi
        call    dword ptr [eax + 0x28]
        mov     ebp, eax
        test    ebp, ebp
        jl      L_1002cd51
        mov     eax, dword ptr [esp + 0x28]
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [esp + 0x24], esi
        jbe     L_1002cbe2
    L_1002ca20:
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        push    edx
        push    ebx
        call    dword ptr [eax + 0x2c]
        mov     ebp, eax
        test    ebp, ebp
        jl      L_1002cd51
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x30]
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [eax]
        mov     ebp, eax
        test    ebp, ebp
        jl      L_1002cd51
        mov     eax, dword ptr [esp + 0x30]
        push    eax
        push    0x10049e28
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        jnz     L_1002cbd1
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebx]
        lea     edx, [esp + 0x34]
        push    edx
        push    0x10049c60
        push    eax
        push    ebx
        call    dword ptr [ecx + 0x14]
        mov     ebp, eax
        test    ebp, ebp
        jl      L_1002cd51
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x48], esi
        test    esi, esi
        mov     dword ptr [esp + 0x40], 0x1
        jz      L_1002cade
        mov     ebp, dword ptr [esp + 0x34]
        push    0x10
        push    0x8
        push    0x0
        push    0x10004af0
        push    0x1001b030
        mov     ecx, esi
        call    FUN_10006170
        mov     dword ptr [esi + 0x2c], 0x1001b030
        mov     dword ptr [esi + 0x30], 0x10004af0
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x38], 0x0
        jmp     L_1002cae0
    L_1002cade:
        xor     esi, esi
    L_1002cae0:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [ebx]
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        push    ebx
        mov     dword ptr [esp + 0x4c], 0xffffffff
        call    dword ptr [ecx + 0x4]
        mov     ebp, eax
        test    ebp, ebp
        jl      L_1002ccb5
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        mov     dword ptr [esp + 0x48], 0x0
        jbe     L_1002cb78
    L_1002cb12:
        mov     ecx, dword ptr [ebx]
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [esp + 0x4c]
        lea     eax, [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ebx
        call    dword ptr [ecx + 0x8]
        mov     ebp, eax
        test    ebp, ebp
        jl      L_1002ccb5
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    0x10049c60
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        jz      L_1002cb67
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_1001b280
        mov     ebp, eax
        test    ebp, ebp
        jl      L_1002ccb5
    L_1002cb67:
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x20]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x48], eax
        jc      L_1002cb12
    L_1002cb78:
        mov     eax, dword ptr [esi + 0x34]
        push    eax
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 0x2]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x4]
        xor     edi, edi
        mov     di, ax
        mov     dword ptr [esp + 0x48], edi
        shl     edi, 0x4
        add     edi, edx
        mov     edx, dword ptr [g_10055050]
        push    edx
        call    FUN_1000c410
        test    eax, eax
        jz      L_1002ccac
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x8], esi
        mov     esi, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x4], edi
        mov     edx, dword ptr [edi]
        mov     dword ptr [eax], edx
        mov     dword ptr [edi], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [esp + 0x10]
        inc     dword ptr [eax + 0x24]
        mov     edi, eax
    L_1002cbd1:
        mov     eax, dword ptr [esp + 0x28]
        inc     esi
        cmp     esi, eax
        mov     dword ptr [esp + 0x24], esi
        jc      L_1002ca20
    L_1002cbe2:
        mov     eax, dword ptr [edi + 0x24]
        test    eax, eax
        jnz     L_1002cc9d
        mov     dword ptr [esp + 0x48], edi
        xor     eax, eax
        cmp     word ptr [edi], ax
        mov     dword ptr [esp + 0x40], 0x2
        mov     dword ptr [esp + 0x4c], eax
        jbe     L_1002cc76
    L_1002cc04:
        mov     edx, dword ptr [edi + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx*0x1]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_1002cc6c
    L_1002cc18:
        mov     edx, 0x10006150
        test    edx, edx
        jz      L_1002cc36
        mov     ecx, dword ptr [esi + 0x8]
        test    ecx, ecx
        jz      L_1002cc36
        push    0x1
        call    FUN_10005d70
        mov     dword ptr [esi + 0x8], 0x0
    L_1002cc36:
        mov     eax, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     eax, dword ptr [g_10055050]
        push    esi
        push    eax
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_1002cc18
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x4c]
    L_1002cc6c:
        inc     eax
        cmp     ax, word ptr [edi]
        mov     dword ptr [esp + 0x4c], eax
        jc      L_1002cc04
    L_1002cc76:
        mov     ecx, edi
        mov     dword ptr [edi + 0x24], 0x0
        mov     dword ptr [esp + 0x40], 0xffffffff
        call    FUN_10006480
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esp + 0x2c], 0x0
    L_1002cc9d:
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [ecx], edx
        jmp     L_1002cdea
    L_1002ccac:
        mov     edi, dword ptr [esp + 0x10]
        mov     ebp, 0x8007000e
    L_1002ccb5:
        test    esi, esi
        jz      L_1002cd51
        mov     dword ptr [esp + 0x4c], esi
        push    0x0
        push    0x10006140
        push    esi
        mov     dword ptr [esp + 0x4c], 0x3
        call    FUN_10006320
        xor     ecx, ecx
        cmp     word ptr [esi], cx
        mov     dword ptr [esp + 0x40], 0xffffffff
        mov     dword ptr [esp + 0x4c], ecx
        jbe     L_1002cd2a
        __emit 0x8D   /* lea esp,[esp+0]: 7-byte alignment NOP (8D A4 24 00 00 00 00) */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_1002ccf0:
        mov     ebx, dword ptr [esi + 0x4]
        xor     edi, edi
        mov     di, cx
        shl     edi, 0x4
        mov     eax, dword ptr [edi + ebx*0x1]
        add     edi, ebx
        cmp     eax, edi
        jz      L_1002cd1c
    L_1002cd04:
        mov     ebx, dword ptr [eax]
        push    eax
        mov     eax, dword ptr [g_10055050]
        push    eax
        call    FUN_1000c4c0
        cmp     ebx, edi
        mov     eax, ebx
        jnz     L_1002cd04
        mov     ecx, dword ptr [esp + 0x4c]
    L_1002cd1c:
        inc     ecx
        cmp     cx, word ptr [esi]
        mov     dword ptr [esp + 0x4c], ecx
        jc      L_1002ccf0
        mov     edi, dword ptr [esp + 0x10]
    L_1002cd2a:
        cmp     word ptr [esi], 0x1
        jbe     L_1002cd3c
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_1002cd3c:
        mov     dword ptr [esi + 0x4], 0x0
        call    FUN_1001aee0
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    L_1002cd51:
        test    edi, edi
        jz      L_1002cdea
        mov     dword ptr [esp + 0x4c], edi
        push    0x0
        push    0x10006150
        push    edi
        mov     dword ptr [esp + 0x4c], 0x4
        call    FUN_100064e0
        xor     ecx, ecx
        cmp     word ptr [edi], cx
        mov     dword ptr [esp + 0x40], 0xffffffff
        mov     dword ptr [esp + 0x4c], ecx
        jbe     L_1002cdc3
    L_1002cd85:
        mov     ebx, dword ptr [edi + 0x4]
        xor     esi, esi
        mov     si, cx
        shl     esi, 0x4
        mov     eax, dword ptr [esi + ebx*0x1]
        add     esi, ebx
        cmp     eax, esi
        jz      L_1002cdb9
        __emit 0x8D   /* lea esp,[esp+0]: 7-byte alignment NOP (8D A4 24 00 00 00 00) */
        __emit 0xA4
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_1002cda0:
        mov     ecx, dword ptr [g_10055050]
        mov     ebx, dword ptr [eax]
        push    eax
        push    ecx
        call    FUN_1000c4c0
        cmp     ebx, esi
        mov     eax, ebx
        jnz     L_1002cda0
        mov     ecx, dword ptr [esp + 0x4c]
    L_1002cdb9:
        inc     ecx
        cmp     cx, word ptr [edi]
        mov     dword ptr [esp + 0x4c], ecx
        jc      L_1002cd85
    L_1002cdc3:
        cmp     word ptr [edi], 0x1
        jbe     L_1002cdd5
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
    L_1002cdd5:
        mov     dword ptr [edi + 0x4], 0x0
        call    FUN_1001aee0
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_1002cdea:
        mov     ecx, dword ptr [esp + 0x38]
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x34
        ret     0xc
    }
}
