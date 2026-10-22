/*
 * FUN_00662e90 (28 B) — __thiscall register helper (registered via
 * factory): writes flags into *this; if param_2 == 1, ORs in bit 2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00662e90(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     eax, ecx
        mov     cl, byte ptr [esp + 8]
        or      edx, 1
        cmp     cl, 1
        mov     dword ptr [eax], edx
        jnz     done
        or      edx, 2
        mov     dword ptr [eax], edx
done:
        ret     8
    }
}
