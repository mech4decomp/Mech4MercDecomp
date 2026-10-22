/*
 * FUN_006f79e0 (290 B) — Scans a hash table of records (this+0x4), invoking
 * FUN_006f79a0 on each candidate, then dispatches on the string at
 * this+0x24 ("GameVersion"/"Flags"/other) via FUN_006f7bf0. Returns 1.
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_0076b2ac)(const char *, const char *); /* _stricmp IAT */
extern void FUN_006f5ed0(void);
extern void FUN_006f84e0(void);    /* __thiscall, ECX = this */
extern char __stdcall FUN_006f79a0(void *, void *, void *);
extern void FUN_006f5ee0(void);
extern void FUN_006f7bf0(void);    /* __thiscall, ECX = this */

__declspec(naked) void __fastcall FUN_006f79e0(void)
{
    __asm {
        push    ecx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jnz     L_main
        mov     al, 0x1
        pop     ebp
        pop     ecx
        ret     0x8
L_main:
        call    FUN_006f5ed0
        mov     eax, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [ebp + 0x18]
        cmp     ecx, dword ptr [eax + 0x28]
        jge     L_after_loop
L_loop:
        mov     ecx, ebp
        call    FUN_006f84e0
        mov     edx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [ebp + 0x18]
        cmp     eax, dword ptr [edx + 0x28]
        jl      L_loop
L_after_loop:
        push    ebx
        mov     ebx, dword ptr [ebp + 0x4]
        mov     edx, dword ptr [ebx + 0x2c]
        add     ebx, 0x4
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        push    esi
        push    edi
        mov     dword ptr [ebp + 0x14], 0x0
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_after_scan
L_scan_outer:
        mov     edx, dword ptr [ebx + 0x4]
        mov     esi, eax
        and     esi, 0xffff
        shl     esi, 0x4
        mov     edi, dword ptr [esi + edx]
        add     esi, edx
        cmp     edi, esi
        jz      L_scan_next
L_scan_test:
        test    dword ptr [edi + 0xc], 0x80000000
        jnz     L_scan_advance
        mov     ecx, dword ptr [edi + 0x8]
        push    ebp
        push    edi
        push    ecx
        call    FUN_006f79a0
        test    al, al
        jz      L_after_scan
L_scan_advance:
        mov     edi, dword ptr [edi]
        cmp     edi, esi
        jnz     L_scan_test
        mov     eax, dword ptr [esp + 0x10]
L_scan_next:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        jc      L_scan_outer
L_after_scan:
        dec     dword ptr [ebx + 0x28]
        call    FUN_006f5ee0
        mov     esi, dword ptr [ebp + 0x24]
        test    esi, esi
        jz      L_ret1
        mov     edi, dword ptr [g_0076b2ac]
        push    0x79fa48
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_flags
        mov     edx, dword ptr [esp + 0x18]
        push    eax
        mov     eax, dword ptr [ebp + 0x28]
        push    edx
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_006f7bf0
        pop     edi
        pop     esi
        pop     ebx
        mov     al, 0x1
        pop     ebp
        pop     ecx
        ret     0x8
L_flags:
        push    0x79fae0
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_other
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebp + 0x28]
        push    ecx
        push    edx
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_006f7bf0
        pop     edi
        pop     esi
        pop     ebx
        mov     al, 0x1
        pop     ebp
        pop     ecx
        ret     0x8
L_other:
        mov     ecx, dword ptr [ebp + 0x28]
        push    0x0
        push    0x0
        push    ecx
        push    esi
        mov     ecx, ebp
        call    FUN_006f7bf0
L_ret1:
        pop     edi
        pop     esi
        pop     ebx
        mov     al, 0x1
        pop     ebp
        pop     ecx
        ret     0x8
    }
}
