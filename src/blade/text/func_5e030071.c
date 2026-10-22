/*
 * FUN_5e030071 (45 B) - right-shift a 96-bit (3x32) value by 1.
 * p[1] = p[1]>>1 | p[2]<<31; p[2] = p[2]>>1; *p = *p>>1 | p[1]<<31.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e030071(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    edi
        mov     edx, dword ptr [eax+8]
        mov     ecx, dword ptr [eax+4]
        mov     esi, edx
        mov     edi, ecx
        shl     esi, 0x1f
        shr     ecx, 1
        or      ecx, esi
        mov     dword ptr [eax+4], ecx
        mov     ecx, dword ptr [eax]
        shl     edi, 0x1f
        shr     ecx, 1
        shr     edx, 1
        or      ecx, edi
        pop     edi
        mov     dword ptr [eax+8], edx
        mov     dword ptr [eax], ecx
        pop     esi
        ret
    }
}
