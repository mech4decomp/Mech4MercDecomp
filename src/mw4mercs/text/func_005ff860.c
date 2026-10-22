/*
 * FUN_005ff860 (39 B) — __thiscall. Sets up a stack object, calls
 * FUN_00602c40 (ctor) then FUN_005ff890 (thiscall on ECX=ESI).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00602c40(void);
extern void __cdecl FUN_005ff890(void);

__declspec(naked) void FUN_005ff860(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x10]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x10]
        push    eax
        push    ecx
        sub     esp, 0x8
        lea     edx, [esp+0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00602c40
        mov     ecx, esi
        call    FUN_005ff890
        pop     esi
        ret     0x10
    }
}
