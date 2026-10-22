/*
 * FUN_005ae3c0 (113 B) — State setup via vtable dispatch + FPU stores.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ae3c0(void)
{
    

extern int DAT_007f20d0;
__asm {
push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x2
        call    dword ptr [eax + 0x4]
        mov     edi, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, dword ptr [edi]
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        mov     dword ptr [edi + 0x18], ecx
        mov     ecx, edi
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x14]
        mov eax, dword ptr [DAT_007f20d0]
        fld     dword ptr [eax + 0x2c]
        pop     edi
        fst     dword ptr [esi + 0x31c]
        mov     dword ptr [esi + 0x314], 0x0
        fstp    dword ptr [esi + 0x320]
        mov     dword ptr [esi + 0x318], 0x0
        fld     dword ptr [eax + 0x2c]
        mov     byte ptr [esi + 0x310], 0x1
        fstp    dword ptr [esi + 0x324]
        pop     esi
        ret
    }


}
