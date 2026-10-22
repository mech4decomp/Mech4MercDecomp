/*
 * FUN_006C0870 (194 B) - String tokenizer / quote-stripper.
 *
 * Parses the string pointed to by global 0x82F328 into the buffer at
 * 0x839AF0, skipping leading spaces, handling quoted segments (with
 * backslash-escape handling) and reporting errors via FUN_006BFA50
 * ("String too long", "Missing quote", "Invalid character in string '%c'").
 * Returns a pointer to the 0x839AF0 buffer.
 *
 * __cdecl, no args, RET.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_839af0[];
extern char *g_82f328;
extern char g_79cbf4[];
extern char g_79cbe4[];
extern char g_79cbc0[];
extern void __cdecl FUN_006bfa50(char *, ...);

__declspec(naked) char *FUN_006c0870(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, offset g_839af0
        mov     bl, 0x5c
loc_0879:
        mov     eax, dword ptr [g_82f328]
loc_087e:
        cmp     byte ptr [eax], 0x20
        jnz     loc_0891
loc_0883:
        mov     cl, byte ptr [eax + 1]
        inc     eax
        cmp     cl, 0x20
        jz      loc_0883
        mov     dword ptr [g_82f328], eax
loc_0891:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x29
        jz      loc_0912
        cmp     cl, 0x2c
        jz      loc_0912
        test    cl, cl
        jz      loc_0912
        cmp     cl, 0x22
        jnz     loc_08fc
loc_08a6:
        inc     eax
        cmp     esi, 0x839eef
        mov     dword ptr [g_82f328], eax
        jc      loc_08c6
        push    offset g_79cbf4
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 4
loc_08c6:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x22
        jz      loc_08f4
        test    cl, cl
        jnz     loc_08e3
        push    offset g_79cbe4
        call    FUN_006bfa50
        mov     eax, dword ptr [g_82f328]
        add     esp, 4
loc_08e3:
        cmp     byte ptr [eax], bl
        jnz     loc_08ed
        cmp     byte ptr [eax + 1], bl
        jnz     loc_08ed
        inc     eax
loc_08ed:
        mov     cl, byte ptr [eax]
        mov     byte ptr [esi], cl
        inc     esi
        jmp     loc_08a6
loc_08f4:
        inc     eax
        mov     dword ptr [g_82f328], eax
        jmp     loc_087e
loc_08fc:
        movsx   edx, cl
        push    edx
        push    offset g_79cbc0
        call    FUN_006bfa50
        add     esp, 8
        jmp     loc_0879
loc_0912:
        cmp     esi, 0x839eef
        jc      loc_0927
        push    offset g_79cbf4
        call    FUN_006bfa50
        add     esp, 4
loc_0927:
        mov     byte ptr [esi], 0
        pop     esi
        mov     eax, offset g_839af0
        pop     ebx
        ret
    }
}
