/*
 * FUN_00493660 (288 B) — __thiscall MLR material constructor (versioned).
 * Sets up the vtable, reads material data from a stream, and applies
 * version-dependent flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491440(void);
extern void __cdecl FUN_004935a0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00493660(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esi + 0x4], 0x0
        lea     edi, [esi + 0x4]
        mov     dword ptr [esi + 0x10], 0x0
        mov     dword ptr [esi + 0x18], 0x0
        mov     dword ptr [esi + 0x20], 0x2
        lea     ecx, [esi + 0x48]
        mov     dword ptr [esi + 0x14], 0x0
        mov     dword ptr [esi + 0x34], 0x2
        call    FUN_00491280
        mov     ebx, dword ptr [ebp + 0x10]
        cmp     ebx, 0x9
        mov     dword ptr [esi], 0x770108
        jge     L_4936cd
        push    0x7b25bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_493780
        int     3
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    L_4936cd:
        mov     eax, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    edi
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00412a00
        mov     edx, dword ptr [edi]
        add     esp, 0x8
        push    0x4
        lea     eax, [ebp - 0x4]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [ebp - 0x4], eax
        jbe     L_49371a
    L_4936fa:
        push    ebx
        push    edi
        call    FUN_004935a0
        add     esp, 0x8
        push    eax
        lea     ecx, [esi + 0x10]
        call    FUN_004179b0
        mov     eax, dword ptr [ebp - 0x4]
        mov     edx, eax
        dec     eax
        test    edx, edx
        mov     dword ptr [ebp - 0x4], eax
        ja      L_4936fa
    L_49371a:
        push    ebx
        push    edi
        lea     ecx, [esi + 0x18]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0x20]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea     ecx, [esi + 0x34]
        call    FUN_004adf70
        push    edi
        call    FUN_00421e60
        add     esp, 0x4
        push    eax
        push    edi
        lea     edi, [esi + 0x48]
        mov     ecx, edi
        call    FUN_00491440
        cmp     ebx, 0xe
        jge     L_493759
        or      dword ptr [esi + 0x54], 0x3fff
    L_493759:
        test    dword ptr [edi], 0x1c000
        jz      L_493780
        mov     eax, dword ptr [esi + 0x4c]
        and     eax, 0xf
        cmp     al, 0x2
        jnc     L_493780
        mov     ecx, dword ptr [edi + 0x4]
        mov     ebx, dword ptr [edi + 0x10]
        or      ebx, 0xf
        and     ecx, 0xfffffff2
        or      ecx, 0x2
        mov     dword ptr [edi + 0x10], ebx
        mov     dword ptr [edi + 0x4], ecx
    L_493780:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
