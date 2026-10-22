/*
 * FUN_1000c290 (58 B) - __stdcall, RET 0x4. Frees a heap block
 * allocated by FUN_1000c1b0: validates the "ZmMe" magic, re-stamps
 * "ZFre", clears the trailing marker, and HeapFree's the header.
 *
 * CFLAGS: /O1
 */

extern void *g_10049078;   /* IAT: GetProcessHeap */
extern void *g_10049084;   /* IAT: HeapFree */

__declspec(naked) void __stdcall FUN_1000c290(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_done
        mov     ecx, dword ptr [eax - 0x8]
        sub     eax, 0x8
        cmp     ecx, 0x6d654d5a
        jnz     L_done
        mov     ecx, dword ptr [eax + 0x4]
        push    eax
        mov     dword ptr [eax], 0x6572465a
        push    0x0
        mov     dword ptr [ecx + eax + 0x8], 0x0
        call    dword ptr [g_10049078]
        push    eax
        call    dword ptr [g_10049084]
    L_done:
        ret     0x4
    }
}
