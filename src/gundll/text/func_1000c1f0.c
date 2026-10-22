/*
 * FUN_1000C1F0 (48 B) - __stdcall, RET 0x8.  Allocates a zeroed buffer of
 * (param_1 * param_2) bytes via FUN_1000c1b0 and clears it with
 * rep stosd/stosb.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1000c1b0(void);   /* rel32 call (alloc) */

__declspec(naked) void __stdcall FUN_1000C1F0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        imul    esi, dword ptr [esp + 0xc]
        push    esi
        call    FUN_1000c1b0
        mov     edx, eax
        test    edx, edx
        je      short L_1000c21a
        push    edi
        mov     ecx, esi
        shr     ecx, 2
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     ecx, esi
        and     ecx, 3
        rep stosb
        pop     edi
L_1000c21a:
        mov     eax, edx
        pop     esi
        ret     8
    }
}
