/*
 * FUN_1001d150 (20 B) - __fastcall. Constructor: stores vtable ptr + zeroes fields.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_1001d150(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x1004a958
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ecx
        ret
    }
}
