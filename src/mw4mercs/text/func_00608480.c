/*
 * FUN_00608480 (29 B) — __thiscall wrapper: forwards 3 args to
 * FUN_006089d0(this + 0x14, 1, param1, param2, param3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006089d0(void);

__declspec(naked) void FUN_00608480(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x8]
        push    edx
        push    eax
        push    1
        lea     edx, [ecx + 0x14]
        push    edx
        call    FUN_006089d0
        ret     0xc
    }
}
