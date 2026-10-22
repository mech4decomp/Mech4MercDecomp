/*
 * FUN_00614880 (285 B) — __fastcall: parses a numeric token out of a
 * string (skipping non-digit chars), looks up a collection entry, and
 * converts a value to int via _ftol with a scale factor depending on
 * param_1+0x20 (1 or 3). Frees refcounted buffers on exit.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void *);
extern void __cdecl FUN_004084e0(void *p);
extern void *__cdecl FUN_005178d0(void *);
extern void __cdecl FUN_006140c0(void *);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void *, void *);
extern int __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_004d21c0(void);
extern double g_0078b7c0;
extern double g_0077d038;

__declspec(naked) void FUN_00614880(void)
{
    __asm {
        sub     esp, 0x4c
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx+0x14]
        test    esi, esi
        push    edi
        jz      lbl_614892
        inc     byte ptr [esi-1]
lbl_614892:
        push    esi
        lea     ecx, [esp+0x10]
        call    FUN_00412570
        test    esi, esi
        jz      lbl_6148b5
        mov     cl, byte ptr [esi-1]
        lea     eax, [esi-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_6148b5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_6148b5:
        mov     edx, dword ptr [esp+0xc]
        xor     esi, esi
lbl_6148bb:
        test    edx, edx
        jz      lbl_6148e5
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        jnc     lbl_6148e5
        mov     al, byte ptr [esi+edx]
        cmp     al, 0x30
        jl      lbl_6148da
        cmp     al, 0x39
        jle     lbl_6148dd
lbl_6148da:
        inc     esi
        jmp     lbl_6148bb
lbl_6148dd:
        mov     byte ptr [esi+edx], 0x0
        mov     edx, dword ptr [esp+0xc]
lbl_6148e5:
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      lbl_6148f5
        inc     byte ptr [eax-1]
lbl_6148f5:
        call    FUN_005178d0
        mov     ecx, dword ptr [eax+0x90]
        call    FUN_006140c0
        lea     ecx, [esp+0x14]
        mov     esi, eax
        call    FUN_004d1f10
        mov     ax, word ptr [esi+0x10]
        mov     cx, word ptr [esi+0x12]
        lea     edx, [esp+0x10]
        mov     word ptr [esp+0x10], ax
        push    edx
        lea     eax, [esp+0x18]
        push    eax
        mov     word ptr [esp+0x1a], cx
        call    FUN_004da8d0
        mov     ecx, dword ptr [esp+0x30]
        mov     esi, dword ptr [ebx+0x20]
        mov     edx, dword ptr [ecx+0x78]
        add     esp, 0x8
        xor     edi, edi
        cmp     esi, 0x1
        mov     dword ptr [esp+0x10], edx
        jnz     lbl_61495a
        fild    dword ptr [esp+0x10]
        fmul    qword ptr [g_0078b7c0]
        call    FUN_0075db4a
        mov     edi, eax
lbl_61495a:
        cmp     esi, 0x3
        jnz     lbl_614970
        fild    dword ptr [esp+0x10]
        fmul    qword ptr [g_0077d038]
        call    FUN_0075db4a
        mov     edi, eax
lbl_614970:
        lea     ecx, [esp+0x14]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      lbl_614994
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     lbl_614994
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
lbl_614994:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
