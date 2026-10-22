/*
 * FUN_100368B0 (69 B) - __stdcall, RET 0x8.  Reads this->field_0xc and
 * this->field_0x1c, builds a 0x5c-byte local buffer, invokes virtual method
 * [vtable+0x88](this, field_0x1c, buffer, 0); if the result >= 0, calls
 * FUN_10033580(arg2, buffer).  Returns the virtual call's result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033580(void);

__declspec(naked) void __stdcall FUN_100368B0(void)
{
    __asm {
        sub     esp, 0x5c
        mov     ecx, dword ptr [esp + 0x60]
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [ecx + 0x1c]
        push    esi
        push    0
        lea     esi, [esp + 8]
        push    esi
        push    ecx
        mov     dword ptr [esp + 0x10], 0x5c
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x88]
        mov     esi, eax
        test    esi, esi
        jl      done
        mov     eax, dword ptr [esp + 0x68]
        lea     edx, [esp + 4]
        push    edx
        push    eax
        call    FUN_10033580
done:
        mov     eax, esi
        pop     esi
        add     esp, 0x5c
        ret     0x8
    }
}
