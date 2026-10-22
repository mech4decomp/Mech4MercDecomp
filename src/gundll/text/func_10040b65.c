/*
 * FUN_10040b65 (68 B) — __cdecl, 1 stack param.
 * Increments global 0x10075720, mallocs 0x1000, stores into param_1[2];
 * sets flags/fields depending on success. Returns void.
 *
 * CFLAGS: /O1
 */

extern int g_10075720;                   /* global counter */
extern void __cdecl FUN_1003c3c5(void);  /* malloc */

__declspec(naked) void FUN_10040b65(void)
{
    __asm {
        inc     dword ptr [g_10075720]
        push    0x1000
        call    FUN_1003c3c5
        pop     ecx
        mov     ecx, dword ptr [esp + 0x4]
        test    eax, eax
        mov     dword ptr [ecx + 0x8], eax
        jz      L8e
        or      dword ptr [ecx + 0xc], 0x8
        mov     dword ptr [ecx + 0x18], 0x1000
        jmp     L9f
    L8e:
        or      dword ptr [ecx + 0xc], 0x4
        lea     eax, [ecx + 0x14]
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0x18], 0x2
    L9f:
        mov     eax, dword ptr [ecx + 0x8]
        and     dword ptr [ecx + 0x4], 0x0
        mov     dword ptr [ecx], eax
        ret
    }
}
