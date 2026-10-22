/*
 * FUN_10030370 (62 B) - __stdcall, RET 0x8.  Virtual dispatch: loads
 * obj->field_0xc, calls vtable[0x50/4] (stdcall, 3 stack args) into a
 * 0x5c-byte stack buffer; on success (>=0) copies arg1 into the buffer via
 * FUN_10033580.  Returns the vtable call's result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033580(void);

__declspec(naked) void __stdcall FUN_10030370(void)
{
    __asm {
        sub     esp, 0x5c
        mov     eax, dword ptr [esp + 0x60]
        mov     eax, dword ptr [eax + 0xc]
        push    esi
        push    0
        lea     edx, [esp + 8]
        push    edx
        mov     dword ptr [esp + 0xc], 0x5c
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x50]
        mov     esi, eax
        test    esi, esi
        jl      done
        mov     ecx, dword ptr [esp + 0x68]
        lea     eax, [esp + 4]
        push    eax
        push    ecx
        call    FUN_10033580
done:
        mov     eax, esi
        pop     esi
        add     esp, 0x5c
        ret     8
    }
}
