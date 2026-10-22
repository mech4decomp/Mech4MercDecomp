/*
 * FUN_004dab80 (57 B) — __thiscall. Replaces a slot in an array of
 * pointers at this+0xcc indexed by arg (EDI*4). If the old slot was
 * non-null, releases it via a virtual call (vtable+0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004dab80(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esi+edi*4+0xcc]
        test    ecx, ecx
        jz      L_aba9
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esi+edi*4+0xcc], ecx
        pop     edi
        pop     esi
        ret     0x8
L_aba9:
        mov     eax, dword ptr [esp+0x10]
        mov     dword ptr [esi+edi*4+0xcc], eax
        pop     edi
        pop     esi
        ret     0x8
    }
}
