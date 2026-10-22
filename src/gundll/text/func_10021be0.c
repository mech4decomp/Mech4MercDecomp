/* FUN_10021be0 (37 B) — __thiscall ctor. */
extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_10021be0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0xa205
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004aabc
        mov     dword ptr [esi + 0x24], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
