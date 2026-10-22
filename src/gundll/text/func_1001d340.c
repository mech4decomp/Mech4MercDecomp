/*
 * FUN_1001D340 (61 B) - __stdcall, RET 0x10.  Virtual-dispatch wrapper:
 * calls vtable[4] (+0x10), then FUN_10002480, storing the result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10002480(void);   /* rel32 call, RET 0x8 */

__declspec(naked) void __stdcall FUN_1001D340(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jl      L_d37a
        mov     ecx, dword ptr [esp + 4]
        lea     eax, [esp + 0xc]
        push    eax
        push    ecx
        call    FUN_10002480
        test    eax, eax
        jl      L_d37a
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edx], ecx
L_d37a:
        ret     0x10
    }
}
