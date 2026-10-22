/* FUN_10023d50 (37 B) — __thiscall ctor. */
extern void __cdecl FUN_1001c720(void);

__declspec(naked) void FUN_10023d50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x810a
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x1004ab58
        mov     dword ptr [esi + 0x20], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
