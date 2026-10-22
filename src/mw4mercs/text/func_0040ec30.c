/*
 * FUNC_0040ec30 (139 B) — __stdcall, RET 0xC. Config-line parser: skips
 * whitespace, matches a 6-char prefix, extracts a key=value pair, and
 * dispatches to FUN_0040d9f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *DAT_0076b2b0;   /* IAT: strncmp-ish */

extern void __cdecl FUN_0040d9f0(void);

__declspec(naked) void FUN_0040ec30(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
loc_40EC35:
        mov     al, byte ptr [esi]
        cmp     al, 0x20
        jz      loc_40EC3F
        cmp     al, 0x9
        jnz     loc_40EC42
loc_40EC3F:
        inc     esi
        jmp     loc_40EC35
loc_40EC42:
        cmp     byte ptr [esi], 0x0
        jz      loc_40ECB7
        push    0x6
        push    0x76d18c
        push    esi
        call    dword ptr [DAT_0076b2b0]
        add     esp, 0xc
        test    eax, eax
        jnz     loc_40ECB7
        lea     eax, [esi+6]
loc_40EC5F:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x20
        jz      loc_40EC6B
        cmp     cl, 0x9
        jnz     loc_40EC6E
loc_40EC6B:
        inc     eax
        jmp     loc_40EC5F
loc_40EC6E:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x20
        mov     edx, eax
        jz      loc_40EC89
loc_40EC77:
        cmp     cl, 0x9
        jz      loc_40EC89
        test    cl, cl
        jz      loc_40EC89
        mov     cl, byte ptr [eax+1]
        inc     eax
        cmp     cl, 0x20
        jnz     loc_40EC77
loc_40EC89:
        mov     byte ptr [eax], 0x0
loc_40EC8C:
        mov     cl, byte ptr [eax+1]
        inc     eax
        cmp     cl, 0x20
        jz      loc_40EC8C
        cmp     cl, 0x9
        jz      loc_40EC8C
        cmp     byte ptr [edx], 0x0
        jz      loc_40ECB7
        test    eax, eax
        jz      loc_40ECB7
        cmp     byte ptr [eax], 0x0
        jz      loc_40ECB7
        push    eax
        mov     eax, dword ptr [esp+0x10]
        push    edx
        push    eax
        call    FUN_0040d9f0
        add     esp, 0xc
loc_40ECB7:
        pop     esi
        ret     0xc
    }
}
