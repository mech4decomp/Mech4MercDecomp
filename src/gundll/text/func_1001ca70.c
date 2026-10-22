/*
 * FUN_1001CA70 (31 B) - __fastcall (this in ecx), RET 0x8.  Constructor: stores two args
 * (at +4, +8), the this-pointer of arg0 (+0xc), and sets vtable pointer
 * 0x1004a8d8.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1001CA70(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 8]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax], 0x1004a8d8
        ret     0x8
    }
}
