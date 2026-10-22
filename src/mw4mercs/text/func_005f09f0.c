/*
 * FUN_005f09f0 (63 B) — __thiscall. Updates float/int fields on the object
 * returned by FUN_005f07c0 using values from a virtual-call result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_005f07c0(void);

__declspec(naked) void FUN_005f09f0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        call    FUN_005f07c0
        lea     ecx, [edi + 0x78]
        mov     esi, eax
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x20]
        sub     dword ptr [esi + 0x3bc], ecx
        mov     edx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [esi + 0x3c0]
        fsubr   dword ptr [esi + 0x3b8]
        sub     eax, edx
        pop     edi
        fstp    dword ptr [esi + 0x3b8]
        mov     dword ptr [esi + 0x3c0], eax
        pop     esi
        ret
    }
}
