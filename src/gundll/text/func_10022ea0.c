/*
 * FUN_10022EA0 (96 B) - __stdcall, RET 0x14 (5 args).
 * If esi->+0xc is nonzero returns 0xc112000d. Else calls
 * FUN_1001c760(esi, arg2); on success calls FUN_10001dd0(arg5) and stores
 * results into esi->{0x20,0x24,0x28} and esi->+4=1. Returns 0x8007000e on
 * alloc failure.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);
extern void * __stdcall FUN_10001dd0(void *);

__declspec(naked) void __stdcall FUN_10022EA0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_eb7
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
L_eb7:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_efb
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_ee2
        test    edi, edi
        je      L_ee2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x14
L_ee2:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x24], eax
        mov     eax, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x28], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], edx
        mov     eax, ecx
L_efb:
        pop     edi
        pop     esi
        ret     0x14
    }
}
