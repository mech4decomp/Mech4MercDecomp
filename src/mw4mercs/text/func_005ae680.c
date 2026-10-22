/*
 * FUN_005ae680 (99 B) — Vector setup via FUN_00551870.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00551870(void *param);
extern void __stdcall FUN_005aeeb0(void);

__declspec(naked) void __stdcall FUN_005ae680(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x4], ecx
        mov     edx, dword ptr [eax + 0x1c]
        push    0x0
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax + 0x2c]
        sub     esp, 0xc
        lea     edx, [esp + 0x14]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esi + 0x168], 0x3
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     eax, [esp + 0x20]
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esi + 0x200]
        call    FUN_005aeeb0
        pop     esi
        add     esp, 0xc
        ret
    }
}
