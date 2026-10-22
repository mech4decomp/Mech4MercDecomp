/*
 * FUN_0072c970 (445 B) — Keyboard layout / IME detection. Compares the
 * current keyboard layout HKL against known CJK IME layouts, reads the
 * file version info of the IME DLL, and caches the result in
 * DAT_008825e8.
 *
 * __cdecl, RET (no params). Uses GetKeyboardLayout (IAT), a version-info
 * fn ptr (DAT_008aad20), and the file-version helper wrappers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075e352(void);
extern void __cdecl FUN_0075e34c(void);
extern void __cdecl FUN_0075e346(void);
extern void __cdecl FUN_006f3c80(void *param, void *param2);
extern void __cdecl FUN_006f4230(void *param);

extern int  g_8825ec;
extern int  g_8825e8;
extern void *g_76b588;   /* IAT: GetKeyboardLayout */
extern void *g_8aad20;   /* fn ptr: version info */

__declspec(naked) void FUN_0072c970(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        push    0
        call    dword ptr [g_76b588]
        cmp     dword ptr [g_8825ec], eax
        jnz     L_c992
        mov     eax, dword ptr [g_8825e8]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
L_c992:
        cmp     eax, 0xe0080404
        mov     dword ptr [g_8825ec], eax
        jz      L_c9a9
        cmp     eax, 0xe0090404
        jnz     L_cb1a
L_c9a9:
        push    0x103
        push    0x881750
        push    eax
        call    dword ptr [g_8aad20]
        test    eax, eax
        jbe     L_cb1a
        mov     esi, 0x7a59b0
        mov     eax, 0x881750
L_c9cc:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_c9f4
        test    cl, cl
        jz      L_c9f0
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_c9f4
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_c9cc
L_c9f0:
        xor     eax, eax
        jmp     L_c9f9
L_c9f4:
        sbb     eax, eax
        sbb     eax, -1
L_c9f9:
        test    eax, eax
        jz      L_ca77
        mov     esi, 0x7a59a0
        mov     eax, 0x881750
L_ca07:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_ca2f
        test    cl, cl
        jz      L_ca2b
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_ca2f
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_ca07
L_ca2b:
        xor     eax, eax
        jmp     L_ca34
L_ca2f:
        sbb     eax, eax
        sbb     eax, -1
L_ca34:
        test    eax, eax
        jz      L_ca77
        mov     esi, 0x7a5990
        mov     eax, 0x881750
L_ca42:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_ca6a
        test    cl, cl
        jz      L_ca66
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_ca6a
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_ca42
L_ca66:
        xor     eax, eax
        jmp     L_ca6f
L_ca6a:
        sbb     eax, eax
        sbb     eax, -1
L_ca6f:
        test    eax, eax
        jnz     L_cb1a
L_ca77:
        lea     eax, [esp + 0xc]
        push    eax
        push    0x881750
        call    FUN_0075e352
        mov     esi, eax
        test    esi, esi
        jz      L_cb1a
        push    0
        push    esi
        call    FUN_006f3c80
        mov     edi, eax
        test    edi, edi
        jz      L_cb14
        mov     ecx, dword ptr [esp + 0xc]
        push    edi
        push    esi
        push    ecx
        push    0x881750
        call    FUN_0075e34c
        test    eax, eax
        jz      L_cb14
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        push    0x76c5a8
        push    edi
        call    FUN_0075e346
        test    eax, eax
        jz      L_cb14
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 8]
        cmp     eax, 0x40002
        jz      L_cafd
        cmp     eax, 0x40003
        jz      L_cafd
        cmp     eax, 0x40004
        jz      L_cafd
        cmp     eax, 0x50000
        jz      L_cafd
        cmp     eax, 0x50001
        jz      L_cafd
        cmp     eax, 0x50002
        jnz     L_cb14
L_cafd:
        push    edi
        mov     dword ptr [g_8825e8], eax
        call    FUN_006f4230
        mov     eax, dword ptr [g_8825e8]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret
L_cb14:
        push    edi
        call    FUN_006f4230
L_cb1a:
        pop     edi
        pop     esi
        mov     dword ptr [g_8825e8], 0
        xor     eax, eax
        pop     ebx
        add     esp, 0xc
        ret
    }
}
