/* FUN_0058D870: Copy three dword values from stack params into output struct
 * thiscall: ECX = output, stack: float *a, float *b, float *c
 * out[0] = *a, out[1] = *b, out[2] = *c
 */
__declspec(naked) void FUN_0058D870(void)
{
    __asm {
        MOV EAX, ECX                     /* EAX = output */
        MOV ECX, dword ptr [ESP + 0x8]   /* ECX = param_2 (b) */
        MOV EDX, dword ptr [ECX]         /* EDX = *b */
        MOV ECX, dword ptr [ESP + 0x4]   /* ECX = param_1 (a) */
        MOV dword ptr [EAX + 0x4], EDX   /* out[1] = *b */
        MOV EDX, dword ptr [ECX]         /* EDX = *a */
        MOV ECX, dword ptr [ESP + 0xC]   /* ECX = param_3 (c) */
        MOV dword ptr [EAX], EDX         /* out[0] = *a */
        MOV EDX, dword ptr [ECX]         /* EDX = *c */
        MOV dword ptr [EAX + 0x8], EDX   /* out[2] = *c */
        RET 0xC
    }
}
