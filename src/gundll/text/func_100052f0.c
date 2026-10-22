/*
 * FUN_100052F0 (161 B) - __stdcall, RET 0x8.  Hash-table lookup / release
 * helper.  Validates arg1->field_0x14 / field_0x7c and arg2, then scans the
 * bucket table (ebx->field_0x04) for a node whose FUN_100059f0 match
 * succeeds, tracking a count in [esp+0x10].  Returns an HRESULT-style code
 * (0xc1120008 / 0x80070057 / 0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_100059f0(void);   /* rel32 call, RET 0xc (3 args) */

__declspec(naked) void __stdcall FUN_100052F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     cl, byte ptr [eax + 0x14]
        test    cl, cl
        push    ebx
        push    esi
        push    edi
        jne     L_5309
        pop     edi
        pop     esi
        mov     eax, 0xc1120008
        pop     ebx
        ret     0x8
L_5309:
        mov     ebx, dword ptr [eax + 0x7c]
        test    ebx, ebx
        jne     L_531b
        pop     edi
        pop     esi
        mov     eax, 0xc1120008
        pop     ebx
        ret     0x8
L_531b:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jne     L_532e
        pop     edi
        pop     esi
        mov     eax, 0x80070057
        pop     ebx
        ret     0x8
L_532e:
        mov     edx, dword ptr [ebx + 0x28]
        xor     eax, eax
        inc     edx
        cmp     word ptr [ebx], ax
        mov     dword ptr [ebx + 0x28], edx
        mov     dword ptr [esp + 0x10], eax
        jbe     L_5382
L_5340:
        mov     edx, dword ptr [ebx + 4]
        xor     edi, edi
        mov     di, ax
        shl     edi, 4
        mov     esi, dword ptr [edi + edx]
        add     edi, edx
        cmp     esi, edi
        je      L_5378
L_5354:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        js      L_536e
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 8]
        push    eax
        push    esi
        push    ecx
        call    FUN_100059f0
        test    al, al
        je      L_5382
L_536e:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jne     L_5354
        mov     eax, dword ptr [esp + 0x10]
L_5378:
        inc     eax
        cmp     ax, word ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        jb      L_5340
L_5382:
        mov     eax, dword ptr [ebx + 0x28]
        pop     edi
        dec     eax
        mov     dword ptr [ebx + 0x28], eax
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
