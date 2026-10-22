/*
 * FUN_0067f940 (51 B) - __thiscall. Calls FUN_0041fd80() on this+0x10,
 * then dispatches through a function-pointer table at 0x82db38 indexed by
 * this->0x18 * 0x20, passing the result plus four stack params.
 *
 * __thiscall (ECX = this), RET 0x10 (four stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_0067f940(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x10]
        call    FUN_0041fd80
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        shl     ecx, 0x5
        push    eax
        call    dword ptr [ecx + 0x82db38]
        add     esp, 0x14
        pop     esi
        ret     0x10
    }
}
