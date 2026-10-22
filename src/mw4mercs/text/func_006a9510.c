/*
 * FUN_006a9510 (52 B) — Release two sub-objects (this+0x4C, this+0x50)
 * via their vtables, then reset them and set this+0x20 to -1.0f.
 *
 * __fastcall (ECX = this), no stack args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006a9510(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4C]
        test    ecx, ecx
        jz      L_skip1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_skip1:
        mov     ecx, dword ptr [esi + 0x50]
        test    ecx, ecx
        mov     dword ptr [esi + 0x4C], 0x0
        jz      L_skip2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L_skip2:
        mov     dword ptr [esi + 0x50], 0x0
        mov     dword ptr [esi + 0x20], 0xBF800000
        pop     esi
        ret
    }
}
