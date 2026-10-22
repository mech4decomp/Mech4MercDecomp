/*
 * FUN_10034250 (32 B) - __stdcall, RET 0x8.  Stores arg2 (low word) at
 * this+8, rewrites the two stack args, then tail-jmps FUN_100339c0
 * (thiscall) with this-0x18 in ecx.  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_100339c0(void);

__declspec(naked) void __stdcall FUN_10034250(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        mov     word ptr [ecx + 8], ax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 4], eax
        add     ecx, -0x18
        jmp     FUN_100339c0
    }
}
