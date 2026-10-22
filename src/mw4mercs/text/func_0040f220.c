/*
 * FUN_0040f220 (45 B) — __thiscall helper (3 args). Builds a temp object
 * on the stack, calls FUN_0040f0e0 to copy into it, then FUN_0040ff40,
 * and stores a dword result into arg2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040f0e0(void);
extern void __cdecl FUN_0040ff40(void);

__declspec(naked) void FUN_0040f220(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        push    esi
        mov     esi, ecx
        push    eax
        push    ecx
        lea     edx, [esp+0x14]
        mov     ecx, esp
        push    edx
        call    FUN_0040f0e0
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    FUN_0040ff40
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x8]
        mov     dword ptr [eax], ecx
        pop     esi
        ret     0xc
    }
}
