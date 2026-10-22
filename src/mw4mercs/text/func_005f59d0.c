/*
 * FUN_005f59d0 (36 B) — __fastcall (ECX = this). Calls FUN_004dacd0, then
 * releases the marker object at this->0x508 (virtual call + zero).
 *
 * CFLAGS: /O1
 */

extern void FUN_004dacd0(void);

__declspec(naked) void __fastcall FUN_005f59d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dacd0
        mov     ecx, dword ptr [esi + 0x508]
        test    ecx, ecx
        jz      l_59f2
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x508], 0
    l_59f2:
        pop     esi
        ret
    }
}
