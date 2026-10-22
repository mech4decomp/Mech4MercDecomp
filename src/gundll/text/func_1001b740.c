/*
 * FUN_1001B740 (67 B) - __stdcall, RET 0x8.  Reads a value via
 * FUN_1001b480(0x20, buf, arg1); on success calls FUN_10002480(buf, &local)
 * and stores *local into *arg2.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_1001b480(void);      /* rel32 call */
extern void __stdcall FUN_10002480(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1001B740(void)
{
    __asm {
        sub     esp, 0x44
        mov     edx, dword ptr [esp + 0x48]
        push    0x20
        lea     eax, [esp + 8]
        push    eax
        push    edx
        mov     dword ptr [esp + 0xc], 0
        call    FUN_1001b480
        test    eax, eax
        jl      L_b77d
        /* __emit: lea eax,[esp+0] MSVC6 collapses to 3-byte 8D 04 24 */
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    eax
        lea     ecx, [esp + 8]
        push    ecx
        call    FUN_10002480
        test    eax, eax
        jl      L_b77d
        mov     edx, dword ptr [esp + 0x4c]
        /* __emit: mov ecx,[esp+0] MSVC6 collapses to 3-byte 8B 0C 24 */
        __emit 0x8B
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [edx], ecx
    L_b77d:
        add     esp, 0x44
        ret     8
    }
}
