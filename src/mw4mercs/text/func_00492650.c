/*
 * FUN_00492650 (45 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 * Copies param_2 via FUN_004925b0, then looks up via FUN_004927a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004925b0(void);
extern void * __fastcall FUN_004927a0(void);

__declspec(naked) void __fastcall FUN_00492650(void)
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
        call    FUN_004925b0
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_004927a0
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax], ecx
        pop     esi
        ret     0xc
    }
}
