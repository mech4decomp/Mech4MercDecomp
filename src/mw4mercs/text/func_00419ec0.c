/*
 * FUN_00419ec0 (41 B) — __thiscall copy helper: calls FUN_0041a160 on
 * (this+0xc) then copies three dwords from the source struct into
 * this+0xc / this+0x1c / this+0x2c. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041a160(void *p);

__declspec(naked) void FUN_00419ec0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [edi + 0xc]
        mov     esi, ecx
        push    eax
        call    FUN_0041a160
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edi + 0x8]
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi + 0x1c], edx
        mov     dword ptr [esi + 0x2c], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
