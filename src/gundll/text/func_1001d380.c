/*
 * FUN_1001D380 (53 B) - __stdcall, RET 0x10.  Virtual-dispatch wrapper:
 * calls vtable[4] (+0x10), then FUN_10002360.  (Transcribed from
 * reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10002360(void);   /* rel32 call, RET 0x8 */

__declspec(naked) void __stdcall FUN_1001D380(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x10
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jl      L_d3af
        mov     ecx, dword ptr [esp + 0x14]
        __emit 0x8D  /* __emit: lea eax,[esp+0] (8D 44 24 00); MSVC6 drops the 00 disp -> 8D 04 24 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        push    ecx
        call    FUN_10002360
L_d3af:
        add     esp, 0x10
        ret     0x10
    }
}
