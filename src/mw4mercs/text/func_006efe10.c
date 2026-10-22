/*
 * FUN_006EFE10 (74 B) — D3D-style function call with parameter array.
 *
 * __cdecl, RET 8 (2 params). Reads a function pointer from a global
 * table at 0x00848C7C indexed by param2. Sets up a parameter array
 * on the stack and calls FUN_00523D10(0, 3, &param_array).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00523d10(int, int, void *);

__declspec(naked) void __cdecl FUN_006efe10(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x14]
        _emit   0x8B
        _emit   0x0D
        _emit   0x7C
        _emit   0x8C
        _emit   0x84
        _emit   0x00
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x18], eax
        mov     edx, dword ptr [ecx + eax * 4]
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 4], eax
        lea     eax, [esp + 4]
        push    eax
        mov     dword ptr [esp + 4], edx
        push    3
        lea     ecx, [esp + 0x20]
        lea     edx, [esp + 8]
        push    0
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
        call    FUN_00523d10
        add     esp, 0x10
        ret
    }
}
