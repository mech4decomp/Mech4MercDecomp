/*
 * FUN_0049d380 (84 B) — MLR particle copy (__thiscall, RET 4). Copies
 * 0x58 bytes (12 dwords via rep movsd + 10 trailing dwords) from
 * param_1 into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0049d380(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        mov     eax, ecx
        push    esi
        push    edi
        mov     esi, edx
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        mov     ecx, dword ptr [edx+0x30]
        mov     dword ptr [eax+0x30], ecx
        mov     ecx, dword ptr [edx+0x34]
        mov     dword ptr [eax+0x34], ecx
        mov     ecx, dword ptr [edx+0x38]
        mov     dword ptr [eax+0x38], ecx
        mov     ecx, dword ptr [edx+0x3c]
        mov     dword ptr [eax+0x3c], ecx
        mov     ecx, dword ptr [edx+0x40]
        mov     dword ptr [eax+0x40], ecx
        mov     ecx, dword ptr [edx+0x44]
        mov     dword ptr [eax+0x44], ecx
        mov     ecx, dword ptr [edx+0x48]
        mov     dword ptr [eax+0x48], ecx
        mov     ecx, dword ptr [edx+0x4c]
        mov     dword ptr [eax+0x4c], ecx
        mov     ecx, dword ptr [edx+0x50]
        mov     edx, dword ptr [edx+0x54]
        pop     edi
        mov     dword ptr [eax+0x50], ecx
        mov     dword ptr [eax+0x54], edx
        pop     esi
        ret     4
    }
}
