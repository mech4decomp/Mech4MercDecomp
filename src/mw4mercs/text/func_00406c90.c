/*
 * FUN_00406c90 (42 B) — loop that calls a function pointer (param_4) with
 * ECX=ESI, advancing ESI by param_2 each iteration. __stdcall, 4 params
 * (RET 0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00406c90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        dec     eax
        js      L6CB7
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        lea     edi, [eax + 0x1]
L6CAA:
        mov     ecx, esi
        call    ebx
        add     esi, ebp
        dec     edi
        jnz     L6CAA
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
L6CB7:
        ret     0x10
    }
}
