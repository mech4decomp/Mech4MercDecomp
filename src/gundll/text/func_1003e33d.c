/*
 * FUN_1003e33d (194 B) - __cdecl. Loop over linked list of blocks; frees
 * 0x1000-byte pages via VirtualFree (IAT 0x100491c8), decrements counter
 * DAT_100756a0, and calls FUN_1003e2e7 when a block is fully free.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

extern void *g_10051f74;              /* PTR_LOOP_10051f74 (dword) */
extern int g_100756a0;                /* DAT_100756a0 (dword) */
extern void *g_100491c8;              /* IAT: VirtualFree */
extern void __cdecl FUN_1003e2e7(void); /* rel32 call */

__declspec(naked) void __cdecl FUN_1003e33d(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [g_10051f74]
        push    edi
L_34a:
        cmp     dword ptr [esi + 0x10], -1
        jz      L_3e8
        and     dword ptr [ebp - 4], 0
        lea     edi, [esi + 0x2010]
        mov     ebx, 0x3ff000
L_363:
        cmp     dword ptr [edi], 0xf0
        jnz     L_3a4
        mov     eax, ebx
        push    0x4000
        add     eax, dword ptr [esi + 0x10]
        push    0x1000
        push    eax
        call    dword ptr [g_100491c8]
        test    eax, eax
        jz      L_3a4
        or      dword ptr [edi], -1
        dec     dword ptr [g_100756a0]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_399
        cmp     eax, edi
        jbe     L_39c
L_399:
        mov     dword ptr [esi + 0xc], edi
L_39c:
        inc     dword ptr [ebp - 4]
        dec     dword ptr [ebp + 8]
        jz      L_3b1
L_3a4:
        sub     ebx, 0x1000
        sub     edi, 8
        test    ebx, ebx
        jge     L_363
L_3b1:
        cmp     dword ptr [ebp - 4], 0
        mov     ecx, esi
        mov     esi, dword ptr [esi + 4]
        jz      L_3e8
        cmp     dword ptr [ecx + 0x18], -1
        jnz     L_3e8
        push    1
        lea     eax, [ecx + 0x20]
        pop     edx
L_3c8:
        cmp     dword ptr [eax], -1
        jnz     L_3d9
        inc     edx
        add     eax, 8
        cmp     edx, 0x400
        jl      L_3c8
L_3d9:
        cmp     edx, 0x400
        jnz     L_3e8
        push    ecx
        call    FUN_1003e2e7
        pop     ecx
L_3e8:
        cmp     esi, dword ptr [g_10051f74]
        jz      L_3fa
        cmp     dword ptr [ebp + 8], 0
        jg      L_34a
L_3fa:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
