/*
 * FUN_007012B0 (37 B) — __stdcall (RET 8, two params).
 *
 * If ((param2)->m8 == 0x2000), calls FUN_00701350(param1, param2).
 * Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00701350(void *a, void *b);

__declspec(naked) void __stdcall FUN_007012b0(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [eax + 8]
        and     ecx, 0xFF000
        cmp     ecx, 0x2000
        jnz     L1
        mov     edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_00701350
L1:
        xor     eax, eax
        ret     8
    }
}
