/*
 * FUN_006feab0 (295 B) — __stdcall, RET 4 (1 param).
 *
 * Iterates over a list (FUN_006f8430 count), for each entry reads a
 * string via FUN_006f7970, compares against "Protocol" (0x79fb30) and
 * the formatted "ExpectRefresh" string, and if both match calls the
 * vtable method [obj]+0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_006f89f0(void);
extern int __cdecl FUN_006f8430(void);
extern char __cdecl FUN_006f7970(int idx, void *out);
extern void *__cdecl FUN_006f5b80(void *obj, const char *key);
extern int *DAT_0076b420;   /* IAT: sprintf */

__declspec(naked) void __stdcall FUN_006feab0(void)
{
    __asm {
        sub     esp, 0x44
        push    ebp
        push    esi
        push    edi
        call    FUN_006f89f0
        mov     edi, eax
        test    edi, edi
        jz      L_ebce
        mov     esi, dword ptr [edi + 0x3c]
        test    esi, esi
        mov     dword ptr [esp + 0xc], esi
        jz      L_ebce
        mov     eax, dword ptr [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x14]
        push    0x7a0d70
        push    ecx
        call    dword ptr [DAT_0076b420]
        add     esp, 0xc
        mov     ecx, esi
        xor     ebp, ebp
        call    FUN_006f8430
        test    eax, eax
        jle     L_ebce
L_eafd:
        lea     edx, [esp + 0x54]
        push    edx
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esp + 0x5c], 0
        call    FUN_006f7970
        test    al, al
        jz      L_ebbe
        mov     eax, dword ptr [esp + 0x54]
        push    0x79fad4
        push    eax
        mov     ecx, edi
        call    FUN_006f5b80
        test    eax, eax
        jz      L_ebbe
        mov     esi, 0x79fb30
L_eb38:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_eb5c
        test    cl, cl
        jz      L_eb58
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     L_eb5c
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_eb38
L_eb58:
        xor     eax, eax
        jmp     L_eb61
L_eb5c:
        sbb     eax, eax
        sbb     eax, -1
L_eb61:
        test    eax, eax
        jnz     L_ebba
        mov     eax, dword ptr [esp + 0x54]
        push    0x79fafc
        push    eax
        mov     ecx, edi
        call    FUN_006f5b80
        test    eax, eax
        jz      L_ebba
        mov     esi, eax
        lea     eax, [esp + 0x10]
L_eb80:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_eba4
        test    cl, cl
        jz      L_eba0
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     L_eba4
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_eb80
L_eba0:
        xor     eax, eax
        jmp     L_eba9
L_eba4:
        sbb     eax, eax
        sbb     eax, -1
L_eba9:
        test    eax, eax
        jnz     L_ebba
        mov     ecx, dword ptr [esp + 0x54]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x10]
        dec     ebp
L_ebba:
        mov     esi, dword ptr [esp + 0xc]
L_ebbe:
        mov     ecx, esi
        inc     ebp
        call    FUN_006f8430
        cmp     ebp, eax
        jl      L_eafd
L_ebce:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x44
        ret     4
    }
}
