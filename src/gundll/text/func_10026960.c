/*
 * FUN_10026960 (89 B) - __stdcall, RET 0x10.  If this+0xc != 0 return
 * 0xc112000d; else call FUN_1001c760(arg2,this); if >= 0, duplicate arg4 via
 * FUN_10001dd0 and, on success, store the pointers into this
 * (+0x20/+0x24) and set this+4 = 1.  Returns 0 on success, 0x8007000e if
 * the duplicate failed.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void); /* rel32 call */

__declspec(naked) void __stdcall FUN_10026960(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_26977
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
L_26977:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_269b4
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_269a2
        test    edi, edi
        je      L_269a2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
L_269a2:
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x24], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], edx
        mov     eax, ecx
L_269b4:
        pop     edi
        pop     esi
        ret     0x10
    }
}
