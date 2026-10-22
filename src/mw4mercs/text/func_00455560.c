/*
 * FUN_00455560 (124 B) — MLR material/render helper. __thiscall (ECX = this).
 * Reads 6 floats via a virtual stream interface (vtable +0x24) into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00458610(void);
extern void __cdecl FUN_00491340(void);

__declspec(naked) void FUN_00455560(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00458610
        push    edi
        lea     ecx, [esi+0x70]
        call    FUN_00491340
        mov     eax, dword ptr [edi]
        push    4
        lea     ecx, [esi+0x94]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x98]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0x9c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [eax]
        push    4
        lea     ecx, [esi+0xa0]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esi+0x88]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [eax]
        push    4
        add     esi, 0x8c
        push    esi
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        pop     edi
        pop     esi
        ret     0x4
    }
}
