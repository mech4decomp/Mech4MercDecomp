/*
 * FUN_005f6900 (43 B) — If param_1 == 3, zero three fields, then forward
 * to FUN_005f9ab0.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f9ab0(int a, int b);

__declspec(naked) void FUN_005f6900(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, 0x3
        jnz     skip
        xor     edx, edx
        mov     dword ptr [ecx + 0x41c], edx
        mov     dword ptr [ecx + 0x420], edx
        mov     dword ptr [ecx + 0x424], edx
skip:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        push    eax
        call    FUN_005f9ab0
        ret     8
    }
}
