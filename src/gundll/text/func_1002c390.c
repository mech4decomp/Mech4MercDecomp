/*
 * FUN_1002c390 (84 B) - __stdcall, RET 0xC.
 * If arg1==0 and arg3!=0: for each of arg3 rows of 10 dwords starting at
 * arg2+8, call FUN_10001d60 on each dword. Then always call
 * FUN_10001d60(arg2). Returns 0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1002c390(void)
{
    __asm {
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        jnz     L_3d2
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jbe     L_3d2
        mov     ecx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea     ebx, [ecx + 0x8]
        mov     ebp, eax
        __emit 0x8D   /* __emit: lea ecx,[ecx] zero-disp; MSVC6 drops the 00 disp byte (8D 49 00) */
        __emit 0x49
        __emit 0x00
    L_3b0:
        mov     esi, ebx
        mov     edi, 0xa
    L_3b7:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_10001d60
        add     esp, 0x4
        add     esi, 0x4
        dec     edi
        jnz     L_3b7
        add     ebx, 0x30
        dec     ebp
        jnz     L_3b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
    L_3d2:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        xor     eax, eax
        ret     0xc
    }
}
