/*
 * FUN_00465220 (86 B) — __thiscall (1 stack arg, RET 4). Calls FUN_0047A6B0,
 * copies several floats from [edi+0x94..0xA0] into [esi+0x90..0x9C], calls
 * a virtual method, then copies 6 dwords from its result into [esi+0x74].
 * Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047A6B0(void);

__declspec(naked) void FUN_00465220(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_0047A6B0
        fld     dword ptr [edi + 0x9c]
        fld     dword ptr [edi + 0x94]
        mov     eax, dword ptr [edi]
        fstp    dword ptr [esi + 0x90]
        push    1
        fld     st(0)
        mov     ecx, edi
        fstp    dword ptr [esi + 0x94]
        fstp    dword ptr [esi + 0x98]
        fld     dword ptr [edi + 0xa0]
        fstp    dword ptr [esi + 0x9c]
        call    dword ptr [eax + 0x18]
        lea     edi, [esi + 0x74]
        mov     esi, eax
        mov     ecx, 6
        rep movsd
        pop     edi
        mov     al, 1
        pop     esi
        ret     4
    }
}
