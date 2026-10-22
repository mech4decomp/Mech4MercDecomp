/*
 * FUN_004ff390 (71 B) — MLR/Adept socket-array initializer. For each of the
 * object's count (offset 0x6c) entries in the array at offset 0x8, calls
 * socket(2,2,0x11) and stores the handle; returns 1 on failure, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0075dfc2(void);   /* socket() thunk */

__declspec(naked) void FUN_004ff390(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    ebx
        mov     ebx, dword ptr [eax+0x6c]
        push    ebp
        push    esi
        push    edi
        xor     ebp, ebp
        xor     edi, edi
        cmp     ebx, ebp
        jle     L1
        mov     esi, dword ptr [eax+0x8]
L2:
        push    0x11
        push    0x2
        push    0x2
        call    FUN_0075dfc2
        cmp     eax, -0x1
        mov     dword ptr [esi], eax
        jz      L3
        mov     dword ptr [esi+0x4], ebp
        mov     dword ptr [esi+0x8], ebp
        inc     edi
        add     esi, 0xc
        cmp     edi, ebx
        jl      L2
L1:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret
L3:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret
    }
}
