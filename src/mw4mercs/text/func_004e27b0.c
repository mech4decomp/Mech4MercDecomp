/*
 * FUN_004e27b0 (50 B) — MLR/Adept: compute zone index from a location
 * (3 floats). __thiscall (ECX = this). Calls FUN_004b6ca0 with two
 * coords, masks to 16 bits, and returns 0xFFFFFFFF if out of range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004b6ca0(void);

__declspec(naked) void FUN_004e27b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        push    esi
        mov     esi, dword ptr [ecx + 0xd8]
        mov     ecx, dword ptr [eax]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004b6ca0
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x14c]
        pop     esi
        and     eax, 0xffff
        cmp     eax, ecx
        jc      loc_4e27df
        or      eax, 0xffffffff
loc_4e27df:
        ret     0x4
    }
}
