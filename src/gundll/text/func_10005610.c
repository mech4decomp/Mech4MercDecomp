/*
 * FUN_10005610 (305 B) - __stdcall, RET 0xc.  Hash-table insert / lookup
 * routine.  Validates arg1->field_0x14 / field_0x7c and arg3, optionally
 * registers via FUN_1001b540, checks a string against 0x10049b70 /
 * 0x10049b60 via FUN_10037bf0, walks the bucket chain (indirect vtable
 * calls through ebx->field_0x0c / field_0x08), then inserts via
 * FUN_1001b5e0 and calls FUN_10005a40 on arg1-0x14.  Returns an
 * HRESULT-style code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int  __cdecl FUN_1001b540(void);     /* rel32 call, ecx=this, 1 arg */
extern void __cdecl FUN_10037bf0(void);     /* rel32 call, 2 args */
extern int  __cdecl FUN_1001b5e0(void);     /* rel32 call, ecx=this, 1 arg */
extern void __cdecl FUN_10005a40(void);     /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_10005610(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     al, byte ptr [esi + 0x14]
        test    al, al
        push    edi
        jne     L_562f
        mov     esi, 0xc1120008
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_562f:
        mov     eax, dword ptr [esi + 0x7c]
        test    eax, eax
        jne     L_5645
        mov     esi, 0xc1120008
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_5645:
        mov     edi, dword ptr [esp + 0x20]
        test    edi, edi
        jne     L_565c
        mov     esi, 0x80070057
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_565c:
        mov     ebp, dword ptr [esp + 0x1c]
        test    ebp, ebp
        push    edi
        jne     L_56a1
        mov     ecx, dword ptr [esi + 0x78]
        call    FUN_1001b540
        test    eax, eax
        jl      L_5680
        mov     esi, 0xc1120c03
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_5680:
        push    edi
        push    0x10049b70
L_5686:
        call    FUN_10037bf0
        add     esp, 8
        test    eax, eax
        jne     L_56a8
        mov     esi, 0xc1120c0c
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_56a1:
        push    0x10049b60
        jmp     L_5686
L_56a8:
        mov     ebx, dword ptr [esi + 0x7c]
        push    ebp
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 2]
        mov     ecx, dword ptr [ebx + 4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        je      L_5709
L_56c7:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_56e2
        mov     eax, dword ptr [esi + 8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [ebx + 8]
        test    al, al
        jne     L_56f7
        mov     ebp, dword ptr [esp + 0x1c]
L_56e2:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jne     L_56c7
        mov     esi, 0xc1120c01
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_56f7:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        mov     esi, dword ptr [esp + 0x10]
        je      L_5705
        push    esi
        call    ebx
L_5705:
        test    esi, esi
        jne     L_5718
L_5709:
        mov     esi, 0xc1120c01
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_5718:
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_1001b5e0
        mov     esi, eax
        test    esi, esi
        jl      L_5737
        mov     ecx, dword ptr [esp + 0x18]
        add     ecx, -0x14
        push    ecx
        call    FUN_10005a40
L_5737:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
