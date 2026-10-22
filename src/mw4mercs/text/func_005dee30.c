/*
 * FUN_005dee30 (32 B) — __cdecl, 2 params. If param_1 == -1, calls
 * FUN_00637b40(param_2), then FUN_00637a20, then tail-jumps to
 * FUN_0075db4a. Otherwise returns immediately.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637b40(void *a);
extern void __cdecl FUN_00637a20(void *a);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005dee30(int param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, -1
        jnz     L_4F
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        jmp     FUN_0075db4a
L_4F:
        ret
    }
}
