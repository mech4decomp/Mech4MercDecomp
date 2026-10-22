/*
 * FUN_005b5290 (96 B) — __thiscall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041acb0(void *a);

__declspec(naked) void __stdcall FUN_005b5290(int a)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x14
        jz      L_52ec
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        mov     edx, dword ptr [esp + 0x8]
        add     eax, 0x80
        mov     dword ptr [esi + 0x57c], ecx
        push    eax
        lea     ecx, [esi + 0x594]
        mov     dword ptr [esi + 0x578], edx
        mov     dword ptr [esi + 0x580], 0x0
        call    FUN_0041acb0
        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x14
        call    dword ptr [eax + 0x4]
        mov     byte ptr [esi + 0x514], 0x0
L_52ec:
        pop     esi
        ret     0x4
    }
}
