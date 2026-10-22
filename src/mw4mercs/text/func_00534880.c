/*
 * FUN_00534880 (952 B) — __stdcall (1 dword param), RET 4.
 *
 * Database/archive loader: builds a path string from the input param and a
 * .rdata literal, opens an archive (FUN_004145e0), allocates a 0x2c-byte
 * object and a 0x70-byte object (storing one into g_7da884), then iterates
 * over a table of entries calling into the 0x4dxxxx database family. Ends by
 * trimming trailing characters from two strings and freeing via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_76b2a0)(void);   /* _mbsrchr IAT */
extern int  g_7da884;   /* DAT_007da884 */
extern int  g_7db0b8;   /* DAT_007db0b8 */
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005471f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004145e0(void);
extern void __cdecl FUN_00413be0(void);
extern void __cdecl FUN_004d45b0(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_00491f50(void);
extern void __cdecl FUN_004d2330(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_004d2ee0(void);

__declspec(naked) void FUN_00534880(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x144
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412570
        push    0x77b504
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        xor     ebx, ebx
        cmp     eax, ebx
        je      L_e0
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_e0
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_e0:
        mov     eax, dword ptr [esp + 0x10]
        push    0x5c
        push    eax
        call    dword ptr [g_76b2a0]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        add     esp, 8
        mov     edi, 0x779f4c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_005471f0
        push    0x2c
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        je      L_942
        mov     edx, dword ptr [esp + 0x10]
        push    0x3f
        push    1
        push    edx
        mov     ecx, eax
        call    FUN_004145e0
        mov     dword ptr [esp + 0x18], eax
        jmp     L_946
L_942:
        mov     dword ptr [esp + 0x18], ebx
L_946:
        mov     eax, dword ptr [esp + 0x18]
        push    1
        lea     ecx, [esp + 0x6c]
        mov     dword ptr [esp + 0x6c], eax
        mov     word ptr [esp + 0x70], bx
        call    FUN_00413be0
        push    0x70
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        je      L_97b
        push    ebx
        mov     ecx, eax
        call    FUN_004d45b0
        mov     dword ptr [g_7da884], eax
        jmp     L_981
L_97b:
        mov     dword ptr [g_7da884], ebx
L_981:
        push    ebx
        push    0x77250c
        lea     ecx, [esp + 0x118]
        call    FUN_004d2000
        lea     ecx, [esp + 0x110]
        call    FUN_004d2310
        mov     eax, dword ptr [esp + 0x12c]
        mov     edi, dword ptr [esp + 0x124]
        xor     esi, esi
        test    eax, 0xfffffffc
        jbe     L_9f6
L_9b6:
        push    1
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_004d1f80
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [g_7da884]
        call    FUN_00491f50
        lea     ecx, [esp + 0x24]
        call    FUN_004d2330
        lea     ecx, [esp + 0x24]
        call    FUN_004d21c0
        mov     edx, dword ptr [esp + 0x12c]
        inc     esi
        shr     edx, 2
        add     edi, 4
        cmp     esi, edx
        jb      L_9b6
L_9f6:
        lea     ecx, [esp + 0x110]
        call    FUN_004d2330
        mov     eax, dword ptr [esp + 0x80]
        mov     dword ptr [esp + 0x20], eax
        cmp     dword ptr [esp + 0x7c], ebx
        mov     esi, 3
        mov     dword ptr [esp + 0x14], esi
        jbe     L_b08
L_a20:
        mov     ecx, dword ptr [esp + 0x20]
        mov     al, byte ptr [ebx + ecx]
        test    al, al
        lea     edi, [ebx + ecx]
        je      L_b08
        mov     ecx, dword ptr [g_7db0b8]
        push    1
        push    0
        push    0
        push    0x3f
        push    esi
        push    0
        push    edi
        call    FUN_004d2d00
        push    0
        push    0x77250c
        lea     ecx, [esp + 0x2c]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        je      L_ae0
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        jbe     L_ae0
        cmp     word ptr [esp + 0x64], si
        jne     L_ae0
        lea     ecx, [esp + 0x24]
        call    FUN_004d2310
        mov     eax, dword ptr [esp + 0x40]
        mov     ebp, dword ptr [esp + 0x38]
        xor     esi, esi
        test    eax, 0xfffffffc
        jbe     L_ad3
L_a8a:
        push    1
        push    ebp
        lea     ecx, [esp + 0xd4]
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_7da884]
        lea     edx, [esp + 0xcc]
        push    edx
        call    FUN_00491f50
        lea     ecx, [esp + 0xcc]
        call    FUN_004d2330
        lea     ecx, [esp + 0xcc]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x40]
        inc     esi
        shr     eax, 2
        add     ebp, 4
        cmp     esi, eax
        jb      L_a8a
L_ad3:
        lea     ecx, [esp + 0x24]
        call    FUN_004d2330
        mov     esi, dword ptr [esp + 0x14]
L_ae0:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        lea     ebx, [ebx + ecx + 1]
        lea     ecx, [esp + 0x24]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x7c]
        inc     esi
        cmp     ebx, eax
        mov     dword ptr [esp + 0x14], esi
        jb      L_a20
L_b08:
        mov     ecx, dword ptr [esp + 0x18]
        push    1
        push    0
        push    esi
        push    ecx
        mov     ecx, dword ptr [g_7db0b8]
        call    FUN_004d2ee0
        push    0
        push    0x77250c
        lea     ecx, [esp + 0x90]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0xc4]
        test    eax, eax
        je      L_bd3
        mov     eax, dword ptr [esp + 0xa4]
        test    eax, eax
        jbe     L_bd3
        cmp     word ptr [esp + 0xc8], si
        jne     L_bd3
        lea     ecx, [esp + 0x88]
        call    FUN_004d2310
        mov     eax, dword ptr [esp + 0xa4]
        mov     edi, dword ptr [esp + 0x9c]
        xor     esi, esi
        test    eax, 0xfffffffc
        jbe     L_bc7
L_b7b:
        push    1
        push    edi
        lea     ecx, [esp + 0xd4]
        call    FUN_004d1f80
        mov     ecx, dword ptr [g_7da884]
        lea     edx, [esp + 0xcc]
        push    edx
        call    FUN_00491f50
        lea     ecx, [esp + 0xcc]
        call    FUN_004d2330
        lea     ecx, [esp + 0xcc]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0xa4]
        inc     esi
        shr     eax, 2
        add     edi, 4
        cmp     esi, eax
        jb      L_b7b
L_bc7:
        lea     ecx, [esp + 0x88]
        call    FUN_004d2330
L_bd3:
        mov     ecx, dword ptr [g_7da884]
        mov     byte ptr [ecx + 0x3c], 1
        lea     ecx, [esp + 0x88]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x110]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        je      L_c14
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_c14
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_c14:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_c2f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_c2f
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_c2f:
        add     esp, 0x144
        ret     4
    }
}
