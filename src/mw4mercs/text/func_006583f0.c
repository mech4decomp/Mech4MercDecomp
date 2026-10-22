/*
 * FUN_006583f0 (45 B) — __thiscall.
 *
 * Sets up a stack frame of pushed args, calls FUN_006584c0() (ECX=&this)
 * and FUN_00658b30() (ECX=this), then copies *result into *arg1.
 * Returns with RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006584c0(void);
extern void __cdecl FUN_00658b30(void);

__declspec(naked) void FUN_006583f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_006584c0
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_00658b30
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax], ecx
        pop     esi
        ret     0xc
    }
}
