/*
 * FUN_00621be0 (35 B) — Iterate a range [this+0xC, this+0x10) of dword
 * pointers, calling FUN_00621ba0(*p) for each element.
 *
 * __fastcall (ECX = this), no stack args, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00621ba0(void);

__declspec(naked) void __stdcall FUN_00621be0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0xC]
        cmp     esi, dword ptr [edi + 0x10]
        jz      done
    L_loop:
        mov     eax, dword ptr [esi]
        push    eax
        mov     ecx, edi
        call    FUN_00621ba0
        mov     eax, dword ptr [edi + 0x10]
        add     esi, 4
        cmp     esi, eax
        jnz     L_loop
    done:
        pop     edi
        pop     esi
        ret
    }
}
