/*
 * FUN_0064a090 (73 B) — Stack-buffer allocator.
 *
 * __cdecl (one param). If global flag 0x007b5a2f is set, checks the
 * free-list head 0x00805914 against a computed limit; if room, stores
 * (param - head) and advances the head; else asserts via FUN_006fab90
 * and INT3 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *fmt, ...);

extern char DAT_007b5a2f;
extern int  DAT_00805910;
extern int  DAT_00805954;
extern int  DAT_00805914;

__declspec(naked) void __cdecl FUN_0064a090(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [DAT_007b5a2f]
        test    al, al
        jz      l_done
        mov     eax, dword ptr [DAT_00805910]
        mov     ecx, dword ptr [DAT_00805954]
        lea     edx, [ecx + eax*1 + -0x64]
        mov     eax, dword ptr [DAT_00805914]
        cmp     eax, edx
        jc      l_store
        push    0x12
        push    0x7929f4
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      l_done
        int     3
        pop     ebp
        ret
    l_store:
        mov     ecx, dword ptr [ebp + 0x8]
        sub     ecx, eax
        mov     dword ptr [eax], ecx
        add     eax, 0x4
        mov     dword ptr [DAT_00805914], eax
    l_done:
        pop     ebp
        ret
    }
}
