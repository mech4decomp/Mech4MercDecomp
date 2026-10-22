/* FUN_0058EA70: Copy 12-byte struct from stack param to this
 * thiscall: ECX = output, stack: float *src
 * out[0..2] = src[0..2]
 */
__declspec(naked) void FUN_0058EA70(void)
{
    __asm {
        MOV EAX, ECX                     /* EAX = output */
        MOV ECX, dword ptr [ESP + 0x4]   /* ECX = src */
        MOV EDX, dword ptr [ECX]         /* EDX = src[0] */
        MOV dword ptr [EAX], EDX         /* out[0] = src[0] */
        MOV EDX, dword ptr [ECX + 0x4]   /* EDX = src[1] */
        MOV ECX, dword ptr [ECX + 0x8]   /* ECX = src[2] */
        MOV dword ptr [EAX + 0x4], EDX   /* out[1] = src[1] */
        MOV dword ptr [EAX + 0x8], ECX   /* out[2] = src[2] */
        RET 0x4
    }
}
