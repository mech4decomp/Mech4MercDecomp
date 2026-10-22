/*
 * FUN_1001b800 (607 B) — __stdcall, RET 0x8.
 * SEH-guarded hash-list constructor/cleanup: allocates two 0x3c-byte
 * objects, links them, and on failure frees the hash lists via the
 * 0x10055050 free-list.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10055050;
extern void FUN_10001d50(void);
extern void FUN_100063b0(void);
extern void FUN_10005d70(void);
extern void FUN_1000c4c0(void);
extern void FUN_10006480(void);
extern void FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001b800(void)
{
    __asm {
        push    -1
        push    0x10048116
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x3c
        xor     ebp, ebp
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x14], esi
        cmp     esi, ebp
        mov     dword ptr [esp + 0x20], ebp
        mov     edi, 0x10004b10
        jz      L_b865
        push    0x10
        push    8
        push    ebp
        push    0x10004b20
        push    edi
        mov     ecx, esi
        call    FUN_100063b0
        mov     ebx, esi
        mov     dword ptr [esi + 0x2c], edi
        mov     dword ptr [esi + 0x30], 0x10004b20
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x38], ebp
        mov     dword ptr [esp + 0x10], ebx
        jmp     L_b86b
    L_b865:
        mov     dword ptr [esp + 0x10], ebp
        mov     ebx, ebp
    L_b86b:
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x20], 0xffffffff
        jz      L_ba45
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 4
        mov     dword ptr [esp + 0x14], esi
        cmp     esi, ebp
        mov     dword ptr [esp + 0x20], 1
        jz      L_b8c1
        push    0x10
        push    8
        push    ebp
        push    0x10004b20
        push    edi
        mov     ecx, esi
        call    FUN_100063b0
        mov     dword ptr [esi + 0x2c], edi
        mov     edi, esi
        mov     dword ptr [esi + 0x30], 0x10004b20
        mov     dword ptr [esi + 0x34], ebp
        mov     dword ptr [esi + 0x38], ebp
        mov     dword ptr [esp + 0x14], edi
        jmp     L_b8c7
    L_b8c1:
        mov     dword ptr [esp + 0x14], ebp
        mov     edi, ebp
    L_b8c7:
        cmp     edi, ebp
        mov     dword ptr [esp + 0x20], 0xffffffff
        jz      L_b8fe
        mov     eax, dword ptr [esp + 0x2c]
        lea     ecx, [eax*4 + 4]
        push    ecx
        call    FUN_10001d50
        add     esp, 4
        cmp     eax, ebp
        jz      L_b8fe
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 4], edi
        xor     eax, eax
        jmp     L_ba4a
    L_b8fe:
        mov     dword ptr [esp + 0x28], ebx
        xor     eax, eax
        cmp     word ptr [ebx], bp
        mov     dword ptr [esp + 0x20], 2
        mov     dword ptr [esp + 0x2c], eax
        jbe     L_b989
    L_b915:
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [edx + 4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 4
        add     ebx, esi
        mov     esi, dword ptr [ebx]
        cmp     esi, ebx
        jz      L_b979
        __emit 0x8D   /* __emit: MSVC6 drops the 00 disp byte for lea esp,[esp] (8D 24 24); ref needs 8D 64 24 00 */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_b930:
        mov     eax, 0x10006150
        test    eax, eax
        jz      L_b94a
        mov     ecx, dword ptr [esi + 8]
        cmp     ecx, ebp
        jz      L_b94a
        push    1
        call    FUN_10005d70
        mov     dword ptr [esi + 8], ebp
    L_b94a:
        mov     ecx, dword ptr [esi + 4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [edx + 4], eax
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi], ebp
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_b930
        mov     eax, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x14]
    L_b979:
        mov     edx, dword ptr [esp + 0x10]
        inc     eax
        cmp     ax, word ptr [edx]
        mov     dword ptr [esp + 0x2c], eax
        jc      L_b915
        mov     ebx, edx
    L_b989:
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x24], ebp
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    FUN_10006480
        push    ebx
        call    FUN_10001d60
        add     esp, 4
        cmp     edi, ebp
        jz      L_ba45
        mov     dword ptr [esp + 0x28], edi
        xor     eax, eax
        cmp     word ptr [edi], bp
        mov     dword ptr [esp + 0x20], 3
        mov     dword ptr [esp + 0x2c], eax
        jbe     L_ba2a
    L_b9c3:
        mov     edx, dword ptr [edi + 4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_ba20
    L_b9d7:
        mov     eax, 0x10006150
        test    eax, eax
        jz      L_b9f1
        mov     ecx, dword ptr [esi + 8]
        cmp     ecx, ebp
        jz      L_b9f1
        push    1
        call    FUN_10005d70
        mov     dword ptr [esi + 8], ebp
    L_b9f1:
        mov     ecx, dword ptr [esi + 4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [edx + 4], eax
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi], ebp
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_b9d7
        mov     eax, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x14]
    L_ba20:
        inc     eax
        cmp     ax, word ptr [edi]
        mov     dword ptr [esp + 0x2c], eax
        jc      L_b9c3
    L_ba2a:
        mov     ecx, edi
        mov     dword ptr [edi + 0x24], ebp
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    FUN_10006480
        push    edi
        call    FUN_10001d60
        add     esp, 4
    L_ba45:
        mov     eax, 0x8007000e
    L_ba4a:
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     0x8
    }
}
