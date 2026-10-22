/*
 * FUN_1000CB20 (126 B) - __stdcall, RET 0xC.  Wraps FUN_10008e60 (a
 * registry/string helper) and dispatches through a vtable method at
 * [obj+0x10]->vtable[3] (call [edx+0xc]); on failure releases via
 * vtable[1] (call [edx+4]).  Returns the HRESULT-ish result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10008e60(void);

__declspec(naked) void __stdcall FUN_1000CB20(void)
{
    __asm {
        sub     esp, 0x18
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        push    esi
        lea     eax, [esp + 4]
        push    eax
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x10], 0
        call    FUN_10008e60
        mov     esi, eax
        test    esi, esi
        jl      L_cb86
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [ecx + 0x10]
        lea     ecx, [esp + 8]
        push    ecx
        mov     dword ptr [esp + 0xc], 4
        mov     dword ptr [esp + 0x10], 1
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        test    esi, esi
        jge     L_cb95
L_cb86:
        mov     ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je      L_cb95
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
L_cb95:
        mov     eax, esi
        pop     esi
        add     esp, 0x18
        ret     0xc
    }
}
