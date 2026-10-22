/*
 * FUN_10007470 (20 B) - __fastcall (arg in ECX).
 * Initializes a 0x10-byte object: byte[0]=0, byte[1]=1, dwords at +4/+8/+c=0.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_10007470(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     byte ptr [eax], cl
        mov     byte ptr [eax + 0x1], 0x1
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ecx
        ret
    }
}
