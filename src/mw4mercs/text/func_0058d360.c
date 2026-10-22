/* FUN_0058D360: 3D vector lerp (linear interpolation)
 * thiscall: ECX = output float[3], stack: float *a, float *b, float t
 * result[i] = (b[i] - a[i]) * t + a[i]
 */
__declspec(naked) void FUN_0058D360(void)
{
    __asm {
        MOV EDX, dword ptr [ESP + 0x4]   /* EDX = a */
        MOV EAX, ECX                     /* EAX = output */
        MOV ECX, dword ptr [ESP + 0x8]   /* ECX = b */
        FLD dword ptr [ECX]              /* ST(0) = b[0] */
        FSUB dword ptr [EDX]             /* ST(0) = b[0] - a[0] */
        FMUL dword ptr [ESP + 0xC]       /* ST(0) = (b[0] - a[0]) * t */
        FADD dword ptr [EDX]             /* ST(0) = (b[0] - a[0]) * t + a[0] */
        FSTP dword ptr [EAX]             /* out[0] = result */
        FLD dword ptr [ECX + 0x4]        /* ST(0) = b[1] */
        FSUB dword ptr [EDX + 0x4]       /* ST(0) = b[1] - a[1] */
        FMUL dword ptr [ESP + 0xC]       /* ST(0) = (b[1] - a[1]) * t */
        FADD dword ptr [EDX + 0x4]       /* ST(0) = (b[1] - a[1]) * t + a[1] */
        FSTP dword ptr [EAX + 0x4]       /* out[1] = result */
        FLD dword ptr [ECX + 0x8]        /* ST(0) = b[2] */
        FSUB dword ptr [EDX + 0x8]       /* ST(0) = b[2] - a[2] */
        FMUL dword ptr [ESP + 0xC]       /* ST(0) = (b[2] - a[2]) * t */
        FADD dword ptr [EDX + 0x8]       /* ST(0) = (b[2] - a[2]) * t + a[2] */
        FSTP dword ptr [EAX + 0x8]       /* out[2] = result */
        RET 0xC
    }
}
