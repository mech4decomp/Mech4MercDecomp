/*
 * FUNC_0040f060 (20 B) — __thiscall, RET 0x4. Copies a refcounted string
 * pointer from param_1 into *this, bumping the refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040f060(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     edx, dword ptr [ecx]
        test    edx, edx
        mov     dword ptr [eax], edx
        jz      loc_40F071
        inc     byte ptr [edx-1]
loc_40F071:
        ret     0x4
    }
}
