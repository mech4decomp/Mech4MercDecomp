/*
 * FUN_0059AE20 (73 B) — __thiscall method on an object at 0xE0/0x240.
 *
 * If this->ptr_0xE0->field_14 == 6 and this->byte_0x240 is set:
 *   calls ptr_0xE0->vtable[1](8, 0) and clears the flag.
 * Otherwise:
 *   calls FUN_005E6F60(this, param1, param2) and clears the flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e6f60(void);

__declspec(naked) void __stdcall FUN_0059ae20(void)
{
    __asm {
        push    esi
        mov     esi, ecx                    ; esi = this
        mov     ecx, [esi + 0xE0]           ; ecx = this->ptr_0xE0
        cmp     dword ptr [ecx + 0x14], 6
        jne     L_else
        mov     al, byte ptr [esi + 0x240]
        test    al, al
        je      L_else
        mov     eax, [ecx]                  ; eax = vtable
        push    0
        push    8
        call    dword ptr [eax + 4]         ; vtable[1](8, 0)
        mov     byte ptr [esi + 0x240], 0
        pop     esi
        ret     8
    L_else:
        mov     ecx, [esp + 0x0C]           ; param2
        mov     edx, [esp + 0x08]           ; param1
        push    ecx
        push    edx
        mov     ecx, esi                    ; this
        call    FUN_005e6f60
        mov     byte ptr [esi + 0x240], 0
        pop     esi
        ret     8
    }
}
