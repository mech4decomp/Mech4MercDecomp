/*
 * FUN_0060bb90 (626 B) — Scans variant .mw4 files (via a global object
 * list), compares names with _strnicmp (IAT 0x0076b2b0), and counts
 * matching entries, dispatching through FUN_0041db70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;     /* 0x007dab44 */
extern int g_7dab40;     /* 0x007dab40 */
extern void *g_76b2b0;   /* 0x0076b2b0 (IAT: _strnicmp) */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0052b230(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_0041d890(void);
extern void __cdecl FUN_0041db30(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041db70(void);
extern void __cdecl FUN_0041dac0(void);

__declspec(naked) int FUN_0060bb90(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        xor     esi, ecx
        mov     ecx, dword ptr [esi + 0x4c]
        xor     ecx, 0x85739531
        push    edi
        mov     byte ptr [esp + 0xe], 0x0
        mov     byte ptr [esp + 0xf], 0x0
        jz      L_bbbf
        mov     byte ptr [esp + 0xe], 0x1
L_bbbf:
        mov     edx, dword ptr [esi + 0x58]
        xor     edx, 0x85739531
        jz      L_bbcf
        mov     byte ptr [esp + 0xf], 0x1
L_bbcf:
        push    0x14
        call    FUN_004084d0
        xor     ebx, ebx
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_bc01
        mov     ecx, dword ptr [esi + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x84]
        add     edx, 0x10
        push    edx
        mov     ecx, eax
        call    FUN_0052b230
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        jmp     L_bc07
L_bc01:
        mov     dword ptr [esp + 0x14], ebx
        mov     edi, ebx
L_bc07:
        push    0x779e68
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_00412570
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_bc3d
        mov     ecx, dword ptr [esp + 0x28]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     esi, eax
        mov     dword ptr [esp + 0x18], esi
        jmp     L_bc43
L_bc3d:
        mov     dword ptr [esp + 0x18], ebx
        mov     esi, ebx
L_bc43:
        mov     ecx, esi
        call    FUN_0041db30
        cmp     eax, ebx
        jz      L_bdbe
        push    ebp
L_bc53:
        push    eax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_00412780
        lea     ecx, [esp + 0x14]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x8]
        mov     ecx, edi
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jz      L_bd2d
L_bc8d:
        lea     esi, [ebp + 0x18]
        push    esi
        lea     ecx, [esp + 0x28]
        call    FUN_0040f060
        mov     edi, dword ptr [esp + 0x24]
        test    edi, edi
        jz      L_bcae
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
L_bcae:
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_0040f060
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        push    edi
        push    eax
        push    ecx
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x20]
        neg     ebx
        sbb     bl, bl
        inc     bl
        test    eax, eax
        jz      L_bcef
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bcef
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bcef:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      L_bd0a
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bd0a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bd0a:
        test    bl, bl
        jnz     L_bd21
        mov     ecx, dword ptr [esp + 0x18]
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_bc8d
L_bd21:
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x1c]
L_bd2d:
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     L_bd5a
        test    ebp, ebp
        jz      L_bd5a
        cmp     dword ptr [ebp + 0x20], 0x1
        jnz     L_bd5a
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_bdae
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bdae
        jmp     L_bda5
L_bd5a:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_bd87
        test    ebp, ebp
        jz      L_bd87
        cmp     dword ptr [ebp + 0x20], 0x2
        jnz     L_bd87
        mov     ecx, esi
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_bdae
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bdae
        jmp     L_bda5
L_bd87:
        inc     ebx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_0041db70
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_bdae
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bdae
L_bda5:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bdae:
        mov     ecx, esi
        call    FUN_0041db30
        test    eax, eax
        jnz     L_bc53
        pop     ebp
L_bdbe:
        test    edi, edi
        jz      L_bdca
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx]
L_bdca:
        test    esi, esi
        jz      L_bdde
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_bdde:
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      L_bdf9
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bdf9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bdf9:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x20
        ret
    }
}
