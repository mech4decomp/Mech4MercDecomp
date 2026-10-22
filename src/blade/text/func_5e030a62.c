/*
 * FUN_5e030a62 (24 B) - writes EAX/EBP/[EBP+8] into a global record at
 * 0x5e039840. __stdcall (RET 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_5e039840;   /* global record base (reloc-masked) */

__declspec(naked) void FUN_5e030a62(void)
{
    __asm {
        push    ebx
        push    ecx
        mov     ebx, offset g_5e039840
        mov     ecx, dword ptr [ebp+8]
        mov     dword ptr [ebx+8], ecx
        mov     dword ptr [ebx+4], eax
        mov     dword ptr [ebx+0xc], ebp
        pop     ecx
        pop     ebx
        ret     4
    }
}
