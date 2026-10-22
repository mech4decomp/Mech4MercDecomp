/*
 * FUN_005AEAE0 (101 B) — __thiscall (this = ECX), RET 0x14 (5 params).
 *
 * Calls FUN_00587830 (with a stack buffer), FUN_00551870 (twice,
 * __thiscall-style with ECX=ESP), FUN_005aef10 (on [this+0x290]), and
 * FUN_005aeeb0. Stores a byte param into [this+0x1f1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005aef10(void);
extern void __cdecl FUN_005aeeb0(void);

__declspec(naked) void __cdecl func_005aeae0(void)
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
        lea     edi, [esi + 0x290]
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
        mov     byte ptr [esi + 0x1f1], dl
        pop     esi
        add     esp, 0x18
        ret     0x14
    }
}
