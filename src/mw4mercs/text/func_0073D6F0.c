/*
 * FUN_0073D6F0 (87 B) — __cdecl (3 stack args, RET 0xC). Depending on
 * whether arg3 == g_7B73FC, calls FUN_0073D3B0 with one of two string
 * pointers (0x7A71D8 / 0x7A71D0) plus 0xFFFFFF and an arg, then calls it
 * again with 0xFFFFFF and with 0x77A078. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0073D3B0(void);
extern int g_7b73fc;

__declspec(naked) void FUN_0073D6F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, dword ptr [g_7b73fc]
        jne     loc_73d712
        push    0x7a71d8
        push    0xffffff
        call    FUN_0073D3B0
        mov     ecx, dword ptr [esp + 4]
        push    ecx
        jmp     loc_73d726
loc_73d712:
        push    0x7a71d0
        push    0xffffff
        call    FUN_0073D3B0
        mov     edx, dword ptr [esp + 4]
        push    edx
loc_73d726:
        push    0xffffff
        call    FUN_0073D3B0
        push    0x77a078
        push    0xffffff
        call    FUN_0073D3B0
        mov     eax, 1
        ret     0xc
    }
}
