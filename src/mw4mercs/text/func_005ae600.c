/*
 * FUN_005ae600 (124 B) — Vector setup via FUN_00587830 + FUN_00551870.
 *
 * __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00587830(void *a, void *b, void *c);
extern void __stdcall FUN_00551870(void *param);
extern void __stdcall FUN_005aeeb0(void);

__declspec(naked) void __stdcall FUN_005ae600(void)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x4], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esi + 0x168], 0x3
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        sub     esp, 0xc
        lea     edx, [esp + 0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00551870
        lea     ecx, [esi + 0x200]
        call    FUN_005aeeb0
        pop     esi
        add     esp, 0x18
        ret     0x10
    }
}
