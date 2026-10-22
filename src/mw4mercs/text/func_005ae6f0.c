/*
 * FUN_005ae6f0 (101 B) — Vector setup via FUN_00587830 + FUN_005aef10.
 *
 * __thiscall (ECX = this), RET 0x14 (five stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00587830(void *a, void *b, void *c);
extern void __stdcall FUN_00551870(void *param);
extern void __stdcall FUN_005aef10(void *param);
extern void __stdcall FUN_005aeeb0(void);

__declspec(naked) void __stdcall FUN_005ae6f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        sub     esp, 0x18
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        lea     edi, [esi + 0x260]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, edi
        call    FUN_005aef10
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, edi
        call    FUN_005aeeb0
        mov     dl, byte ptr [esp + 0x34]
        pop     edi
        mov     byte ptr [esi + 0x1f0], dl
        pop     esi
        add     esp, 0x18
        ret     0x14
    }
}
