/*
 * FUN_00411840 (30 B) — __cdecl: copies a 2-dword node from param_2 into
 * param_1, incrementing the refcount byte at [ptr-1] when the first dword
 * is non-null. No-op when param_1 is null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00411840(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L1
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     dword ptr [ecx], eax
        jz      L2
        inc     byte ptr [eax - 1]
L2:
        mov     eax, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x4], eax
L1:
        ret
    }
}
