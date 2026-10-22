/*
 * FUN_00411880 (26 B) — __thiscall, RET 0x4: copies a 2-dword node from the
 * argument into *this, incrementing the refcount byte at [ptr-1] when the
 * first dword is non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00411880(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        test    edx, edx
        mov     dword ptr [eax], edx
        jz      L1
        inc     byte ptr [edx - 1]
L1:
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        ret     0x4
    }
}
