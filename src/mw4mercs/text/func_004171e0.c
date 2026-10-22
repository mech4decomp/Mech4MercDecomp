/*
 * FUN_004171e0 (20 B) — __fastcall. If this->[+4]->[+0x10] is non-zero,
 * set this->[+0x10] = this->[+4]->[+0x14] - 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004171e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x10]
        test    edx, edx
        jbe     done
        mov     ecx, dword ptr [ecx + 0x14]
        dec     ecx
        mov     dword ptr [eax + 0x10], ecx
done:
        ret
    }
}
