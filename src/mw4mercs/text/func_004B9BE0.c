/*
 * FUN_004B9BE0 (65 B) — __thiscall (RET 0x4). Calls FUN_004C6960(edi),
 * then invokes virtual method (slot 0x24/4) on edi twice with buffers
 * derived from [this+0x144].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c6960(void);

__declspec(naked) void FUN_004B9BE0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004c6960
        mov     esi, dword ptr [esi + 0x144]
        mov     eax, dword ptr [esi + 0x9c]
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [esi + 0x10]
        push    4
        add     eax, 8
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     4
    }
}
