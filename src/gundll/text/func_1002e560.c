/*
 * FUN_1002e560 (28 B) - __fastcall. Sets *param_1 = 4 and returns
 * ((*(short*)param_1[2] != 0x22) - 1 & 0xfffffffa) + 0xc.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_1002e560(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 8]
        mov     dword ptr [ecx], 4
        xor     ecx, ecx
        cmp     word ptr [eax], 0x22
        setnz   cl
        dec     ecx
        and     ecx, 0xfffffffa
        add     ecx, 0xc
        mov     eax, ecx
        ret
    }
}
