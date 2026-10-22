/*
 * FUN_10034b40 (72 B) - __stdcall, RET 0x8.  Builds a 0x5c-byte local
 * buffer, makes a virtual call through [edx+0x88] (5 args), and on
 * success calls FUN_10033580 with arg2 + &buffer[4].  Returns the
 * virtual call's result.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033580(void);

__declspec(naked) void __stdcall FUN_10034b40(void)
{
    __asm {
        sub     esp, 0x5c
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [eax + 0x10]
        push    esi
        push    0
        lea     esi, [esp + 8]
        push    esi
        mov     dword ptr [esp + 0xc], 0x5c
        mov     eax, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x88]
        mov     esi, eax
        test    esi, esi
        jl      L_7f
        mov     ecx, dword ptr [esp + 0x68]
        lea     eax, [esp + 4]
        push    eax
        push    ecx
        call    FUN_10033580
    L_7f:
        mov     eax, esi
        pop     esi
        add     esp, 0x5c
        ret     8
    }
}
