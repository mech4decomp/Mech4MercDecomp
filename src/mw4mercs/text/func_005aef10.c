/*
 * FUN_005aef10 (38 B) — __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006782c0(void *ecx);

__declspec(naked) void __stdcall FUN_005aef10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        cmp     byte ptr [esi], 0x0
        jz      skip
        call    FUN_006782c0
skip:
        mov     ecx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esi + 0x10]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        pop     esi
        ret     0x4
    }
}
