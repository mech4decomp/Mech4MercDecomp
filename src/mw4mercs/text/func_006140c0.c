/*
 * FUN_006140c0 (328 B) — __thiscall: searches a collection for a string
 * matching param_1 (case-insensitive via _stricmp IAT), inserting new
 * elements as it iterates. Frees refcounted buffers and destroys the
 * collection on all exit paths.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076b2ac;                   /* IAT: _stricmp */
extern void __cdecl FUN_00416bc0(void *);
extern void __cdecl FUN_0040f060(void *);
extern int __cdecl FUN_00416d00(void);
extern void __cdecl FUN_00416ca0(void);
extern void __cdecl FUN_00412740(void *);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_006140c0(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        add     ecx, 0x10
        push    edi
        push    ecx
        lea     ecx, [esp+0x10]
        call    FUN_00416bc0
        mov     eax, dword ptr [esp+0x1c]
        add     eax, 0x18
        push    eax
        lea     ecx, [esp+0xc]
        mov     dword ptr [esp+0x10], 0x779e88
        call    FUN_0040f060
        lea     ecx, [esp+0xc]
        call    FUN_00416d00
        test    eax, eax
        mov     edi, dword ptr [esp+0x24]
        jz      lbl_614173
        mov     esi, dword ptr [g_0076b2ac]
lbl_614102:
        mov     ecx, dword ptr [esp+0x8]
        push    ecx
        push    edi
        call    esi
        add     esp, 0x8
        test    eax, eax
        lea     ecx, [esp+0xc]
        jz      lbl_6141ba
        call    FUN_00416ca0
        lea     ecx, [esp+0xc]
        call    FUN_00416d00
        test    eax, eax
        jz      lbl_614166
        mov     edx, dword ptr [esp+0x1c]
        mov     eax, dword ptr [edx+0x18]
        test    eax, eax
        mov     dword ptr [esp+0x24], eax
        jz      lbl_61413d
        inc     byte ptr [eax-1]
lbl_61413d:
        lea     eax, [esp+0x24]
        push    eax
        lea     ecx, [esp+0xc]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x24]
        test    eax, eax
        jz      lbl_614166
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_614166
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_614166:
        lea     ecx, [esp+0xc]
        call    FUN_00416d00
        test    eax, eax
        jnz     lbl_614102
lbl_614173:
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      lbl_61418e
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_61418e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_61418e:
        lea     ecx, [esp+0xc]
        call    FUN_00416c60
        test    edi, edi
        jz      lbl_6141b0
        mov     cl, byte ptr [edi-1]
        lea     eax, [edi-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6141b0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6141b0:
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x18
        ret     0x4
lbl_6141ba:
        call    FUN_00416d00
        mov     esi, eax
        mov     eax, dword ptr [esp+0x8]
        test    eax, eax
        jz      lbl_6141dc
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6141dc
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6141dc:
        lea     ecx, [esp+0xc]
        call    FUN_00416c60
        test    edi, edi
        jz      lbl_6141fe
        mov     cl, byte ptr [edi-1]
        lea     eax, [edi-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6141fe
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6141fe:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x18
        ret     0x4
    }
}
