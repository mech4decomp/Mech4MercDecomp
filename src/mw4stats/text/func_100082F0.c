/*
 * FUN_100082F0 (39 B) - __fastcall (ECX = this). If current char is '&'
 * followed by '#', tail-jumps to FUN_10008000; if '&' only, tail-jumps to
 * FUN_10007F80; otherwise reports an error via FUN_10008d30 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10008000(void);
extern void __cdecl FUN_10007F80(void);
extern void __cdecl FUN_10008d30(void);
extern char g_str_100257c4[];

__declspec(naked) void __cdecl FUN_100082F0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        cmp     word ptr [eax], 0x26
        jnz     L30a
        cmp     word ptr [eax + 0x2], 0x23
        jnz     L305
        jmp     FUN_10008000
L305:
        jmp     FUN_10007F80
L30a:
        push    offset g_str_100257c4
        call    FUN_10008d30
        xor     al, al
        ret
    }
}
