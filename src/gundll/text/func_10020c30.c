/*
 * FUN_10020C30 (211 B) - __stdcall, RET 0x18.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls FUN_1001c760,
 * duplicates two strings via FUN_10001dd0, builds a GUID via FUN_1002e010,
 * stores the handles at +0x20/+0x24/+0x28/+0x2c and sets the +0x4 flag.
 * On failure frees via FUN_10001d60 and calls FUN_1002e070.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */
extern void __cdecl FUN_1002e010(void);     /* rel32 call */
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1002e070(void);

__declspec(naked) void __stdcall FUN_10020C30(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0xc]
        xor     ebx, ebx
        cmp     eax, ebx
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        je      L_c53
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x18
L_c53:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    esi
        call    FUN_1001c760
        mov     edi, eax
        cmp     edi, ebx
        jl      L_ce2
        mov     edi, dword ptr [esp + 0x20]
        push    edi
        call    FUN_10001dd0
        mov     ebp, eax
        test    ebp, ebp
        jne     L_c78
        test    edi, edi
        jne     L_cc3
L_c78:
        mov     edi, dword ptr [esp + 0x24]
        push    edi
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jne     L_c8c
        test    edi, edi
        jne     L_cc3
L_c8c:
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_1002e010
        mov     edi, eax
        test    edi, edi
        jl      L_cc8
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x28], eax
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x20], ebp
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 0x4], 1
        mov     dword ptr [esi + 0x2c], ecx
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x18
L_cc3:
        mov     edi, 0x8007000e
L_cc8:
        test    ebp, ebp
        je      L_cd5
        push    ebp
        call    FUN_10001d60
        add     esp, 4
L_cd5:
        test    ebx, ebx
        je      L_ce2
        push    ebx
        call    FUN_10001d60
        add     esp, 4
L_ce2:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_cf9
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002e070
L_cf9:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x18
    }
}
