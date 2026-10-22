/*
 * FUN_100133b0 (89 B) - __stdcall, RET 0x10 (4 args).
 * If this+0xc != 0 return 0xc112000d; else call FUN_1001ca10(arg2,this);
 * if >= 0, call FUN_10001dd0(arg4); on failure (arg4 null or alloc fail)
 * return 0x8007000e; else store arg3 at +0x1c, eax at +0x20, set +0x4=1,
 * return 0.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);    /* rel32 call */
extern void __stdcall FUN_10001dd0(void);  /* rel32 call */

__declspec(naked) void __stdcall FUN_100133b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        jz      L1
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
    L1:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L2
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L3
        test    edi, edi
        je      L3
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
    L3:
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x20], eax
        mov     byte ptr [esi + 4], 0x1
        mov     dword ptr [esi + 0x1c], edx
        mov     eax, ecx
    L2:
        pop     edi
        pop     esi
        ret     0x10
    }
}
