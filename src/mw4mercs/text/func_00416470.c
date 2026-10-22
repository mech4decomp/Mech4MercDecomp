/*
 * FUN_00416470 (59 B) — database item/pool helper. __thiscall (this in ECX),
 * RET 0x8 (2 params). Looks up an item in the pool array via vtable[0x24/4],
 * lazily creates it via vtable[0x20/4], then calls vtable[0x18/4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416470(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    ebx
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [esi + 0xc]
        mov     edi, eax
        mov     eax, dword ptr [ecx + edi*0x4]
        test    eax, eax
        jnz     L16498
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [ecx + edi*0x4], eax
L16498:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax]
        push    ebx
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
