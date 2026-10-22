/*
 * FUN_006451B0 (31 B) — __thiscall (ECX = this) destructor.
 *
 * Sets vtable to 0x792650, and if the member at +0x74 is non-null calls
 * its virtual slot 0 with arg 1 (Release), then tail-calls FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561730(void);

__declspec(naked) void __fastcall FUN_006451b0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x74]
        test    ecx, ecx
        mov     dword ptr [esi], 0x792650
        jz      l_skip
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_skip:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        ret
    }
}
