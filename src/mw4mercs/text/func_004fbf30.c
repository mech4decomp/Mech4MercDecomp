/*
 * FUN_004fbf30 (462 B) — __thiscall, RET 0x4: MLR/Adept application-core
 * routine that reads a count from a stream object, reallocates a per-entry
 * array of 0x1c-byte records, and fills each record from the stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004fc100(void);
extern void __cdecl FUN_004fc170(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void FUN_004fbf30(void)
{
    __asm {
        sub     esp, 0x1c
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0
        jle     L_f0f6
        push    ebx
        push    ebp
        lea     ebp, [esi + 0x10]
        mov     dword ptr [esp + 0x14], ebp
    L_fbf66:
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esp + 0x10]
        cmp     edx, dword ptr [ebp + 0x4]
        mov     dword ptr [esp + 0x1c], edx
        jz      L_fc066
        test    edx, edx
        jbe     L_fc047
        lea     eax, [edx*8 + 0x0]
        sub     eax, edx
        shl     eax, 0x2
        mov     dword ptr [esp + 0x18], eax
        add     eax, 0x4
        push    eax
        mov     edi, edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fbfd3
        lea     ebx, [eax + 0x4]
        mov     dword ptr [eax], edi
        lea     eax, [edi + -0x1]
        test    eax, eax
        mov     esi, ebx
        jl      L_fbfcd
        lea     edi, [eax + 0x1]
    L_fbfc0:
        mov     ecx, esi
        call    FUN_004fc100
        add     esi, 0x1c
        dec     edi
        jnz     L_fbfc0
    L_fbfcd:
        mov     dword ptr [esp + 0x18], ebx
        jmp     L_fbfdb
    L_fbfd3:
        mov     dword ptr [esp + 0x18], 0
    L_fbfdb:
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        jz      L_fc031
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     ecx, eax
        jnc     L_fbff3
        mov     eax, ecx
    L_fbff3:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_fc024
        mov     ecx, dword ptr [esp + 0x18]
        lea     edx, [eax*8 + 0x0]
        sub     edx, eax
        mov     ebx, ebp
        lea     esi, [ecx + edx*4]
        sub     ebx, ecx
        lea     edi, [eax + 0x1]
    L_fc011:
        lea     eax, [ebx + esi*1]
        push    eax
        mov     ecx, esi
        call    FUN_004fc170
        dec     edi
        sub     esi, 0x1c
        test    edi, edi
        ja      L_fc011
    L_fc024:
        test    ebp, ebp
        jz      L_fc031
        mov     edx, dword ptr [ebp]
        push    0x3
        mov     ecx, ebp
        call    dword ptr [edx]
    L_fc031:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x30]
        mov     dword ptr [ecx], eax
        mov     ebp, ecx
        jmp     L_fc05f
    L_fc047:
        mov     ecx, dword ptr [ebp]
        test    ecx, ecx
        jz      L_fc058
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
        mov     edx, dword ptr [esp + 0x10]
    L_fc058:
        mov     dword ptr [ebp], 0
    L_fc05f:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + 0x4], eax
    L_fc066:
        xor     ebx, ebx
        test    edx, edx
        jle     L_fc0d8
        mov     esi, dword ptr [ebp]
        add     esi, 0x14
    L_fc072:
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        mov     dword ptr [esp + 0x20], 0
        call    FUN_00412a00
        mov     edx, dword ptr [edi]
        add     esp, 0x8
        push    0x4
        lea     eax, [esp + 0x2c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        lea     ecx, [esi + -0x4]
        call    FUN_00412780
        mov     ecx, dword ptr [esi]
        call    FUN_0041fcb0
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x4], edx
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_fc0cc
        mov     cl, byte ptr [eax + -0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_fc0cc
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_fc0cc:
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        add     esi, 0x1c
        cmp     ebx, eax
        jl      L_fc072
    L_fc0d8:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        inc     eax
        add     ebp, 0x8
        cmp     eax, ecx
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x14], ebp
        jl      L_fbf66
        pop     ebp
        pop     ebx
    L_f0f6:
        pop     edi
        pop     esi
        add     esp, 0x1c
        ret     0x4
    }
}
