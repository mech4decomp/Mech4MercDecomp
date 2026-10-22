/*
 * FUN_0072f496 (extent 0x72f496-0x72f4d9, 67 bytes) - gen via tools/gen_bigfunc.py.
 * Jump table (data) + start of switch dispatch.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0072f496(void)
{
    __asm {
        /* 0x72F496-0x72F4BF: in-function jump-table DATA (42 bytes).
           gen_bigfunc mis-disassembled these as garbage mnemonics that don't
           reproduce the bytes; emit the literal reference bytes instead. */
        __emit 0x8B
        __emit 0xFF
        __emit 0xDC
        __emit 0xF2
        __emit 0x72
        __emit 0x00
        __emit 0x13
        __emit 0xF3
        __emit 0x72
        __emit 0x00
        __emit 0x4A
        __emit 0xF3
        __emit 0x72
        __emit 0x00
        __emit 0x81
        __emit 0xF3
        __emit 0x72
        __emit 0x00
        __emit 0xB8
        __emit 0xF3
        __emit 0x72
        __emit 0x00
        __emit 0xEC
        __emit 0xF3
        __emit 0x72
        __emit 0x00
        __emit 0x20
        __emit 0xF4
        __emit 0x72
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        sub     esp, 0x218
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x228]
        mov     al, byte ptr [ebp + 0x858128]
        xor     ebx, ebx
        cmp     al, bl
    }
}
