/*
 * FUN_004AF260 (53 B) — stack-frame builder: pushes 0xe and 0x45524623 as a struct,
 * calls virtual method at vtable+0x24, then calls vtable+0x24 on the returned object.
 *
 * __cdecl (1 stack param: pointer to object with vtable).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004af260(int *param1)
{
    __asm {
        sub     esp, 0x8
        mov     ecx, [esp + 0x0c]
        mov     eax, [ecx]
        push    0x4
        lea     edx, [esp + 0x4]
        push    edx
        mov     dword ptr [esp + 0x0c], 0xe
        mov     dword ptr [esp + 0x08], 0x45524623
        call    dword ptr [eax + 0x24]
        mov     edx, [eax]
        push    0x4
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        add     esp, 0x8
        ret
    }
}
