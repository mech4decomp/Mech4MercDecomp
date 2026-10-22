/*
 * FUN_00684770 (100 B) — __thiscall HUD list copy-constructor.
 * Copies 6 dwords (rep movsd), then copies the two sub-list headers
 * (at +0x18 and +0x34) field-by-field and re-links the list pointers.
 * RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00684770(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     eax, ecx
        push    edi
        mov     esi, edx
        mov     ecx, 0x6
        mov     edi, eax
        rep movsd
        mov     esi, dword ptr [edx + 0x18]
        mov     edi, dword ptr [edx + 0x34]
        mov     dword ptr [eax + 0x18], esi
        mov     esi, dword ptr [edx + 0x1c]
        lea     ecx, [eax + 0x18]
        mov     dword ptr [ecx + 0x4], esi
        mov     esi, dword ptr [edx + 0x20]
        mov     dword ptr [ecx + 0x8], esi
        mov     esi, dword ptr [edx + 0x24]
        mov     dword ptr [ecx + 0xc], esi
        mov     esi, dword ptr [edx + 0x28]
        mov     dword ptr [ecx + 0x10], esi
        mov     esi, dword ptr [edx + 0x2c]
        mov     dword ptr [ecx + 0x14], esi
        mov     esi, dword ptr [edx + 0x30]
        mov     dword ptr [ecx + 0x18], esi
        lea     esi, [eax + 0x34]
        mov     dword ptr [esi], edi
        mov     edi, dword ptr [edx + 0x38]
        mov     dword ptr [esi + 0x4], edi
        mov     edi, dword ptr [edx + 0x3c]
        mov     edx, dword ptr [edx + 0x40]
        mov     dword ptr [esi + 0x8], edi
        pop     edi
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x40], edx
        mov     dword ptr [eax], ecx
        pop     esi
        ret     0x4
    }
}
