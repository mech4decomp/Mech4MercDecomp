/*
 * FUN_1001B030 (62 B) - __stdcall, RET 0x4.  String hash: for up to 16
 * chars, hash = hash*0x11 + FUN_10037cc8(char).  Returns 0 for null/empty.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037cc8(void);   /* rel32 call */

__declspec(naked) int __stdcall FUN_1001B030(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        xor     edi, edi
        test    esi, esi
        je      L_b066
        mov     al, byte ptr [esi]
        xor     ebx, ebx
        test    al, al
        je      L_b066
    L_b045:
        mov     ecx, ebx
        inc     ebx
        cmp     ecx, 0x10
        jge     L_b066
        movsx   edx, al
        push    edx
        call    FUN_10037cc8
        imul    edi, edi, 0x11
        add     edi, eax
        mov     al, byte ptr [esi + 1]
        add     esp, 4
        inc     esi
        test    al, al
        jne     L_b045
    L_b066:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
