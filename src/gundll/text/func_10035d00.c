/*
 * FUN_10035D00 (390 B) - __stdcall, RET 0x1c.  COM-style object builder with
 * FPU timing check (timeGetTime IAT 0x10049204 vs a double threshold at
 * 0x1004b0b8), virtual calls through arg1->+0x18 object, and a final
 * registration via FUN_10034ba0 / FUN_10033af0.  Returns an HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049204;   /* IAT: timeGetTime */
extern double g_1004b0b8;  /* module .data double */
extern void __cdecl FUN_10034ba0(void);   /* rel32 call (thiscall, this=ecx) */
extern void __fastcall FUN_10033af0(void);   /* rel32 call (thiscall, this=ecx) */

__declspec(naked) void __stdcall FUN_10035D00(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        lea     esi, [eax + 0x18]
        mov     byte ptr [edi + 0x44], 1
        mov     ecx, dword ptr [esi]
        xor     ebx, ebx
        push    esi
        mov     dword ptr [esp + 0x14], ebx
        call    dword ptr [ecx + 8]
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x10]
        cmp     eax, 3
        jne     L_1
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 8]
        mov     dword ptr [esp + 0x24], eax
        call    dword ptr [g_10049204]
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebp, eax
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], ebx
        fild    qword ptr [esp + 0x14]
        fld     qword ptr [ecx + 0x28]
        fadd    qword ptr [g_1004b0b8]
        fcompp
        fnstsw  ax
        test    ah, 5
        jp      L_1
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x14]
        cmp     ax, 8
        jb      L_1
        cmp     esi, ebx
        je      L_2
        mov     eax, dword ptr [esi]
        push    ebx
        push    ebx
        push    8
        push    ebx
        lea     ecx, [esp + 0x24]
        push    ecx
        push    esi
        call    dword ptr [eax]
        cmp     eax, ebx
        jl      L_3
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x24]
        push    ebp
        mov     dword ptr [edx + 4], ebp
        call    FUN_10034ba0
    L_1:
        mov     ebx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ebx]
        mov     ecx, dword ptr [ebx + 4]
        xor     edx, edx
        mov     dx, ax
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [edi + 0x10]
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x24], edx
        mov     ecx, dword ptr [eax]
        lea     edx, [edi - 4]
        push    edx
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        lea     edx, [esp + 0x2c]
        push    edx
        lea     edx, [esp + 0x24]
        push    edx
        lea     edx, [esp + 0x20]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx]
        movzx   eax, word ptr [esp + 0x24]
        mov     ebx, dword ptr [ebx + 4]
        mov     dword ptr [esp + 0x14], eax
        cmp     dword ptr [esp + 0x18], ebx
        je      L_4
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        push    ebx
        push    eax
        call    dword ptr [ecx + 0x14]
    L_4:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x3c]
        lea     ebp, [edx - 0xc]
        mov     dword ptr [ebp + 4], eax
        mov     ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 0x4c]
        mov     byte ptr [ebp + 8], al
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 8]
        mov     ecx, dword ptr [edi + 8]
        mov     esi, dword ptr [ecx]
        mov     edx, dword ptr [esp + 0x38]
        push    edx
        mov     edx, dword ptr [esp + 0x38]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    ebp
        push    edx
        mov     edx, dword ptr [eax]
        push    1
        lea     ecx, [esp + 0x28]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x14]
        push    eax
        mov     eax, dword ptr [edi + 8]
        push    eax
        call    dword ptr [esi + 0x1c]
        mov     esi, eax
        cmp     esi, 0x15800e
        jne     L_5
        xor     esi, esi
        jmp     L_6
    L_2:
        mov     eax, 0x80070057
    L_3:
        mov     byte ptr [edi + 0x44], bl
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x1c
    L_5:
        test    esi, esi
        jge     L_6
        mov     ecx, dword ptr [esp + 0x28]
        call    FUN_10033af0
    L_6:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_7
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
    L_7:
        mov     byte ptr [edi + 0x44], 0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x1c
    }
}
