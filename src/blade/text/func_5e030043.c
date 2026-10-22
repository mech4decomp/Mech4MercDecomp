/*
 * FUN_5e030043 (46 B) - left-shift a 96-bit (3x32) value by 1.
 * *p = *p*2; p[1] = p[1]*2 | *p>>31; p[2] = p[2]<<1 | p[1]>>31.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e030043(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    edi
        mov     esi, dword ptr [eax]
        mov     edi, dword ptr [eax+4]
        mov     ecx, esi
        add     esi, esi
        mov     dword ptr [eax], esi
        lea     esi, [edi+edi]
        shr     ecx, 0x1f
        or      esi, ecx
        mov     ecx, dword ptr [eax+8]
        mov     edx, edi
        mov     dword ptr [eax+4], esi
        shr     edx, 0x1f
        shl     ecx, 1
        or      ecx, edx
        pop     edi
        mov     dword ptr [eax+8], ecx
        pop     esi
        ret
    }
}
