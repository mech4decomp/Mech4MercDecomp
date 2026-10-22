/*
 * FUN_00739320 (102 B) — Object teardown helper.
 *
 * Calls IAT[0x76b110] with param_1+0x30, then walks param_1->[4]'s
 * array of linked lists (count = param_1->[0x18], stride 0x20, each
 * list chained via +0x1c), freeing each element via FUN_00739c20.
 * Zeroes param_1->[8]/[0xc] and calls IAT[0x76b100]. Returns 0.
 *
 * __stdcall (RET 4), one pointer param, returns int. Uses EBP as a
 * scratch reg (frame-pointer omission).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00739c20(void *p);
extern void *g_0076b110;
extern void *g_0076b100;

__declspec(naked) int __stdcall FUN_00739320(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 8]
        push    esi
        lea     esi, [ebp + 0x30]
        push    esi
        mov     dword ptr [esp + 0x10], esi
        call    dword ptr [g_0076b110]
        mov     eax, dword ptr [ebp + 4]
        test    eax, eax
        jz      label_739370
        mov     ecx, dword ptr [ebp + 0x18]
        test    ecx, ecx
        jbe     label_739370
        push    ebx
        push    edi
        lea     edi, [eax + 0x1c]
        mov     ebx, ecx
label_739349:
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      label_73935e
label_73934f:
        mov     eax, esi
        mov     esi, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_00739c20
        test    esi, esi
        jnz     label_73934f
label_73935e:
        mov     dword ptr [edi], 0
        add     edi, 0x20
        dec     ebx
        jnz     label_739349
        mov     esi, dword ptr [esp + 0x14]
        pop     edi
        pop     ebx
label_739370:
        xor     eax, eax
        push    esi
        mov     dword ptr [ebp + 8], eax
        mov     dword ptr [ebp + 0xc], eax
        call    dword ptr [g_0076b100]
        pop     esi
        xor     eax, eax
        pop     ebp
        ret     4
    }
}
