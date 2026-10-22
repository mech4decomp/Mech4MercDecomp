/*
 * FUN_0040f0f0 (45 B) — __thiscall helper (3 args). Builds a temp object
 * on the stack, calls FUN_0040f0a0 to copy into it, then FUN_0040f360,
 * and stores a dword result into arg2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040f0a0(void);
extern void __cdecl FUN_0040f360(void);

__declspec(naked) void FUN_0040f0f0(void)
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
        call    FUN_0040f0a0
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    FUN_0040f360
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x8]
        mov     dword ptr [eax], ecx
        pop     esi
        ret     0xc
    }
}
