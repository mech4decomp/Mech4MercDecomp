/*
 * FUN_0066c3c0 (212 B) - AnimationStateEngine joint-name lookup.
 * Iterates the joint-cage name table (0x7b5a9c, 0x2f entries) via _stricmp
 * (IAT 0x76b2ac). On match, builds a "#<idx>" tag string via FUN_00412670 /
 * FUN_004125e0 and returns the index; on no match returns 0xffffffff.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;                /* IAT: _stricmp @ 0x76b2ac */
extern void *g_7b5a9c[];              /* joint-cage name table @ 0x7b5a9c */

extern void __cdecl FUN_00412780(void);   /* thiscall via ECX */
extern void *__cdecl FUN_00412670(void);  /* thiscall via ECX */
extern void __cdecl FUN_00412740(void);   /* thiscall via ECX */
extern void __cdecl FUN_004084e0(void);
extern void *__cdecl FUN_004125e0(void);  /* thiscall via ECX */

__declspec(naked) void FUN_0066c3c0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        xor     bl, bl
        push    edi
        mov     edi, dword ptr [g_76b2ac]
        mov     byte ptr [esp + 0x10], bl
L_c3d5:
        mov     ebp, dword ptr [esp + 0x10]
        mov     eax, ebp
        and     eax, 0xff
        mov     ecx, dword ptr [eax*4 + g_7b5a9c]
        push    ecx
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jz      L_c410
        inc     bl
        cmp     bl, 0x2f
        mov     byte ptr [esp + 0x10], bl
        jc      L_c3d5
        mov     ecx, dword ptr [esp + 0x1c]
        push    esi
        call    FUN_00412780
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        pop     ecx
        ret
L_c410:
        mov     esi, dword ptr [esp + 0x1c]
        push    0x792734
        mov     ecx, esi
        call    FUN_00412780
        mov     edx, dword ptr [esi]
        add     bl, 0x80
        lea     ecx, [esp + 0x1c]
        push    ebx
        push    edx
        call    FUN_00412670
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_c453
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_c453
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_c453:
        mov     eax, dword ptr [esi]
        push    0x76ba64
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        mov     ecx, esi
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_c487
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_c487
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_c487:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        and     eax, 0xff
        pop     ebx
        pop     ecx
        ret
    }
}
