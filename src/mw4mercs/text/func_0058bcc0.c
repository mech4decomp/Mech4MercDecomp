/*
 * FUN_0058BCC0 (79 B) — __thiscall method.
 *
 * If this->field_0x5B8 == 2:
 *   Calls vtable[1] on this+0x78, then copies field_0x300 from the
 *   result into this+0x860, copies this+0x850 into this+0x858,
 *   and sets this+0x868 = 2.
 * Otherwise:
 *   Sets this+0x868 = 1 and this+0x850 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0058bcc0(void)
{
    
__asm {
push    esi
        mov     esi, ecx                    ; esi = this
        cmp     dword ptr [esi + 0x5B8], 2
        jne     L_else

        mov     eax, [esi + 0x78]           ; eax = vtable at this+0x78
        lea     ecx, [esi + 0x78]           ; ecx = this+0x78
        call    dword ptr [eax + 4]         ; vtable[1](this+0x78)
        mov     edx, [esi + 0x850]          ; edx = this->field_850
        mov     ecx, [eax + 0x300]          ; ecx = result->field_300
        mov     [esi + 0x860], ecx
        mov     [esi + 0x858], edx
        mov     dword ptr [esi + 0x868], 2
        pop     esi
        ret

    L_else:
        mov     dword ptr [esi + 0x868], 1
        mov     dword ptr [esi + 0x850], 0
        pop     esi
        ret
    }


}
