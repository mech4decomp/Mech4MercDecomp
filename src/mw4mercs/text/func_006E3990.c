/*
 * FUN_006E3990 (59 B @ 0x6e3990) - __cdecl. Constructs a temporary object on
 * the stack, calls into the 0x6e3c50/0x6e3570 helpers, then destroys it.
 * (Block 0x6E37FA is 265 B and contains two more functions at 0x6E39D0 and
 * 0x6E3A20.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e3c50(void);
extern void __cdecl FUN_006e3570(void);
extern void __cdecl FUN_006e29e0(void);

__declspec(naked) void FUN_006E3990(void)
{
    __asm {
        push    ecx
        /* __emit: MSVC6 drops the 00 disp byte for lea [esp] (8D 0C 24 vs 8D 4C 24 00) */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_006e2840
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        lea     ecx, [esp + 8]
        call    FUN_006e3c50
        /* __emit: MSVC6 drops the 00 disp byte for mov eax,[esp] (8B 04 24 vs 8B 44 24 00) */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [esp + 8]
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        call    FUN_006e3570
        /* __emit: MSVC6 drops the 00 disp byte for lea [esp] */
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        call    FUN_006e29e0
        pop     ecx
        ret
    }
}
