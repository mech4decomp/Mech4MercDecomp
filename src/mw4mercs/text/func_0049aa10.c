/*
 * FUN_0049aa10 (49 B) — MLR PointLight constructor (__thiscall, RET 0x8).
 * Calls base constructor FUN_004940a0, sets vtable ptr 0x77020c and a
 * field, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da96c;
extern void __cdecl FUN_004940a0(void);

__declspec(naked) void FUN_0049aa10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [g_007da96c]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004940a0
        mov     dword ptr [esi], 0x77020c
        mov     dword ptr [esi + 0xa0], 0x0
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
