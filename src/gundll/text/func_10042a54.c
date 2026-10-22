/*
 * FUN_10042A54 (98 B) - __stdcall, RET 0x4.  Lock-guarded one-shot
 * initializer: FUN_10039b19(1); pick g_1007572c (arg1==0) or g_10075730
 * (arg1!=0); if the slot is null -> unlock, return 0; if slot==1 ->
 * unlock, return 1; else clear the slot, unlock, call the slot(edi),
 * return 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern int g_1007572c;
extern int g_10075730;

__declspec(naked) void __stdcall FUN_10042A54(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    1
        pop     ebx
        push    ebx
        call    FUN_10039b19
        cmp     dword ptr [esp + 0x14], 0
        pop     ecx
        jne     L_hi
        mov     esi, dword ptr [g_1007572c]
        mov     eax, offset g_1007572c
        push    2
        jmp     L_join
L_hi:
        mov     esi, dword ptr [g_10075730]
        mov     eax, offset g_10075730
        push    0x15
L_join:
        test    esi, esi
        pop     edi
        jne     L_nonnull
        push    ebx
        call    FUN_10039b7a
        pop     ecx
        xor     eax, eax
        jmp     L_done
L_nonnull:
        cmp     esi, ebx
        je      L_one
        and     dword ptr [eax], 0
        push    ebx
        call    FUN_10039b7a
        push    edi
        call    esi
        pop     ecx
        jmp     L_ret1
L_one:
        push    ebx
        call    FUN_10039b7a
L_ret1:
        pop     ecx
        mov     eax, ebx
L_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
