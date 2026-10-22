/*
 * FUN_00406cc0 (49 B) — loop that calls a function pointer (param_4) with
 * ECX=ESI, decrementing ESI by param_2 each iteration. __stdcall, 4 params
 * (RET 0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00406cc0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        mov     ecx, ebx
        imul    ecx, eax
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        add     esi, ecx
        dec     eax
        js      L6CEC
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    edi
        lea     edi, [eax + 0x1]
L6CE1:
        sub     esi, ebx
        mov     ecx, esi
        call    ebp
        dec     edi
        jnz     L6CE1
        pop     edi
        pop     ebp
L6CEC:
        pop     esi
        pop     ebx
        ret     0x10
    }
}
