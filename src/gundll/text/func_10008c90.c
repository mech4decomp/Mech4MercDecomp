/*
 * FUN_10008c90 (29 B) - __stdcall, RET 0x10.  Switch dispatcher fragment
 * (gaptext split one logical switch function into several fragments; this
 * is the head).  Maps arg1 (0..3) to an HRESULT code in ecx via a jump
 * table at 0x10008cf8, defaulting to 0xc112040e; the case bodies and
 * common tail live in the following fragments (0x10008cad..0x10008cf3).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10008c90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        push    edi
        xor     edi, edi
        xor     ecx, ecx
        cmp     eax, 3
        /* __emit: ja target 0x10008cc0 is outside this 29-byte fragment; a label cannot express it */
        __emit 0x77
        __emit 0x21
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xF8
        __emit 0x8C
        __emit 0x00
        __emit 0x10
        mov     ecx, 0xc112040e
        /* __emit: jmp target 0x10008cc0 is outside this 29-byte fragment; a label cannot express it */
        __emit 0xEB
        __emit 0x13
    }
}
