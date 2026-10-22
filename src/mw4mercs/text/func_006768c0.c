/*
 * FUN_006768c0 (70 B) - Constructor allocating a zeroed array.
 *
 * __thiscall (ECX = this), RET 4 (one stack param). Calls
 * FUN_006f3c80(param*4, 0), stores result at [this], zero-fills it with
 * rep stosd, sets size fields, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_006f3c80(int, int);

__declspec(naked) void *__fastcall FUN_006768c0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        push    0
        lea     eax, [ebx*4 + 0]
        push    eax
        mov     esi, ecx
        call    FUN_006f3c80
        test    ebx, ebx
        mov     edi, eax
        mov     dword ptr [esi], edi
        jle     L_e6
        mov     ecx, ebx
        xor     eax, eax
        rep stosd
L_e6:
        pop     edi
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 8], 0
        mov     dword ptr [esi + 4], 0
        mov     dword ptr [esi + 0xc], 0
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
