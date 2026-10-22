/*
 * FUN_0061b210 (83 B) — __thiscall: dispatches three virtual calls
 * (vtable+0x24) on the object at this+0x34, then calls FUN_0061ae40 on a
 * computed sub-object (index math: [eax+eax*4]*2*8 + 0x38).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0061ae40(void);

__declspec(naked) void FUN_0061b210(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi+0x34]
        push    1
        lea     ecx, [esp+0xc]
        mov     dword ptr [esp+0xc], 0
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi+0x24]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x24]
        mov     ecx, dword ptr [esi+0x34]
        mov     edx, dword ptr [ecx]
        push    1
        lea     eax, [esp+0x14]
        push    eax
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [eax+eax*4]
        lea     edx, [eax+ecx*2]
        lea     ecx, [esi+edx*8+0x38]
        call    FUN_0061ae40
        pop     edi
        pop     esi
        pop     ecx
        ret     4
    }
}
