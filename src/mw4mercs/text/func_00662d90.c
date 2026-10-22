/*
 * FUN_00662d90 (16 B) — candidate-list builder sibling: if arg != 0,
 * pass it through to FUN_004084e0 (a free/delete helper).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00662d90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_004084e0
        pop     ecx
done:
        ret
    }
}
