/*
 * FUN_0051AA7D (70 B) — .text data block (block 0x51AA7D). Reads a pointer
 * chain from the stack arg, and if non-null calls FUN_00412780 on it;
 * otherwise calls FUN_00412780 with a fixed string. Returns 1. Preceded by
 * 3 alignment NOPs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412780(void);
extern unsigned int g_7dd268;

__declspec(naked) void FUN_0051AA7D(void)
{
    __asm {
        nop
        nop
        nop
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        je      L_aaa6
        mov     edx, dword ptr [g_7dd268]
        push    eax
        lea     ecx, [edx+0x4098c]
        call    FUN_00412780
        mov     eax, 1
        ret     0xc
    L_aaa6:
        mov     eax, dword ptr [g_7dd268]
        push    0x76ba64
        lea     ecx, [eax+0x4098c]
        call    FUN_00412780
        mov     eax, 1
        ret     0xc
    }
}
