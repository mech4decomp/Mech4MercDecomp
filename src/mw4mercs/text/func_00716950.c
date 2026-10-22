/*
 * FUN_00716950 (55 B) — Pure arithmetic helper (__stdcall, 1 arg).
 *   if (x < 0)  return x * -0x1e + -0xffffd6;
 *   if (x > 0)  return x * 0x1e0000 + -0xd60000;
 *   return -0x1000000;
 *
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00716950(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jge     L_6c
        lea     eax, [eax + eax*2]
        lea     eax, [eax + eax*4]
        shl     eax, 1
        mov     ecx, eax
        mov     eax, 0xff00002a
        sub     eax, ecx
        ret     4
    L_6c:
        jle     L_7f
        lea     eax, [eax + eax*2]
        lea     eax, [eax + eax*4]
        shl     eax, 0x11
        sub     eax, 0xd60000
        ret     4
    L_7f:
        mov     eax, 0xff000000
        ret     4
    }
}
