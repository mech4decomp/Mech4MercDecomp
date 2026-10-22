/*
 * FUN_004FD950 (46 B) — Scalar deleting destructor. Sets vtable
 * 0x776044, calls FUN_00416e50 (member dtor) and FUN_00415380, then
 * frees via FUN_004084e0 if the low flag bit is set. Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416e50(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_004fd950(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi], 0x776044
        call    FUN_00416e50
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        jz      l_d978
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_d978:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
