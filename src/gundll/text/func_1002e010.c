/*
 * FUN_1002E010 (84 B) - __stdcall, RET 0x8 (2 args).
 * If arg2 is null, store 0 into *arg1 and return 0.  Else allocate 0x10
 * bytes (FUN_10001d50), store it into *arg1, copy the 16-byte block at
 * arg2 into it, and return 0.  On allocation failure return 0x8007000e.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */

__declspec(naked) void __stdcall FUN_1002E010(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        xor     edi, edi
        test    esi, esi
        jne     L_e029
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [eax], esi
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x8
    L_e029:
        push    0x10
        call    FUN_10001d50
        mov     ecx, dword ptr [esp + 0x10]
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [ecx], eax
        jne     L_e047
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x8
    L_e047:
        mov     edx, dword ptr [esi]
        mov     dword ptr [eax], edx
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [eax + 4], ecx
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [eax + 8], edx
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [eax + 0xc], ecx
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x8
    }
}
