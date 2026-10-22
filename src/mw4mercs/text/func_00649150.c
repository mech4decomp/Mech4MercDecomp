/*
 * FUN_00649150 (94 B) — Tokenizer dispatcher. Calls FUN_006488f0 to fetch
 * the next char, indexes a per-char table (0x7f2d38) to get a case code,
 * sets the output pointer 0x7b5a20 to 0x7f3a54, then dispatches via jump
 * table 0x6491b0 to one of the token handlers. If 0x8058d4 is set, tails
 * into FUN_00649e60.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_8058b0;
extern int   g_7f2d38[];
extern int   g_7b5a20;
extern char  g_7f3a54[];
extern int   g_8058ac;
extern char  g_8058d4;
extern int   g_6491b0[];

extern void __cdecl FUN_006488f0(void);
extern void __cdecl FUN_006491d0(void);
extern void __cdecl FUN_00649380(void);
extern void __cdecl FUN_00649540(void);
extern void __cdecl FUN_006495b0(void);
extern void __cdecl FUN_00649e60(void);

__declspec(naked) void __cdecl FUN_00649150(void)
{
    __asm {
        call    FUN_006488f0
        movsx   eax, byte ptr [g_8058b0]
        mov     eax, dword ptr [eax*4 + g_7f2d38]
        cmp     eax, 0x4
        mov     dword ptr [g_7b5a20], offset g_7f3a54
        ja      l_9a
        jmp     dword ptr [eax*4 + g_6491b0]
    l_79:
        call    FUN_006491d0
        jmp     l_9f
    l_80:
        call    FUN_00649380
        jmp     l_9f
    l_87:
        call    FUN_00649540
        jmp     l_9f
    l_8e:
        mov     dword ptr [g_8058ac], 0x18
        jmp     l_9f
    l_9a:
        call    FUN_006495b0
    l_9f:
        mov     al, byte ptr [g_8058d4]
        test    al, al
        jz      l_ad
        jmp     FUN_00649e60
    l_ad:
        ret
    }
}
