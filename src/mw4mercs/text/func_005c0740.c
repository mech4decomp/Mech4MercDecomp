/*
 * FUN_005C0740 (62 B) — MechAI update (__thiscall, RET 8, 2 stack params).
 * If flag at +0x308 set, calls virtual method at vtable+0x11C; if flag at
 * +0x309 set, calls virtual method at vtable+0x118. Then calls FUN_005C1E50
 * with the two params.
 *
 * __thiscall (ECX = this), RET 8.
 * CFLAGS: /O1
 */

extern void FUN_005c1e50(void);

__declspec(naked) void __stdcall FUN_005c0740(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x308]
        test    al, al
        jz      l_second
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x11C]
    l_second:
        mov     al, byte ptr [esi + 0x309]
        test    al, al
        jz      l_call
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x118]
    l_call:
        mov     eax, dword ptr [esp + 0xC]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005c1e50
        pop     esi
        ret     8
    }
}
