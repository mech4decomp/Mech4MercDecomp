/*
 * FUN_004bf590 (91 B) — MLR object method (__thiscall, RET 0x4). Searches
 * the sub-object array [ecx+0x144] for param_1 and zeroes the matching
 * slot, then clears [esi+0x18] bits 0x3f, sets [esi+0x10]=0, and calls
 * virtual methods (vtable+0x10/+0x14).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004bf590(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x148]
        push    esi
        mov     esi, dword ptr [esp + 8]
        xor     eax, eax
        test    dx, dx
        push    edi
        jbe     L_bf5ca
        mov     ecx, dword ptr [ecx + 0x144]
L_bf5a9:
        mov     edi, eax
        and     edi, 0xffff
        cmp     dword ptr [ecx + edi*4], esi
        jz      L_bf5be
        inc     eax
        cmp     ax, dx
        jc      L_bf5a9
        jmp     L_bf5ca
L_bf5be:
        and     eax, 0xffff
        mov     dword ptr [ecx + eax*4], 0
L_bf5ca:
        and     dword ptr [esi + 0x18], 0xffffff3f
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], 0
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        ret     4
    }
}
