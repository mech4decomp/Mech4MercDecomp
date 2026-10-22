/*
 * FUN_10035410 (44 B) - __stdcall, RET 0x8.  Calls a virtual method
 * (vtable[0x18], +0x60) on arg0->field+0xc if non-null, then calls
 * FUN_10035ee0 (thiscall) and FUN_10033620 (cdecl) on the result.
 * Returns the vtable call's result (or 0 if the object was null).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10035ee0(void);    /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_10033620(void);    /* rel32 call (cdecl) */

__declspec(naked) void __stdcall FUN_10035410(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edi + 0xc]
        xor     esi, esi
        test    eax, eax
        je      L_1
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x60]
        mov     esi, eax
    L_1:
        mov     ecx, edi
        call    FUN_10035ee0
        push    eax
        call    FUN_10033620
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
