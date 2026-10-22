/*
 * FUN_100378D6 (35 B) - __cdecl. SEH filter: returns 1 if the current
 * exception frame's handler is 0x1003784c and the frame's saved arg
 * (+0xc) matches the exception record's +0xc; else 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_100378D6(void)
{
    __asm {
        xor     eax, eax
        mov     ecx, dword ptr fs:[0]
        cmp     dword ptr [ecx+4], 0x1003784c
        jne     L_ret
        mov     edx, dword ptr [ecx+0xc]
        mov     edx, dword ptr [edx+0xc]
        cmp     dword ptr [ecx+8], edx
        jne     L_ret
        mov     eax, 1
L_ret:
        ret
    }
}
