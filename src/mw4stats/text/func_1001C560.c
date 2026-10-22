/*
 * FUN_1001c560 (254 B) - __stdcall (5 args, RET 0x14). InternetStatusCallback
 * installed by FUN_1001c3b0. Dispatches on dwInternetStatus via a jump table
 * (0x1001c660) + index table (0x1001c678) that live outside the compared
 * function range; sets an event and status flags on completion states.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002109c;   /* IAT: SetEvent */
extern int g_jt_1001c660;  /* jump table base 0x1001c660 */

__declspec(naked) void __cdecl FUN_1001c560(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        test    esi, esi
        jz      L_c65a
        mov     eax, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 0x1], 0x0
        mov     dword ptr [esi + 0x8], eax
        add     eax, -0x1f
        cmp     eax, 0x45
        ja      L_c65a
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x1001c678]
        jmp     dword ptr [ecx*4 + g_jt_1001c660]
L_c593:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_c65a
        cmp     byte ptr [esi], 0x0
        jnz     L_c65a
        push    eax
        call    dword ptr [g_1002109c]
        mov     byte ptr [esi + 0x1], 0x1
        mov     dword ptr [esi + 0x8], 0x64
        pop     esi
        ret     0x14
L_c5bd:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, 0x1
        jz      L_c5ce
        cmp     eax, 0x2
        jnz     L_c65a
L_c5ce:
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jz      L_c65a
        cmp     eax, 0x2
        jnz     L_c5e7
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx]
        mov     dword ptr [esi + 0x10], eax
L_c5e7:
        push    ecx
        call    dword ptr [g_1002109c]
        mov     byte ptr [esi + 0x1], 0x1
        pop     esi
        ret     0x14
L_c5f6:
        cmp     dword ptr [esi + 0x4], 0x5
        jnz     L_c65a
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        call    dword ptr [g_1002109c]
        mov     byte ptr [esi + 0x1], 0x1
        pop     esi
        ret     0x14
L_c60e:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx + 0x4]
        test    eax, eax
        jnz     L_c634
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, 0x2
        jz      L_c630
        cmp     eax, 0x3
        jz      L_c630
        cmp     eax, 0x4
        jz      L_c630
        cmp     eax, 0x5
        jnz     L_c634
L_c630:
        mov     byte ptr [esi + 0x1], 0x1
L_c634:
        mov     esi, dword ptr [esi + 0xc]
        test    esi, esi
        jz      L_c65a
        push    esi
        call    dword ptr [g_1002109c]
        pop     esi
        ret     0x14
L_c646:
        cmp     dword ptr [esi + 0x4], 0x5
        jnz     L_c65a
        mov     esi, dword ptr [esi + 0xc]
        test    esi, esi
        jz      L_c65a
        push    esi
        call    dword ptr [g_1002109c]
L_c65a:
        pop     esi
        ret     0x14
    }
}
