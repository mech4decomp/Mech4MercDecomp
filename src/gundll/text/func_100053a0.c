/*
 * FUN_100053A0 (348 B) - __stdcall, RET 0x10.  Hash-table insert / lookup
 * routine.  Validates arg1->field_0x14 / field_0x7c and the arg3 string,
 * optionally registers via FUN_1001b540, walks the bucket chain (indirect
 * vtable calls through ebx->field_0x0c / field_0x08), then inserts via
 * FUN_1001b3d0 / FUN_10037b0e / FUN_1001b280 and calls FUN_10005a40 on
 * arg1-0x14.  Returns an HRESULT-style code.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int  __cdecl FUN_1001b540(void);     /* rel32 call, ecx=this, 1 arg */
extern int  __cdecl FUN_1001b3d0(void);     /* rel32 call, 3 args */
extern void __cdecl FUN_10037b0e(void);     /* rel32 call, 2 args */
extern int  __cdecl FUN_1001b280(void);     /* rel32 call, ecx=this, 2 args */
extern void __cdecl FUN_10005a40(void);     /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_100053A0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     al, byte ptr [esi + 0x14]
        xor     ecx, ecx
        test    al, al
        push    edi
        mov     dword ptr [esp + 0x14], ecx
        je      L_53c1
        cmp     dword ptr [esi + 0x7c], ecx
        mov     dword ptr [esp + 0x18], ecx
        jne     L_53d2
L_53c1:
        mov     esi, 0xc1120008
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
L_53d2:
        mov     eax, dword ptr [esp + 0x28]
        cmp     eax, ecx
        je      L_53e5
        cmp     dword ptr [esp + 0x2c], ecx
        je      L_53e5
        cmp     byte ptr [eax], 0
        jne     L_53f6
L_53e5:
        mov     esi, 0x80070057
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
L_53f6:
        mov     ebp, dword ptr [esp + 0x24]
        cmp     ebp, ecx
        jne     L_541c
        mov     ecx, dword ptr [esi + 0x78]
        push    eax
        call    FUN_1001b540
        test    eax, eax
        jl      L_541c
        mov     esi, 0xc1120c03
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
L_541c:
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
        je      L_5484
        nop
        __emit 0x8D   /* lea esp,[esp+0] - MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
L_5440:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_545b
        mov     eax, dword ptr [esi + 8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x18], eax
        call    dword ptr [ebx + 8]
        test    al, al
        jne     L_5472
        mov     ebp, dword ptr [esp + 0x24]
L_545b:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jne     L_5440
        mov     esi, 0xc1120c01
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
L_5472:
        mov     ebx, dword ptr [ebx + 0x10]
        test    ebx, ebx
        mov     esi, dword ptr [esp + 0x10]
        je      L_5480
        push    esi
        call    ebx
L_5480:
        test    esi, esi
        jne     L_5495
L_5484:
        mov     esi, 0xc1120c01
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
L_5495:
        mov     edi, dword ptr [esp + 0x28]
        lea     eax, [esp + 0x14]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_1001b3d0
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        je      L_54c0
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        push    eax
        call    FUN_10037b0e
        add     esp, 8
        test    eax, eax
        je      L_54ec
L_54c0:
        mov     edx, dword ptr [esp + 0x2c]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_1001b280
        mov     esi, eax
        test    esi, esi
        jl      L_54f0
        mov     eax, dword ptr [esp + 0x20]
        add     eax, -0x14
        push    eax
        call    FUN_10005a40
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
L_54ec:
        mov     esi, dword ptr [esp + 0x18]
L_54f0:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
