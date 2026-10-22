/*
 * FUN_0061f200 (100 B) — __cdecl, one param. Removes an element matching
 * param_1 from a vector (at DAT_008058b8 + 0x10/0x14), shifting remaining
 * elements down, then calls FUN_006f4230(param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058b8;
extern void __cdecl FUN_006f4230(void *param);

__declspec(naked) void FUN_0061f200(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_008058b8]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        test    ebp, ebp
        jz      L_done
        mov     eax, dword ptr [ebx + 0x14]
        push    esi
        mov     esi, dword ptr [ebx + 0x10]
        cmp     esi, eax
        jz      L_call
        push    edi
        lea     edi, [esi + 0x4]
L_outer:
        cmp     dword ptr [esi], ebp
        jnz     L_else
        mov     edx, dword ptr [ebx + 0x14]
        cmp     edi, edx
        jz      L_shiftdone
        mov     eax, edx
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, esi
        jle     L_shiftdone
L_memmove:
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], ebp
        add     ecx, 0x4
        dec     eax
        jnz     L_memmove
        mov     ebp, dword ptr [esp + 0x14]
L_shiftdone:
        add     edx, -0x4
        mov     dword ptr [ebx + 0x14], edx
        jmp     L_cont
L_else:
        add     esi, 0x4
        add     edi, 0x4
L_cont:
        cmp     esi, dword ptr [ebx + 0x14]
        jnz     L_outer
        pop     edi
L_call:
        push    ebp
        call    FUN_006f4230
        pop     esi
L_done:
        pop     ebp
        pop     ebx
        ret
    }
}
