/*
 * FUN_100041cd (27 B, __stdcall, RET 0x4) — __local_unwind2 wrapper: reads
 * two fields from the SEH frame and forwards them to FUN_1000405a.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000405a(void);

__declspec(naked) void FUN_100041cd(void)
{
    __asm {
        push    ebp
        mov     ecx, dword ptr [esp + 8]
        mov     ebp, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x1c]
        push    eax
        mov     eax, dword ptr [ecx + 0x18]
        push    eax
        call    FUN_1000405a
        add     esp, 8
        pop     ebp
        ret     4
    }
}
