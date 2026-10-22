/*
 * FUN_1002FAB0 (227 B) - __stdcall, RET 0x1C.  Complex object/stream
 * construction: reads a GUID-ish header from arg3, dispatches through
 * several vtables (arg3->+0x10 vtable[3], arg3->+0xc vtable[5],
 * ebx+0x18 vtable[0x13], arg3->+8 vtable[8]), builds a result object at
 * arg1-0xc, and on error path calls FUN_10033af0(ebx).  Returns a status
 * code (0x15800e special-cased to 0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_10033af0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1002FAB0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esp + 0xc], eax
        xor     eax, eax
        mov     ax, word ptr [esi]
        xor     ecx, ecx
        cmp     ebx, ecx
        mov     dword ptr [esp + 8], ecx
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x20], eax
        je      L_1
        lea     ecx, [ebx + 0x18]
    L_1:
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, dword ptr [eax]
        lea     ebp, [edi - 4]
        push    ebp
        mov     ebp, dword ptr [esp + 0x30]
        push    ebp
        lea     ebp, [esp + 0x30]
        push    ebp
        lea     ebp, [esp + 0x24]
        push    ebp
        lea     ebp, [esp + 0x20]
        push    ebp
        push    ecx
        push    eax
        call    dword ptr [edx + 0xc]
        movzx   eax, word ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esi + 4]
        cmp     ecx, eax
        je      L_2
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ecx
        call    dword ptr [edx + 0x14]
    L_2:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x38]
        lea     esi, [eax - 0xc]
        lea     eax, [ebx + 0x18]
        mov     dword ptr [esi + 4], ecx
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x4c]
        mov     ecx, dword ptr [esp + 0x34]
        push    ecx
        mov     ecx, dword ptr [esp + 0x34]
        lea     edx, [esp + 0x28]
        push    edx
        push    esi
        push    ecx
        push    1
        mov     byte ptr [esi + 8], al
        mov     edi, dword ptr [edi + 8]
        mov     eax, dword ptr [edi]
        lea     edx, [esp + 0x28]
        push    edx
        push    edi
        call    dword ptr [eax + 0x20]
        mov     esi, eax
        cmp     esi, 0x15800e
        pop     edi
        pop     ebp
        jne     L_3
        xor     esi, esi
        jmp     L_4
    L_3:
        test    esi, esi
        jge     L_4
        mov     ecx, ebx
        call    FUN_10033af0
    L_4:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_5
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
    L_5:
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     0x1c
    }
}
