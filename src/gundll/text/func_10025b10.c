/*
 * FUN_10025b10 (103 B) - __stdcall, RET 0x18.  If this+0xc != 0 return
 * 0xc112000d; else call FUN_1001ca10(arg2,this); if >= 0, duplicate arg6 via
 * FUN_10001dd0 and, on success, store the pointers into this
 * (+0x1c/+0x20/+0x24/+0x28) and set this+4 = 1.  Returns 0 on success,
 * 0x8007000e if the duplicate failed.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void); /* rel32 call */

__declspec(naked) void __stdcall FUN_10025b10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_25b27
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x18
L_25b27:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L_25b72
        mov     edi, dword ptr [esp + 0x20]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_25b52
        test    edi, edi
        je      L_25b52
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x18
L_25b52:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x1c], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
        mov     eax, ecx
L_25b72:
        pop     edi
        pop     esi
        ret     0x18
    }
}
