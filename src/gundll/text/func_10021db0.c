/*
 * FUN_10021db0 (187 B) - __stdcall, RET 0x1c (7 args).  Object init/register
 * routine: if this+0xc != 0 return 0xc112000d; else call FUN_1001ca10(arg2,
 * this); on success allocate via FUN_10001dd0, on failure set 0x8007000e and
 * free via FUN_10001d60; then FUN_1002e070 / FUN_1002e010 and store results
 * into this+0x1c..+0x2c.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);   /* rel32 call */
extern void __cdecl FUN_10001dd0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern void __cdecl FUN_1002e070(void);   /* rel32 call */
extern void __cdecl FUN_1002e010(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10021db0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp+0x10]
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        push    edi
        mov     dword ptr [esp+0xc], 0
        je      L_dd3
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x1c
L_dd3:
        mov     eax, dword ptr [esp+0x18]
        push    eax
        push    esi
        call    FUN_1001ca10
        mov     edi, eax
        test    edi, edi
        jl      L_e0a
        mov     edi, dword ptr [esp+0x20]
        push    edi
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jne     L_e2a
        test    edi, edi
        je      L_e2a
        mov     edi, 0x8007000e
L_dfd:
        test    ebx, ebx
        je      L_e0a
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_e0a:
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        je      L_e21
        mov     ecx, dword ptr [esi+0xc]
        test    ecx, ecx
        setne   cl
        push    eax
        push    ecx
        call    FUN_1002e070
L_e21:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x1c
L_e2a:
        mov     ecx, dword ptr [esp+0x28]
        push    ecx
        lea     edx, [esp+0x10]
        push    edx
        call    FUN_1002e010
        mov     edi, eax
        test    edi, edi
        jl      L_dfd
        mov     eax, dword ptr [esp+0x1c]
        mov     ecx, dword ptr [esp+0x24]
        mov     edx, dword ptr [esp+0xc]
        mov     dword ptr [esi+0x1c], eax
        mov     eax, dword ptr [esp+0x2c]
        mov     dword ptr [esi+0x2c], eax
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi+0x20], ebx
        mov     byte ptr [esi+4], 1
        mov     dword ptr [esi+0x24], ecx
        mov     dword ptr [esi+0x28], edx
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x1c
    }
}
