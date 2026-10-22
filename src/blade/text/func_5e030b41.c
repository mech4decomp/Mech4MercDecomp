/*
 * FUN_5e030b41 (27 B) - calls __local_unwind2 (FUN_5e0309ce) with
 * [ECX+0x18] and [ECX+0x1c]. __stdcall (RET 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e0309ce(void);

__declspec(naked) void FUN_5e030b41(void)
{
    __asm {
        push    ebp
        mov     ecx, dword ptr [esp+8]
        mov     ebp, dword ptr [ecx]
        mov     eax, dword ptr [ecx+0x1c]
        push    eax
        mov     eax, dword ptr [ecx+0x18]
        push    eax
        call    FUN_5e0309ce
        add     esp, 8
        pop     ebp
        ret     4
    }
}
