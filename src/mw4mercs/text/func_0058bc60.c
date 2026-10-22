/*
 * FUN_0058BC60 (81 B) — __thiscall method.
 *
 * If this->field_0x5B8 == 1:
 *   Calls vtable[1] on this+0x78, then copies field_0x300 from the
 *   result into this+0x85C, copies this+0x84C into this+0x854,
 *   and sets this+0x864 = 2.
 * Otherwise:
 *   Sets this+0x864 = 1 and this+0x84C = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0058bc60(void)
{
    
__asm {
push    esi
        mov     esi, ecx                    ; esi = this
        mov     ecx, [esi + 0x5B8]          ; ecx = this->field_5B8
        mov     eax, 1
        cmp     ecx, eax
        jne     L_else

        mov     eax, [esi + 0x78]           ; eax = vtable at this+0x78
        lea     ecx, [esi + 0x78]           ; ecx = this+0x78
        call    dword ptr [eax + 4]         ; vtable[1](this+0x78)
        mov     edx, [esi + 0x84C]          ; edx = this->field_84C
        mov     ecx, [eax + 0x300]          ; ecx = result->field_300
        mov     [esi + 0x85C], ecx
        mov     [esi + 0x854], edx
        mov     dword ptr [esi + 0x864], 2
        pop     esi
        ret

    L_else:
        mov     dword ptr [esi + 0x864], eax
        mov     dword ptr [esi + 0x84C], 0
        pop     esi
        ret
    }


}
