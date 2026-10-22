/*
 * FUN_006855a0 (62 B) — __thiscall helper.
 *
 * Calls the vtable method at [*esi+0x20] four times with (this, size)
 * pairs: (this,0xc), (this+0xc,4), (this+0x10,1), (this+0x14,4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006855a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0xc
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [edi + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        add     edi, 0x14
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        pop     edi
        pop     esi
        ret     0x4
    }
}
