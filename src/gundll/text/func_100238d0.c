/*
 * FUN_100238D0 (103 B) - __stdcall, RET 0x18 (6 args).
 * If esi->+0xc is nonzero returns 0xc112000d. Else calls
 * FUN_1001c760(esi, arg2); on success calls FUN_10001dd0(arg6) and stores
 * results into esi->{0x20,0x24,0x28,0x2c} and esi->+4=1. Returns
 * 0x8007000e on alloc failure.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);
extern void * __stdcall FUN_10001dd0(void *);

__declspec(naked) void __stdcall FUN_100238D0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_8e7
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x18
L_8e7:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_932
        mov     edi, dword ptr [esp + 0x20]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_912
        test    edi, edi
        je      L_912
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x18
L_912:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], edx
        mov     edx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x2c], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x28], edx
        mov     eax, ecx
L_932:
        pop     edi
        pop     esi
        ret     0x18
    }
}
