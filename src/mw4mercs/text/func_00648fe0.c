/*
 * FUN_00648fe0 (helper, 194 B of the 2049 B Ghidra body) — "get next char"
 * tokenizer primitive. Reads the next byte from the input stream pointer
 * (0x7b5a1c), stores it in 0x8058b0, and dispatches on it via a jump table
 * (0x6490a4 / char table 0x6490b8). Handles tab/newline/comment/`#`
 * cases; the `//`, `/*` and `#` handlers live before this entry and are
 * referenced as extern functions.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_7b5a1c;
extern char  g_8058b0;
extern char  g_8058e4;
extern int   g_8058e8;
extern int   g_8058f0;
extern char  g_7f4254[];
extern char  g_6490b8[];
extern int   g_6490a4[];

extern void __cdecl FUN_006499c0(void);
extern void __cdecl FUN_00649c80(void);
extern void __cdecl FUN_00648870(void);
extern void __cdecl FUN_00648880(void);
extern void __cdecl FUN_00648910(void);

__declspec(naked) void __cdecl FUN_00648fe0(void)
{
    __asm {
        mov     eax, dword ptr [g_7b5a1c]
        cmp     byte ptr [eax], 0x0
        jnz     l_18
        call    FUN_006499c0
        test    al, al
        jnz     l_09
        cmp     dword ptr [g_8058e8], 0x1
        jle     l_01
        jmp     FUN_00649c80
    l_01:
        mov     byte ptr [g_8058b0], 0x7f
        ret
    l_09:
        mov     eax, offset g_7f4254
        mov     dword ptr [g_8058f0], 0x0
    l_18:
        mov     cl, byte ptr [eax]
        mov     dl, byte ptr [g_8058e4]
        inc     eax
        test    dl, dl
        mov     byte ptr [g_8058b0], cl
        mov     dword ptr [g_7b5a1c], eax
        jnz     l_9b
        movsx   ecx, cl
        add     ecx, -0x9
        cmp     ecx, 0x26
        ja      l_9b
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_6490b8]
        jmp     dword ptr [edx*4 + g_6490a4]
    l_4a:
        mov     eax, dword ptr [g_8058f0]
        mov     ecx, eax
        and     ecx, 0x80000003
        jns     l_5e
        dec     ecx
        or      ecx, 0xfffffffc
        inc     ecx
    l_5e:
        mov     edx, 0x4
        sub     edx, ecx
        add     eax, edx
        mov     dword ptr [g_8058f0], eax
        mov     byte ptr [g_8058b0], 0x20
        ret
    l_74:
        inc     dword ptr [g_8058f0]
        mov     byte ptr [g_8058b0], 0x20
        ret
    l_82:
        mov     al, byte ptr [eax]
        cmp     al, 0x2f
        jnz     l_8d
        jmp     FUN_00648870
    l_8d:
        cmp     al, 0x2a
        jnz     l_9b
        jmp     FUN_00648880
    l_96:
        jmp     FUN_00648910
    l_9b:
        inc     dword ptr [g_8058f0]
        ret
    }
}
