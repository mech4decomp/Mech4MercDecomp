/*
 * FUN_00404620 (389 B) — engine init: scans for "m4c*.m4c" files, builds
 * a list of found names, then reads the "DefaultConnection" option from
 * options.ini and matches it against the found list. __stdcall (RET 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b7960;
extern int g_007b7df0;
extern int g_007b7df4;
extern int g_007b7e14;

extern void __cdecl FUN_006fb800(void);
extern void __cdecl FUN_00405f30(void);
extern void __cdecl FUN_00401d10(void);
extern void __cdecl FUN_006fb880(void);
extern void __cdecl FUN_006fb900(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_0040edc0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_00404620(void)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    esi
        push    edi
        xor     ebx, ebx
        push    0x76baf0
        mov     dword ptr [g_007b7960], 0xffffffff
        mov     dword ptr [g_007b7df0], ebx
        mov     dword ptr [g_007b7df4], ebx
        call    FUN_006fb800
        cmp     eax, ebx
        jz      L_afterfind
        mov     dword ptr [g_007b7df0], ebx
        mov     esi, 0x10005
L_findloop:
        mov     ecx, dword ptr [g_007b7e14]
        add     eax, 0x3
        push    eax
        mov     eax, dword ptr [g_007b7df4]
        lea     edx, [ecx+eax*4]
        push    edx
        call    FUN_00405f30
        mov     eax, dword ptr [g_007b7e14]
        mov     ecx, dword ptr [g_007b7df4]
        mov     edx, dword ptr [eax+ecx*4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        mov     byte ptr [ecx+edx-0x4], bl
        mov     edx, dword ptr [g_007b7df4]
        mov     eax, dword ptr [g_007b7e14]
        mov     ecx, dword ptr [eax+edx*4]
        push    ebx
        push    ecx
        push    0x7b7960
        call    FUN_00401d10
        mov     eax, dword ptr [g_007b7960]
        add     esp, 0x14
        cmp     eax, esi
        jnz     L_nomatch
        inc     dword ptr [g_007b7df4]
L_nomatch:
        cmp     dword ptr [g_007b7df4], 0x14
        jge     L_finddone
        call    FUN_006fb880
        cmp     eax, ebx
        jnz     L_findloop
L_finddone:
        call    FUN_006fb900
L_afterfind:
        push    0x1
        push    ebx
        push    0x77826c
        lea     ecx, [esp+0x1c]
        call    FUN_0040dca0
        push    0x778278
        lea     ecx, [esp+0x14]
        call    FUN_0040ecc0
        cmp     eax, ebx
        jnz     L_skip
        push    0x778278
        lea     ecx, [esp+0x14]
        call    FUN_0040edc0
L_skip:
        push    ebx
        lea     edx, [esp+0x10]
        push    edx
        push    0x7782d8
        mov     ecx, eax
        call    FUN_00411bf0
        test    al, al
        jz      L_cleanup
        mov     edi, dword ptr [g_007b7df0]
        cmp     edi, dword ptr [g_007b7df4]
        push    ebp
        jge     L_afterloop
        mov     eax, dword ptr [g_007b7e14]
        lea     ebp, [eax+edi*4]
L_outer:
        mov     esi, dword ptr [esp+0x10]
        mov     eax, dword ptr [ebp]
L_inner:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_noteq
        cmp     cl, bl
        jz      L_eq
        mov     dl, byte ptr [eax+0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+0x1]
        jnz     L_noteq
        add     eax, 0x2
        add     esi, 0x2
        cmp     cl, bl
        jnz     L_inner
L_eq:
        xor     eax, eax
        jmp     L_cmpdone
L_noteq:
        sbb     eax, eax
        sbb     eax, -0x1
L_cmpdone:
        cmp     eax, ebx
        jz      L_found
        mov     eax, dword ptr [g_007b7df4]
        inc     edi
        add     ebp, 0x4
        cmp     edi, eax
        jl      L_outer
L_found:
        mov     dword ptr [g_007b7df0], edi
L_afterloop:
        cmp     edi, dword ptr [g_007b7df4]
        pop     ebp
        jnz     L_cleanup
        mov     dword ptr [g_007b7df0], ebx
L_cleanup:
        lea     ecx, [esp+0x10]
        call    FUN_0040e4a0
        lea     ecx, [esp+0x10]
        call    FUN_0040de20
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0xc
    }
}
