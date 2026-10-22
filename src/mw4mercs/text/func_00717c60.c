/*
 * FUN_00717c60 (72 B) — __stdcall (RET 4, 1 param).
 *
 * Range/flag-checked wrapper. If the global flag at 0x8b2868 is clear, or
 * param_1 is outside [0x8b2874, 0x8b2874+0x29040), or bit 0x4 of
 * param_1[4] is clear, it asserts via FUN_006fab90. Then calls
 * FUN_00753950(this=param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b2868;
extern int g_8b2874;
extern char g_str_7a2704[];
extern int __cdecl FUN_006fab90(const char *, ...);
extern void __cdecl FUN_00753950(void);

__declspec(naked) void __stdcall FUN_00717c60(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_8b2868]
        test    al, al
        push    esi
        mov     esi, dword ptr [ebp + 8]
        jz      assert
        mov     eax, dword ptr [g_8b2874]
        cmp     esi, eax
        jb      assert
        lea     ecx, [esi + 0xfffd6fc0]
        cmp     ecx, eax
        jae     assert
        test    byte ptr [esi + 4], 4
        jnz     callit
assert:
        push    esi
        push    offset g_str_7a2704
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      callit
        int     3
callit:
        mov     ecx, esi
        call    FUN_00753950
        pop     esi
        pop     ebp
        ret     4
    }
}
