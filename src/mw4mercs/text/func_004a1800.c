/*
 * FUN_004a1800 (60 B) — MLR particle/shrapnel: copy constructor. Copies the
 * first 0x30 bytes (12 dwords) via rep movsd, then copies fields 0x30..0x44.
 * __thiscall (this in ECX, source in [esp+4]), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004a1800(void)
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
        mov     edx, dword ptr [edx+0x44]
        pop     edi
        mov     dword ptr [eax+0x40], ecx
        mov     dword ptr [eax+0x44], edx
        pop     esi
        ret     0x4
    }
}
