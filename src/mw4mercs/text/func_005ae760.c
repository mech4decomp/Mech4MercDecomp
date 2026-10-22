/*
 * FUN_005ae760 (96 B) — Vector setup via FUN_0041acb0.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041acb0(void *param);

__declspec(naked) void __stdcall FUN_005ae760(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x8]
        mov     byte ptr [esi + 0x2c0], 0x1
        call    FUN_0041acb0
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x2d0], ecx
        mov     edx, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x2c8], 0x0
        mov     dword ptr [esi + 0x2d4], edx
        mov     dword ptr [esi + 0x2d8], eax
        mov     dword ptr [esi + 0x2cc], ecx
        mov     byte ptr [esi + 0x2c4], 0x1
        pop     esi
        add     esp, 0xc
        ret     0x8
    }
}
