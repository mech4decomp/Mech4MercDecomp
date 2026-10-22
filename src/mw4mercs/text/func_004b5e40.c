/*
 * FUN_004B5E40 (50 B) — __thiscall method (ECX=this), RET 4.
 * Copies a 0x40-byte struct from this+0x10's internal buffer to param_1.
 * Uses FLD/FSTP for one float field and REP MOVSD for the bulk copy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004b5e40(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [esp + 4]
        fld     dword ptr [eax + 8]
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    edi
        mov     dword ptr [edx + 8], ecx
        lea     esi, [eax + 0x18]
        lea     edi, [edx + 0xc]
        mov     ecx, 0xc
        rep movsd
        pop     edi
        pop     esi
        fstp    dword ptr [edx + 0x3c]
        ret     4
    }
}
