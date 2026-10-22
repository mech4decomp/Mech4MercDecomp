/*
 * FUN_100346a0 (181 B) - __stdcall, RET 0x8.  SEH-framed object
 * allocator/initializer.  If arg2==0, calls FUN_10032780 (thiscall) on
 * this->+0x14 with arg1.  Otherwise allocates a 0x3c-byte header
 * (FUN_10001d50), fills it, allocates a 0x28-byte object, initializes
 * it via FUN_100340e0 (thiscall, 4 args), and stores obj+0x18 into
 * arg2.  Returns 0 on success, 0x8007000e on alloc failure.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __cdecl FUN_100340e0(void);   /* rel32 call */
extern void FUN_10032780(void);           /* rel32 call */

__declspec(naked) void __stdcall FUN_100346a0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x10048aeb
        push    eax
        mov     dword ptr fs:[0], esp
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ebx + 0x14]
        xor     ebp, ebp
        cmp     edi, ebp
        jne     L_ca
        xor     eax, eax
        jmp     L_740
    L_ca:
        cmp     dword ptr [esp + 0x24], ebp
        je      L_734
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jne     L_e7
        mov     ebp, 0x8007000e
        jmp     L_73e
    L_e7:
        push    0x28
        mov     dword ptr [esi], 4
        mov     word ptr [esi + 8], bp
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi + 0xc], ebx
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        cmp     eax, ebp
        mov     dword ptr [esp + 0x18], ebp
        je      L_722
        mov     ecx, dword ptr [edi + 0x10]
        push    ecx
        push    ebp
        push    esi
        add     edi, 8
        push    edi
        mov     ecx, eax
        call    FUN_100340e0
        cmp     eax, ebp
        jne     L_729
    L_722:
        mov     ebp, 0x8007000e
        jmp     L_73e
    L_729:
        mov     ecx, dword ptr [esp + 0x24]
        add     eax, 0x18
        mov     dword ptr [ecx], eax
        jmp     L_73e
    L_734:
        push    ebx
        mov     ecx, edi
        call    FUN_10032780
        mov     ebp, eax
    L_73e:
        mov     eax, ebp
    L_740:
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
