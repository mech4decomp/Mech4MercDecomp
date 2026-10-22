/*
 * FUN_005f7480 (48 B) — Destructor: destroys two sub-objects, calls a
 * base method, optionally frees this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fc90(void *param);
extern void __stdcall FUN_00415380(void *param);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void FUN_005f7480(int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x1c]
        call    FUN_0041fc90
        lea     ecx, [esi + 0x14]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
