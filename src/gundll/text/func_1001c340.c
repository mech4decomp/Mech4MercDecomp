/*
 * FUN_1001C340 (91 B) - __stdcall, RET 0xc.  Validates arg1 via
 * FUN_1001c280; if ok, scans arg1's array (count at +0, entries from +4)
 * calling FUN_1003809d(entry, arg1) until one matches; stores the matching
 * index into *arg2 and returns 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern char __stdcall FUN_1001c280(void *p);   /* rel32 call */
extern void __cdecl  FUN_1003809d(void);       /* rel32 call, 2 args */

__declspec(naked) int __stdcall FUN_1001C340(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        push    ebx
        call    FUN_1001c280
        test    al, al
        je      L_c383
        mov     ebp, dword ptr [esp + 0x18]
        test    ebp, ebp
        je      L_c383
        mov     eax, dword ptr [ebx]
        xor     esi, esi
        test    eax, eax
        jbe     L_c383
        lea     edi, [ebx + 4]
    L_c365:
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      L_c379
        push    eax
        push    ebp
        call    FUN_1003809d
        add     esp, 8
        test    eax, eax
        je      L_c38c
    L_c379:
        mov     eax, dword ptr [ebx]
        inc     esi
        add     edi, 4
        cmp     esi, eax
        jb      L_c365
    L_c383:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0xc
    L_c38c:
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     0xc
    }
}
